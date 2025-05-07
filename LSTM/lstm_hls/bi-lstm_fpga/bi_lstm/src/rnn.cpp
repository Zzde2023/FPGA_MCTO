#include "rnn.h"
#include "weight_sparse3.h"

#define SKIP_THRESHOLD 3.5//3.5 2.6
#define ENERGY_THRESHOLD 0.01//17.46
#define SIGMOID_XMIN -8
#define SIGMOID_XMAX 8
#define TANH_XMIN -4
#define TANH_XMAX 4
#define LUT_SCALE_SIGMOID 15.9375 // 256 / (SIGMOID_XMAX - SIGMOID_XMIN)
#define LUT_SCALE_TANH 31.875     // 256 / (TANH_XMAX - TANH_XMIN)

/*
bool is_similar(act_t x_t[INPUT_DIM], act_t x_prev[INPUT_DIM], act_t threshold) {
#pragma HLS INLINE
    act_t diff_sum = 0;
    for (int i = 0; i < INPUT_DIM; ++i) {
#pragma HLS UNROLL
        act_t diff = x_t[i] - x_prev[i];
        diff_sum += (diff >= 0) ? diff : act_t(-diff);
    }
    return (diff_sum < threshold);
}
*/

inline bool should_skip(const act_t x_t[INPUT_DIM], const act_t x_prev[INPUT_DIM]) {
    #pragma HLS INLINE
    temp_t diff_sum = 0;
    temp_t energy = 0;

    for (int i = 0; i < INPUT_DIM; ++i) {
        #pragma HLS UNROLL
        temp_t delta = x_t[i] - x_prev[i];
        diff_sum += hls::abs(delta);
        energy += hls::abs(x_t[i]); // 可替换为 x_t[i] * x_t[i] if L2 energy
    }

    bool skip_by_delta = (diff_sum < SKIP_THRESHOLD);       // 小于变化阈值
    bool skip_by_energy = (energy < ENERGY_THRESHOLD);      // 小于能量阈值
    return skip_by_delta || skip_by_energy;
}

inline act_t clamp_fixed(act_t x, act_t xmin, act_t xmax) {
#pragma HLS INLINE
    if (x < xmin) return xmin;
    else if (x > xmax) return xmax;
    else return x;
}

inline void sigmoid(act_t* res, act_t* x, int size) {
     #pragma HLS INLINE off
     for(int i=0; i<size; ++i) {
		 #pragma HLS UNROLL factor=8
    	 if (x[i]>act_t(SIGMOID_XMAX)) res[i]=act_t(1);
    	 else if (x[i]<act_t(SIGMOID_XMIN)) res[i]=act_t(0);
    	 else {
			 const ap_uint<8> idx = (ap_uint<8>)((temp_t(x[i]) + temp_t(SIGMOID_XMAX)) * temp_t(LUT_SCALE_SIGMOID));//  [0,255]
			 res[i] = sigmoid_lut[idx];
    	 }
     }
}

inline void tanh(act_t* res, act_t* x, int size) {
     #pragma HLS INLINE off
     for(int i=0; i<size; ++i) {
		 #pragma HLS UNROLL factor=8
    	 if (x[i]>act_t(TANH_XMAX)) res[i]=act_t(1);
		 else if (x[i]<act_t(TANH_XMIN)) res[i]=act_t(-1);
		 else {
			 const ap_uint<8>  idx = (ap_uint<8>)((temp_t(x[i]) + temp_t(TANH_XMAX)) * temp_t(LUT_SCALE_TANH));
			 res[i] = tanh_lut[idx];
		 }
     }
}


void merge_output(act_t h_forward[HIDDEN_DIM], act_t h_backward[HIDDEN_DIM], act_t h_out[2 * HIDDEN_DIM]) {
    for (int i = 0; i < HIDDEN_DIM; i++) {
		#pragma HLS UNROLL
        h_out[i] = h_forward[i];
        h_out[HIDDEN_DIM + i] = h_backward[i];
    }
}

void lstm_forward(act_t input[MAX_SEQ_LEN * INPUT_DIM], int valid_len, act_t h_out[HIDDEN_DIM], act_t c_out[HIDDEN_DIM]) {
    act_t h_t[HIDDEN_DIM];
    act_t C_t[HIDDEN_DIM];
    act_t x_h[INPUT_DIM + HIDDEN_DIM];

    act_t i_[HIDDEN_DIM];
    act_t f[HIDDEN_DIM];
	act_t g[HIDDEN_DIM];
	act_t o[HIDDEN_DIM];
	#pragma HLS ARRAY_PARTITION variable=x_h cyclic factor=8
	#pragma HLS ARRAY_PARTITION variable=h_t cyclic factor=8  // 完全分区提升并行访问
    #pragma HLS ARRAY_PARTITION variable=C_t cyclic factor=8
	#pragma HLS ARRAY_PARTITION variable=f cyclic factor=8
	#pragma HLS ARRAY_PARTITION variable=i_ cyclic factor=8
	#pragma HLS ARRAY_PARTITION variable=g cyclic factor=8
	#pragma HLS ARRAY_PARTITION variable=o cyclic factor=8
	for(int i=0;i<HIDDEN_DIM;i++){
	   #pragma HLS UNROLL
	   C_t[i]=0.0;
	   h_t[i]=0.0;
	}
	act_t x_prev[INPUT_DIM] = {0};
	int skip_num=0;
	 for (int t = 0; t < valid_len; t++) {
		 // 提取当前输入帧 x_t
		 act_t x_t[INPUT_DIM];
		 for (int i = 0; i < INPUT_DIM; ++i) {
			 #pragma HLS UNROLL
			 x_t[i] = input[t * INPUT_DIM + i];
		 }

		 // 判断是否跳过
		 if (should_skip(x_t, x_prev)) {skip_num++;continue;}

		 // 不跳则处理，并更新 x_prev
		 for (int i = 0; i < INPUT_DIM; ++i) {
			 #pragma HLS UNROLL
			 x_prev[i] = x_t[i];
		 }

		 //数据合并
		 for (int i = 0; i < INPUT_DIM; i++) {
			#pragma HLS UNROLL
			x_h[i] = x_t[i];
		 }
		for (int i = 0; i < HIDDEN_DIM; i++){
			#pragma HLS UNROLL
			x_h[INPUT_DIM + i] = h_t[i];
		}
		//gate fuse compute
		for (int i = 0; i < HIDDEN_DIM; ++i) {
			#pragma HLS UNROLL //16->32
			i_[i] = Bias_i_f[i];
			f[i] = Bias_f_f[i];
			g[i] = Bias_g_f[i];
			o[i] = Bias_o_f[i];
		}
		for (int j = 0; j < INPUT_DIM + HIDDEN_DIM; ++j) {
			#pragma HLS PIPELINE  //pipeline
			act_t xj=x_h[j];
			for (int i = 0; i < HIDDEN_DIM; ++i) {
				#pragma HLS UNROLL factor = 8 //DSP 16*4 = 64
				i_[i] += Weight_i_f[i][j] * xj;
				f[i]  += Weight_f_f[i][j] * xj;
				g[i]  += Weight_g_f[i][j] * xj;
				o[i]  += Weight_o_f[i][j] * xj;
			}
		}
		sigmoid(i_, i_, HIDDEN_DIM);
		sigmoid(f, f, HIDDEN_DIM);
		tanh(g, g, HIDDEN_DIM);
		sigmoid(o, o, HIDDEN_DIM);

		//update C_t and h_t
		for (int j = 0; j < HIDDEN_DIM; j++) {
			#pragma HLS UNROLL factor = 8 //DSP 32*4 = 128
			C_t[j] = f[j] * C_t[j] + i_[j] * g[j];
			temp_t temp_x = clamp_fixed(C_t[j], TANH_XMIN, TANH_XMAX);
			const ap_uint<8> idx = ap_uint<8>((temp_x + temp_t(TANH_XMAX))*temp_t(LUT_SCALE_TANH));
			h_t[j] = o[j] * tanh_lut[idx];
		}
#if MARGIN_BASE
		for (int i = 0; i < CLASS_NUM; i++) {
			#pragma HLS UNROLL
			fc_out[i] = Bias_lc[i];
		}
		for (int j = 0; j <HIDDEN_DIM; ++j) {
			#pragma HLS PIPELINE II=1
			for (int i = 0; i < CLASS_NUM; ++i) {
				#pragma HLS UNROLL   //factor=2->cancel DSP 10
				fc_out[i] += Weight_lc[i][j]*h_t[j];
			}
		}
		for(int k=0;k<CLASS_NUM;k++){
			#pragma HLS UNROLL
			res[k]=float(fc_out[k]);
		}
        cur_argmax = argmaxPred(res);
        float max_val = res[cur_argmax], second_max = -INFINITY;
        for (int i = 0; i < CLASS_NUM; ++i) {
			#pragma HLS PIPELINE
            if (i != cur_argmax && res[i] > second_max)
                second_max = res[i];
        }
        if (cur_argmax == last_pred && (max_val - second_max) > MARGIN_THRESHOLD) {
            if (++stable_count >= EARLY_EXIT_STREAK) {
            	return ;
            }
        } else {
            stable_count = 0;
        }
        last_pred = cur_argmax;

#endif
    }
	if(skip_num>0) printf("(forward)skip_num=%d(%f)\n", skip_num,skip_num*1.0f/valid_len);
    for (int i = 0; i < HIDDEN_DIM; i++) {
		#pragma HLS UNROLL
        h_out[i] = h_t[i];
        c_out[i] = C_t[i];
    }
}

void lstm_backward(act_t input[MAX_SEQ_LEN*INPUT_DIM], int valid_len, act_t h_out[HIDDEN_DIM], act_t c_out[HIDDEN_DIM]) {
    act_t h_t[HIDDEN_DIM];
    act_t C_t[HIDDEN_DIM];
    act_t x_h[INPUT_DIM + HIDDEN_DIM];

    act_t i_[HIDDEN_DIM];
    act_t f[HIDDEN_DIM];
	act_t g[HIDDEN_DIM];
	act_t o[HIDDEN_DIM];

#pragma HLS ARRAY_PARTITION variable=x_h cyclic factor=8
#pragma HLS ARRAY_PARTITION variable=h_t cyclic factor=8  // 完全分区提升并行访问
#pragma HLS ARRAY_PARTITION variable=C_t cyclic factor=8
#pragma HLS ARRAY_PARTITION variable=f cyclic factor=8
#pragma HLS ARRAY_PARTITION variable=i_ cyclic factor=8
#pragma HLS ARRAY_PARTITION variable=g cyclic factor=8
#pragma HLS ARRAY_PARTITION variable=o cyclic factor=8

	for(int i=0;i<HIDDEN_DIM;i++){
	   #pragma HLS UNROLL
	   C_t[i]=0.0;
	   h_t[i]=0.0;
	}
	act_t x_prev[INPUT_DIM] = {0};
	int skip_num=0;
    for (int t = valid_len - 1; t >= 0; t--) {
    	// 提取当前输入帧 x_t
		 act_t x_t[INPUT_DIM];
		 for (int i = 0; i < INPUT_DIM; ++i) {
			 #pragma HLS UNROLL
			 x_t[i] = input[t * INPUT_DIM + i];
		 }

		 // 判断是否跳过
		 if (should_skip(x_t, x_prev)) {skip_num++;continue;}

		 // 不跳则处理，并更新 x_prev
		 for (int i = 0; i < INPUT_DIM; ++i) {
			 #pragma HLS UNROLL
			 x_prev[i] = x_t[i];
		 }

		 //数据合并
		 for (int i = 0; i < INPUT_DIM; i++) {
			#pragma HLS UNROLL
			x_h[i] = x_t[i];
		 }
        for (int i = 0; i < INPUT_DIM; i++) {
			#pragma HLS UNROLL
        	x_h[i] = input[t*INPUT_DIM + i];
        }
        for (int i = 0; i < HIDDEN_DIM; i++) {
			#pragma HLS UNROLL
        	x_h[INPUT_DIM + i] = h_t[i];
        }
        //gate fuse compute
		for (int i = 0; i < HIDDEN_DIM; ++i) {
			#pragma HLS UNROLL //16->32
			i_[i] = Bias_i_b[i];
			f[i] = Bias_f_b[i];
			g[i] = Bias_g_b[i];
			o[i] = Bias_o_b[i];
		}
		for (int j = 0; j < INPUT_DIM + HIDDEN_DIM; ++j) {
			#pragma HLS PIPELINE   //pipeline
			act_t xj=x_h[j];
			for (int i = 0; i < HIDDEN_DIM; ++i) {
				#pragma HLS UNROLL factor = 8  //DSP 16*4 = 64
				i_[i] += Weight_i_b[i][j] * xj;
				f[i]  += Weight_f_b[i][j] * xj;
				g[i]  += Weight_g_b[i][j] * xj;
				o[i]  += Weight_o_b[i][j] * xj;
			}
		}

		sigmoid(i_, i_, HIDDEN_DIM);
		sigmoid(f, f, HIDDEN_DIM);
		tanh(g, g, HIDDEN_DIM);
		sigmoid(o, o, HIDDEN_DIM);

		//update C_t and h_t
		for (int j = 0; j < HIDDEN_DIM; j++) {
			#pragma HLS UNROLL factor = 8 //DSP 32*4 = 128
			C_t[j] = f[j] * C_t[j] + i_[j] * g[j];
			temp_t temp_x = clamp_fixed(C_t[j], TANH_XMIN, TANH_XMAX);
			const ap_uint<8> idx = ap_uint<8>((temp_x + temp_t(TANH_XMAX))*temp_t(LUT_SCALE_TANH));
			h_t[j] = o[j] * tanh_lut[idx];
		}
    }
    if(skip_num>0) printf("(backward)skip_num=%d(%f)\n", skip_num,skip_num*1.0f/valid_len);
    for (int i = 0; i < HIDDEN_DIM; i++) {
		#pragma HLS UNROLL
        h_out[i] = h_t[i];
        c_out[i] = C_t[i];
    }
}

void compute_bilstm(act_t input_f[MAX_SEQ_LEN * INPUT_DIM],act_t input_b[MAX_SEQ_LEN*INPUT_DIM], int valid_len, act_t h_out[2 * HIDDEN_DIM]) {
#pragma HLS DATAFLOW
    act_t h_f[HIDDEN_DIM];
    act_t c_f[HIDDEN_DIM];
    act_t h_b[HIDDEN_DIM];
    act_t c_b[HIDDEN_DIM];
	#pragma HLS ARRAY_PARTITION variable=h_f cyclic factor=8  // 循环分区提升并行性
	#pragma HLS ARRAY_PARTITION variable=h_b cyclic factor=8
    lstm_forward(input_f, valid_len, h_f, c_f);
    lstm_backward(input_b, valid_len, h_b, c_b);
    merge_output(h_f, h_b, h_out);
}

void lstm_infer(float input[MAX_SEQ_LEN * INPUT_DIM], int valid_len, float ress[CLASS_NUM]) {
	act_t input_f[MAX_SEQ_LEN * INPUT_DIM];
	act_t input_b[MAX_SEQ_LEN * INPUT_DIM];
//	#pragma HLS ARRAY_PARTITION variable=input_f dim=1 block factor=16
//	#pragma HLS ARRAY_PARTITION variable=input_b dim=1 block factor=16
	#pragma HLS RESOURCE variable=Weight_i_f core=ROM_1P_BRAM
	#pragma HLS RESOURCE variable=Weight_f_f core=ROM_1P_BRAM
	#pragma HLS RESOURCE variable=Weight_g_f core=ROM_1P_BRAM
	#pragma HLS RESOURCE variable=Weight_o_f core=ROM_1P_BRAM
	#pragma HLS RESOURCE variable=Weight_i_b core=ROM_1P_BRAM
	#pragma HLS RESOURCE variable=Weight_f_b core=ROM_1P_BRAM
	#pragma HLS RESOURCE variable=Weight_g_b core=ROM_1P_BRAM
	#pragma HLS RESOURCE variable=Weight_o_b core=ROM_1P_BRAM
	#pragma HLS RESOURCE variable=Weight_fc1 core=ROM_1P_BRAM
	#pragma HLS RESOURCE variable=Weight_fc2 core=ROM_1P_BRAM

	#pragma HLS ARRAY_PARTITION variable=Weight_i_f block  factor=8 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_f_f block   factor=8 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_g_f block  factor=8 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_o_f block  factor=8 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_i_b block  factor=8 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_f_b block  factor=8 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_g_b block  factor=8 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_o_b block  factor=8 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_fc1 block  factor=8 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_fc2 block  factor=5 dim=1

	#pragma HLS ARRAY_PARTITION variable=Bias_i_f cyclic   factor=8
	#pragma HLS ARRAY_PARTITION variable=Bias_f_f cyclic   factor=8
	#pragma HLS ARRAY_PARTITION variable=Bias_g_f cyclic   factor=8
	#pragma HLS ARRAY_PARTITION variable=Bias_o_f cyclic   factor=8
	#pragma HLS ARRAY_PARTITION variable=Bias_i_b cyclic   factor=8
	#pragma HLS ARRAY_PARTITION variable=Bias_f_b cyclic   factor=8
	#pragma HLS ARRAY_PARTITION variable=Bias_g_b cyclic   factor=8
	#pragma HLS ARRAY_PARTITION variable=Bias_o_b cyclic   factor=8
	#pragma HLS ARRAY_PARTITION variable=Bias_fc1 cyclic   factor=8
	#pragma HLS ARRAY_PARTITION variable=Bias_fc2 complete

	#pragma HLS RESOURCE variable=sigmoid_lut core=ROM_1P_BRAM
	#pragma HLS RESOURCE variable=tanh_lut core=ROM_1P_BRAM


	for (int i = 0; i < valid_len*INPUT_DIM; ++i) {
		#pragma HLS PIPELINE II=1
		input_f[i] = act_t(input[i]);
		input_b[i] = act_t(input[i]);
	}

	act_t h_t_cat[2 * HIDDEN_DIM];
	#pragma HLS ARRAY_PARTITION variable=h_t_cat cyclic factor=8 // 循环分区提升并行性
	#pragma HLS DATAFLOW disable_start_propagation
	compute_bilstm(input_f, input_b, valid_len, h_t_cat);

    act_t fc1_out[HIDDEN_DIM];
    act_t fc2_out[CLASS_NUM];
	#pragma HLS ARRAY_PARTITION variable=fc1_out cyclic factor=10
	#pragma HLS ARRAY_PARTITION variable=fc2_out complete // 循环分区提升并行性

	for (int i = 0; i < HIDDEN_DIM; i++) {
		#pragma HLS UNROLL
		fc1_out[i] = Bias_fc1[i];
	}
	for (int j = 0; j <2*HIDDEN_DIM; ++j) {
		#pragma HLS PIPELINE
		act_t h_t_all = h_t_cat[j];
		for (int i = 0; i < HIDDEN_DIM; ++i) {
			#pragma HLS UNROLL factor=8  //factor=2->cancel DSP 10
			fc1_out[i] += Weight_fc1[i][j]*h_t_all;
		}
	}

    for (int i = 0; i < CLASS_NUM; i++) {
		#pragma HLS UNROLL
    	fc2_out[i] = Bias_fc2[i];
	}

	for (int j = 0; j <HIDDEN_DIM; ++j) {
		#pragma HLS PIPELINE
		act_t fc1 = fc1_out[j]>act_t(0)?fc1_out[j]:act_t(0);
		for (int i = 0; i < CLASS_NUM; ++i) {
			#pragma HLS UNROLL   //factor=2->cancel DSP 10
			fc2_out[i] += Weight_fc2[i][j]*fc1;
		}
	}
	
    for (int i = 0; i < CLASS_NUM; i++) {
		#pragma HLS UNROLL  // 输出完全展开
        ress[i] = float(fc2_out[i]);
    }
}

