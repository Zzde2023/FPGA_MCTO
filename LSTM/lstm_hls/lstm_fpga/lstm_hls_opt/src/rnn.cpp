#include <iostream>
#include <cmath>
#include <string.h>
#include "rnn.h"
#include "weight_sparse.h"
#include <hls_math.h>

#define SKIP_THRESHOLD 0.017
#define ENERGY_THRESHOLD 0.056
#define EARLY_EXIT_STREAK 1
#define MARGIN_THRESHOLD 4.6f
#define SIGMOID_XMIN -8
#define SIGMOID_XMAX 8
#define TANH_XMIN -4
#define TANH_XMAX 4
#define LUT_SCALE_SIGMOID 15.9375 // 256 / (SIGMOID_XMAX - SIGMOID_XMIN)
#define LUT_SCALE_TANH 31.875     // 256 / (TANH_XMAX - TANH_XMIN)
#define SKIP 0
#define MARGIN_BASE 1

/*
 * Diff Sum Threshold Candidates:
90% diff_sum <= 0.01773164253681898
95% diff_sum <= 0.021976161748170853
99% diff_sum <= 0.030495962128043175
Energy Threshold Candidates:
90% energy <= 0.03492656983435163
95% energy <= 0.04238370060920715
99% energy <= 0.056363091915846014
 */
inline bool should_skip(const act_t x_t[INPUT_DIM+HIDDEN_DIM], const act_t x_prev[INPUT_DIM+HIDDEN_DIM]) {
    act_t diff_sum = 0;
    act_t energy = 0;
    for (int i = 0; i < INPUT_DIM; ++i) {
		#pragma HLS PIPELINE II=1
        act_t delta = x_t[i] - x_prev[i];
        if(delta>=0)
        	diff_sum += delta;
        else
        	diff_sum -= delta;
        if (x_t[i] >= 0)
            energy += x_t[i];
        else
            energy -= x_t[i];
    }
    bool energy_low = (energy < ENERGY_THRESHOLD);
    bool diff_low = (diff_sum < SKIP_THRESHOLD);
    return diff_low || energy_low;
}

inline int argmaxPred(float in[CLASS_NUM]) {
#pragma HLS INLINE
	float max_val = -INFINITY;
	int argmax = 0;
	for (int i = 0; i < CLASS_NUM; ++i) {
	    if (in[i] > max_val) {
	        max_val = in[i];
	        argmax = i;
	    }
	}
    return argmax;
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
		 #pragma HLS UNROLL factor=32
//    	 if (x[i]>act_t(SIGMOID_XMAX)) res[i]=act_t(1);
//    	 else if (x[i]<act_t(SIGMOID_XMIN)) res[i]=act_t(0);
//    	 else {
//			 const ap_uint<8> idx = (ap_uint<8>)((temp_t(x[i]) + temp_t(SIGMOID_XMAX)) * temp_t(LUT_SCALE_SIGMOID));//  [0,255]
//			 res[i] = Sigmoid_lut[idx];
//    	 }
    	 res[i] = 1/(1+hls::exp(-x[i]));
     }
}

inline void tanh(act_t* res, act_t* x, int size) {
     #pragma HLS INLINE off
     for(int i=0; i<size; ++i) {
		 #pragma HLS UNROLL factor=32
//    	 if (x[i]>act_t(TANH_XMAX)) res[i]=act_t(1);
//		 else if (x[i]<act_t(TANH_XMIN)) res[i]=act_t(-1);
//		 else {
//			 const ap_uint<8>  idx = (ap_uint<8>)((temp_t(x[i]) + temp_t(TANH_XMAX)) * temp_t(LUT_SCALE_TANH));
//			 res[i] = Tanh_lut[idx];
//		 }
    	 res[i] = (hls::exp(x[i])-hls::exp(-x[i]))/(hls::exp(x[i])+hls::exp(-x[i]));
     }
}

int infer(float input[IMG_SIZE], float res[CLASS_NUM]) {
    act_t i_[HIDDEN_DIM];
    act_t f[HIDDEN_DIM];
	act_t g[HIDDEN_DIM];
	act_t o[HIDDEN_DIM];
    act_t C_t[HIDDEN_DIM], h_t[HIDDEN_DIM];
    act_t vec_i[INPUT_DIM + HIDDEN_DIM];
    act_t fc_out[CLASS_NUM];
    int last_pred = 9, cur_pred = 0, stable_count = 0;
    act_t x_prev[INPUT_DIM + HIDDEN_DIM] = {0};

#pragma HLS ARRAY_PARTITION variable=fc_out complete
#pragma HLS ARRAY_PARTITION variable=vec_i complete
#pragma HLS ARRAY_PARTITION variable=f cyclic factor=8
#pragma HLS ARRAY_PARTITION variable=i_ cyclic factor=8
#pragma HLS ARRAY_PARTITION variable=g cyclic factor=8
#pragma HLS ARRAY_PARTITION variable=o cyclic factor=8

#pragma HLS RESOURCE variable=Bias_f core=ROM_1P_LUTRAM
#pragma HLS RESOURCE variable=Bias_i core=ROM_1P_LUTRAM
#pragma HLS RESOURCE variable=Bias_c core=ROM_1P_LUTRAM
#pragma HLS RESOURCE variable=Bias_o core=ROM_1P_LUTRAM
#pragma HLS RESOURCE variable=Bias_lc core=ROM_1P_LUTRAM
#pragma HLS RESOURCE variable=Weight_lc core=ROM_1P_LUTRAM
#pragma HLS RESOURCE variable=Sigmoid_lut core=ROM_1P_LUTRAM
#pragma HLS RESOURCE variable=Tanh_lut core=ROM_1P_LUTRAM

#if HIDDEN_DIM <= 32
#pragma HLS ARRAY_PARTITION variable=h_t complete
#pragma HLS ARRAY_PARTITION variable=C_t complete
#elif HIDDEN_DIM <= 64
#pragma HLS ARRAY_PARTITION variable=h_t cyclic factor=8
#pragma HLS ARRAY_PARTITION variable=C_t block factor=16
#else
#pragma HLS ARRAY_PARTITION variable=h_t cyclic factor=8
#pragma HLS ARRAY_PARTITION variable=C_t cyclic factor=8
#endif
    for(int i=0;i<HIDDEN_DIM;i++){
	   #pragma HLS UNROLL
	   C_t[i]=0.0;
	   h_t[i]=0.0;
    }
    int skip_count = 0,cur_argmax;
    bool early_exited=false;
    for (int t = 0; t < INPUT_DIM; t++) {
        for (int j = 0; j < INPUT_DIM; j++) {
			#pragma HLS UNROLL //DSP 28
            vec_i[j] = act_t(input[t * INPUT_DIM + j]);
        }
        for (int j = 0; j < HIDDEN_DIM; j++) {
			#pragma HLS UNROLL
            vec_i[INPUT_DIM + j] = h_t[j];
        }
#if SKIP
        if (t > 4 && t < 24 && should_skip(vec_i, x_prev)) {
            continue;
        }
        for (int j = 0; j < INPUT_DIM + HIDDEN_DIM; j++) {
			#pragma HLS UNROLL
            x_prev[j] = vec_i[j];
        }
#endif
        //gate fuse compute
		for (int i = 0; i < HIDDEN_DIM; ++i) {
			#pragma HLS UNROLL //16->32
			f[i] = Bias_f[i];
			i_[i] = Bias_i[i];
			g[i] = Bias_c[i];
			o[i] = Bias_o[i];
		}
		for (int j = 0; j < INPUT_DIM + HIDDEN_DIM; ++j) {
			#pragma HLS PIPELINE II=1   //pipeline
			act_t xj=vec_i[j];
			for (int i = 0; i < HIDDEN_DIM; ++i) {
				#pragma HLS UNROLL factor=64 //DSP 128
				f[i] += Weight_f[i][j] * xj;
				i_[i] += Weight_i[i][j] * xj;
				g[i] += Weight_c[i][j] * xj;
				o[i] +=Weight_o[i][j] * xj;
			}
		}

		sigmoid(i_, i_, HIDDEN_DIM);
		sigmoid(f, f, HIDDEN_DIM);
		tanh(g, g, HIDDEN_DIM);
		sigmoid(o, o, HIDDEN_DIM);

		//update C_t and h_t
		for (int j = 0; j < HIDDEN_DIM; j++) {
			#pragma HLS UNROLL factor = 32 //DSP 16
			C_t[j] = f[j] * C_t[j] + i_[j] * g[j];
			temp_t temp_x = clamp_fixed(C_t[j], TANH_XMIN, TANH_XMAX);
			const ap_uint<8> idx = ap_uint<8>((temp_x + temp_t(TANH_XMAX))*temp_t(LUT_SCALE_TANH));
			h_t[j] = o[j] * Tanh_lut[idx];
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
            	return cur_argmax;
            }
        } else {
            stable_count = 0;
        }
        last_pred = cur_argmax;

#endif
    }
//    for (int i = 0; i < CLASS_NUM; i++) {
//		#pragma HLS UNROLL
//    	fc_out[i] = Bias_lc[i];
//	}
//	for (int j = 0; j <HIDDEN_DIM; ++j) {
//		//#pragma HLS PIPELINE II=1
//		for (int i = 0; i < CLASS_NUM; ++i) {
//			#pragma HLS UNROLL   //factor=2->cancel DSP 10
//			fc_out[i] += Weight_lc[i][j]*h_t[j];
//		}
//	}
//	for(int k=0;k<CLASS_NUM;k++){
//		#pragma HLS UNROLL
//		res[k]=float(fc_out[k]);
//	}
////	for (int i = 0; i < CLASS_NUM; i++) {
////		printf("%f ", res[i]);// = float(Bias_lc[i]);
////	}
////	printf("\n");
//	cur_argmax = argmaxPred(res);
    return cur_argmax;
}
