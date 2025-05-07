// 最终版：BiLSTM + 时间跳过 + 步进式 Early Exit（逐步双向处理 + 立即分类判断）
#include "rnn.h"
#include "weight_sparse3.h"

#define SKIP_THRESHOLD 3.5
#define ENERGY_THRESHOLD 0.01
#define SIGMOID_XMIN -8
#define SIGMOID_XMAX 8
#define TANH_XMIN -4
#define TANH_XMAX 4
#define LUT_SCALE_SIGMOID 15.9375
#define LUT_SCALE_TANH 31.875
#define MARGIN_THRESHOLD 6.8 //5.5(80%) 6.8(90%)
#define EARLY_EXIT_STREAK 3

inline bool should_skip(const act_t x_t[INPUT_DIM], const act_t x_prev[INPUT_DIM]) {
    #pragma HLS INLINE
    temp_t diff_sum = 0;
    temp_t energy = 0;

    for (int i = 0; i < INPUT_DIM; ++i) {
		#pragma HLS PIPELINE II=1
    	temp_t delta = x_t[i] - x_prev[i];
		if(delta>=0)
			diff_sum += delta;
		else
			diff_sum -= delta;
		if (x_t[i] >= 0)
			energy += x_t[i];
		else
			energy -= x_t[i];
    }
    bool skip_by_delta = (diff_sum < SKIP_THRESHOLD);       // 小于变化阈值
	bool skip_by_energy = (energy < ENERGY_THRESHOLD);      // 小于能量阈值
	return skip_by_delta || skip_by_energy;
}

inline act_t clamp_fixed(act_t x, act_t xmin, act_t xmax) {
    #pragma HLS INLINE
    return (x < xmin) ? xmin : (x > xmax) ? xmax : x;
}

inline void sigmoid(act_t* res, act_t* x, int size) {
     #pragma HLS INLINE off
     for(int i=0; i<size; ++i) {
		 #pragma HLS UNROLL factor=5
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
		 #pragma HLS UNROLL factor=5
    	 if (x[i]>act_t(TANH_XMAX)) res[i]=act_t(1);
		 else if (x[i]<act_t(TANH_XMIN)) res[i]=act_t(-1);
		 else {
			 const ap_uint<8>  idx = (ap_uint<8>)((temp_t(x[i]) + temp_t(TANH_XMAX)) * temp_t(LUT_SCALE_TANH));
			 res[i] = tanh_lut[idx];
		 }
     }
}

// 单步 LSTM 推理，用于 forward/backward
inline void step_lstm_f(
    act_t x_t[INPUT_DIM], act_t x_prev[INPUT_DIM],
    act_t h_t[HIDDEN_DIM], act_t c_t[HIDDEN_DIM]) {

    act_t x_h[INPUT_DIM + HIDDEN_DIM];
    act_t i_[HIDDEN_DIM], f[HIDDEN_DIM], g[HIDDEN_DIM], o[HIDDEN_DIM];

    for (int i = 0; i < INPUT_DIM; ++i) {
#pragma HLS UNROLL
    	x_h[i] = x_t[i];
    }
    for (int i = 0; i < HIDDEN_DIM; ++i) {
#pragma HLS UNROLL
    	x_h[INPUT_DIM + i] = h_t[i];
    }

    for (int i = 0; i < HIDDEN_DIM; ++i) {
        #pragma HLS UNROLL factor=5
        i_[i] =Bias_i_f[i];
        f[i]  =Bias_f_f[i];
        g[i]  =Bias_g_f[i];
        o[i]  =Bias_o_f[i];
    }
    for (int j = 0; j < INPUT_DIM + HIDDEN_DIM; ++j) {
		#pragma HLS PIPELINE
        act_t xj = x_h[j];
        for (int i = 0; i < HIDDEN_DIM; ++i) {
			#pragma HLS UNROLL factor=2
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

    for (int j = 0; j < HIDDEN_DIM; j++) {
        #pragma HLS UNROLL factor=5
        c_t[j] = f[j] * c_t[j] + i_[j] * g[j];
        temp_t temp_x = clamp_fixed(c_t[j], TANH_XMIN, TANH_XMAX);
		const ap_uint<8> idx = ap_uint<8>((temp_x + temp_t(TANH_XMAX))*temp_t(LUT_SCALE_TANH));
		h_t[j] = o[j] * tanh_lut[idx];
     }
}
// 单步 LSTM 推理，用于 forward/backward
inline void step_lstm_b(
    act_t x_t[INPUT_DIM], act_t x_prev[INPUT_DIM],
    act_t h_t[HIDDEN_DIM], act_t c_t[HIDDEN_DIM]) {

    act_t x_h[INPUT_DIM + HIDDEN_DIM];
    act_t i_[HIDDEN_DIM], f[HIDDEN_DIM], g[HIDDEN_DIM], o[HIDDEN_DIM];

    for (int i = 0; i < INPUT_DIM; ++i) {
#pragma HLS UNROLL
    	x_h[i] = x_t[i];
    }
    for (int i = 0; i < HIDDEN_DIM; ++i) {
#pragma HLS UNROLL
    	x_h[INPUT_DIM + i] = h_t[i];
    }

    for (int i = 0; i < HIDDEN_DIM; ++i) {
        #pragma HLS UNROLL factor=5
        i_[i] =Bias_i_b[i];
        f[i]  =Bias_f_b[i];
        g[i]  =Bias_g_b[i];
        o[i]  =Bias_o_b[i];
    }
    for (int j = 0; j < INPUT_DIM + HIDDEN_DIM; ++j) {
		#pragma HLS PIPELINE
        act_t xj = x_h[j];
        for (int i = 0; i < HIDDEN_DIM; ++i) {
			#pragma HLS UNROLL factor=2
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

    for (int j = 0; j < HIDDEN_DIM; j++) {
        #pragma HLS UNROLL factor=5
        c_t[j] = f[j] * c_t[j] + i_[j] * g[j];
        temp_t temp_x = clamp_fixed(c_t[j], TANH_XMIN, TANH_XMAX);
		const ap_uint<8> idx = ap_uint<8>((temp_x + temp_t(TANH_XMAX))*temp_t(LUT_SCALE_TANH));
		h_t[j] = o[j] * tanh_lut[idx];
     }
}
void lstm_infer(float input[MAX_SEQ_LEN * INPUT_DIM], int valid_len, float ress[CLASS_NUM]) {
    act_t h_f[HIDDEN_DIM] = {0}, c_f[HIDDEN_DIM] = {0};
    act_t h_b[HIDDEN_DIM] = {0}, c_b[HIDDEN_DIM] = {0};
    act_t x_prev_f[INPUT_DIM] = {0};
    act_t x_prev_b[INPUT_DIM] = {0};
#pragma HLS ARRAY_PARTITION variable=h_f cyclic factor=5  // 循环分区提升并行性
#pragma HLS ARRAY_PARTITION variable=h_b cyclic factor=5
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

	#pragma HLS ARRAY_PARTITION variable=Weight_i_f block  factor=5 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_f_f block   factor=5 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_g_f block  factor=5 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_o_f block  factor=5 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_i_b block  factor=5 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_f_b block  factor=5 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_g_b block  factor=5 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_o_b block  factor=5 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_fc1 block  factor=5 dim=1
	#pragma HLS ARRAY_PARTITION variable=Weight_fc2 block  factor=2 dim=1

	#pragma HLS ARRAY_PARTITION variable=Bias_i_f cyclic   factor=5
	#pragma HLS ARRAY_PARTITION variable=Bias_f_f cyclic   factor=5
	#pragma HLS ARRAY_PARTITION variable=Bias_g_f cyclic   factor=5
	#pragma HLS ARRAY_PARTITION variable=Bias_o_f cyclic   factor=5
	#pragma HLS ARRAY_PARTITION variable=Bias_i_b cyclic   factor=5
	#pragma HLS ARRAY_PARTITION variable=Bias_f_b cyclic   factor=5
	#pragma HLS ARRAY_PARTITION variable=Bias_g_b cyclic   factor=5
	#pragma HLS ARRAY_PARTITION variable=Bias_o_b cyclic   factor=5
	#pragma HLS ARRAY_PARTITION variable=Bias_fc1 cyclic   factor=5
	#pragma HLS ARRAY_PARTITION variable=Bias_fc2 complete

	#pragma HLS RESOURCE variable=sigmoid_lut core=ROM_1P_BRAM
	#pragma HLS RESOURCE variable=tanh_lut core=ROM_1P_BRAM

    for (int j = 0; j < HIDDEN_DIM; j++) {
#pragma HLS UNROLL factor=5
    	h_f[j]=0.0;
    	c_f[j]=0.0;
    	h_b[j]=0.0;
		c_b[j]=0.0;
    }
    int stable_count = 0;
    int last_pred = -1;
    float out[CLASS_NUM];
    act_t x_f[INPUT_DIM], x_b[INPUT_DIM];
    act_t h_cat[2 * HIDDEN_DIM];
    act_t fc1[HIDDEN_DIM], fc2[CLASS_NUM];
#pragma HLS ARRAY_PARTITION variable=h_t_cat cyclic factor=5 // 循环分区提升并行性
#pragma HLS ARRAY_PARTITION variable=fc1 cyclic factor=5
#pragma HLS ARRAY_PARTITION variable=fc2 complete // 循环分区提升并行性
    for (int t = 0; t < valid_len; ++t) {
        for (int i = 0; i < INPUT_DIM; ++i) {
			#pragma HLS UNROLL factor=3
            x_f[i] = input[t * INPUT_DIM + i];
            x_b[i] = input[(valid_len - 1 - t) * INPUT_DIM + i];
            x_prev_f[i] = 0.0;
            x_prev_b[i] = 0.0;
        }

        if (should_skip(x_f, x_prev_f) && should_skip(x_b, x_prev_b)) continue;
        for (int i = 0; i < INPUT_DIM; ++i) {
			#pragma HLS UNROLL factor=3
            x_prev_f[i] = x_f[i];
            x_prev_b[i] = x_b[i];
        }

        step_lstm_f(x_f, x_prev_f, h_f, c_f);
        step_lstm_b(x_b, x_prev_b, h_b, c_b);
        for (int i = 0; i < HIDDEN_DIM; ++i) {
			#pragma HLS UNROLL factor=5
			h_cat[i] = h_f[i];
			h_cat[HIDDEN_DIM + i] = h_b[i];
		}

		for (int i = 0; i < HIDDEN_DIM; ++i){
			#pragma HLS UNROLL factor=5
			fc1[i] = Bias_fc1[i];
		}
		for (int j = 0; j < 2 * HIDDEN_DIM; ++j) {
			#pragma HLS PIPELINE
			act_t hj = h_cat[j];
			for (int i = 0; i < HIDDEN_DIM; ++i) {
				#pragma HLS UNROLL factor=5
				fc1[i] += Weight_fc1[i][j] * hj;
			}
		}

		for (int i = 0; i < CLASS_NUM; ++i) {
			#pragma HLS UNROLL // 输出完全展开
			fc2[i] = Bias_fc2[i];
		}
		for (int j = 0; j < HIDDEN_DIM; ++j) {
			#pragma HLS PIPELINE
			act_t x = fc1[j] > act_t(0) ? fc1[j] : act_t(0);
			for (int i = 0; i < CLASS_NUM; ++i) {
				#pragma HLS UNROLL factor=2  // 输出完全展开
				fc2[i] += Weight_fc2[i][j] * x;
			}
		}
        float max_val = -INFINITY, second_max = -INFINITY;
        int argmax = -1;
        for (int i = 0; i < CLASS_NUM; ++i) {
            out[i] = float(fc2[i]);
            if (out[i] > max_val) {
                second_max = max_val;
                max_val = out[i];
                argmax = i;
            } else if (out[i] > second_max) {
                second_max = out[i];
            }
        }

        if (argmax == last_pred && (max_val - second_max) > MARGIN_THRESHOLD) {
            if (++stable_count >= EARLY_EXIT_STREAK) {
                for (int i = 0; i < CLASS_NUM; ++i) {
					#pragma HLS UNROLL  // 输出完全展开
                	ress[i] = out[i];
                }
                return;
            }
        } else {
            stable_count = 0;
        }
        last_pred = argmax;
    }
    for (int i = 0; i < CLASS_NUM; ++i) {
    	ress[i] = out[i];
    }
}
