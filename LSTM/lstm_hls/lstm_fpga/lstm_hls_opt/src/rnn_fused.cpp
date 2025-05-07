#include <iostream>
#include <cmath>
#include <string.h>
#include "rnn.h"
#include "weight4.h"
#include <hls_math.h>

#define SKIP_THRESHOLD 0.017
#define ENERGY_THRESHOLD 0.056
#define EARLY_EXIT_STREAK 1
#define MARGIN_THRESHOLD 6.5f
#define SIGMOID_XMIN -8
#define SIGMOID_XMAX 8
#define TANH_XMIN -4
#define TANH_XMAX 4
#define LUT_SCALE_SIGMOID 15.9375 // 256 / (SIGMOID_XMAX - SIGMOID_XMIN)
#define LUT_SCALE_TANH 31.875     // 256 / (TANH_XMAX - TANH_XMIN)
#define SKIP 1
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
		#pragma HLS UNROLL
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
	float max_val = -INFINITY;
	int argmax = 0;
	for (int i = 0; i < CLASS_NUM; ++i) {
	    #pragma HLS PIPELINE
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
		 #pragma HLS UNROLL factor=16
    	 temp_t x_clamped = clamp_fixed(x[i], SIGMOID_XMIN, SIGMOID_XMAX);
		 const ap_uint<8> idx = (ap_uint<8>)((x_clamped + temp_t(SIGMOID_XMAX)) * temp_t(LUT_SCALE_SIGMOID));//  [0,255]
		 res[i] = Sigmoid_lut[idx];
     }
}

inline void tanh(act_t* res, act_t* x, int size) {
     #pragma HLS INLINE off
     for(int i=0; i<size; ++i) {
		 #pragma HLS UNROLL factor=16
    	 temp_t x_clamped = clamp_fixed(x[i], TANH_XMIN, TANH_XMAX);
		 const ap_uint<8>  idx = (ap_uint<8>)((x_clamped + temp_t(TANH_XMAX))* temp_t(LUT_SCALE_TANH));//  [0,255]
		 res[i] = Tanh_lut[idx];
     }
}

void gemv_fused_4gate(const weight_t W[4 * HIDDEN_DIM][INPUT_DIM + HIDDEN_DIM],
                      const weight_t B[4* HIDDEN_DIM],
                      const act_t x[INPUT_DIM + HIDDEN_DIM],
					  act_t out_all[INPUT_DIM]) {
#pragma HLS INLINE off
    act_t acc;
    for (int i = 0; i < 4 * HIDDEN_DIM; i++) {
        acc = 0;
        for (int j = 0; j < INPUT_DIM + HIDDEN_DIM; j++) {
			#pragma HLS UNROLL factor=16
			acc += W[i][j] * x[j];
        }
        out_all[i] = acc + B[i];
    }
}

void fc_layer(const weight_t W[CLASS_NUM][HIDDEN_DIM], const weight_t B[CLASS_NUM], const act_t in[HIDDEN_DIM], float out[CLASS_NUM]) {
	act_t sum;
	for (int i = 0; i < CLASS_NUM; i++) {
        sum = 0;
        for (int j = 0; j < HIDDEN_DIM; j++) {
            #pragma HLS UNROLL factor=16
        	sum += W[i][j]*in[j];
        }
        out[i] = sum + B[i];
    }
}

void infer(float input[IMG_SIZE], float res[CLASS_NUM]) {
    act_t out_all[4 * HIDDEN_DIM];
    act_t i_[HIDDEN_DIM];
    act_t f[HIDDEN_DIM];
	act_t g[HIDDEN_DIM];
	act_t o[HIDDEN_DIM];
    act_t C_t[HIDDEN_DIM] = {0}, h_t[HIDDEN_DIM] = {0};
    act_t vec_i[INPUT_DIM + HIDDEN_DIM];
    int last_pred = 9, cur_pred = 0, early_exit_count = 0, stable_count = 0;
    act_t x_prev[INPUT_DIM + HIDDEN_DIM] = {0};

#pragma HLS ARRAY_PARTITION variable=vec_i block factor=8
#pragma HLS ARRAY_PARTITION variable=C_t block factor=16
#pragma HLS ARRAY_PARTITION variable=h_t cyclic factor=8
#pragma HLS ARRAY_PARTITION variable=out_all cyclic factor=8

//硬件感知分组决策
//#if HIDDEN_DIM <= 32
//#pragma HLS ARRAY_PARTITION variable=h_t complete
//#pragma HLS ARRAY_PARTITION variable=C_t complete
//#elif HIDDEN_DIM <= 64
//#pragma HLS ARRAY_PARTITION variable=h_t cyclic factor=8
//#pragma HLS ARRAY_PARTITION variable=C_t block factor=16
//#else
//#pragma HLS ARRAY_PARTITION variable=h_t block factor=8
//#pragma HLS ARRAY_PARTITION variable=C_t block factor=8
//#endif
    int skip_count = 0;
    bool early_exited=false;
    for (int t = 0; t < INPUT_DIM; t++) {
        for (int j = 0; j < INPUT_DIM; j++) {
			#pragma HLS UNROLL
            vec_i[j] = act_t(input[t * INPUT_DIM + j]);
        }
        for (int j = 0; j < HIDDEN_DIM; j++) {
			#pragma HLS UNROLL
            vec_i[INPUT_DIM + j] = h_t[j];
        }
#if SKIP
        if (t > 4 && t < 24 && should_skip(vec_i, x_prev)) {//t > 4 && t < 24
            continue;
        }
        for (int j = 0; j < INPUT_DIM + HIDDEN_DIM; j++) {
			#pragma HLS UNROLL
            x_prev[j] = vec_i[j];
        }
#endif
        //gate fuse compute
		gemv_fused_4gate(lstm_weight_combined, lstm_bias_combined,vec_i,out_all);
		sigmoid(i_, &out_all[0], HIDDEN_DIM);
		sigmoid(f, &out_all[HIDDEN_DIM], HIDDEN_DIM);
		tanh(g, &out_all[2*HIDDEN_DIM], HIDDEN_DIM);
		sigmoid(o, &out_all[3*HIDDEN_DIM], HIDDEN_DIM);

		//update C_t and h_t
		for (int j = 0; j < HIDDEN_DIM; j++) {
			#pragma HLS UNROLL factor = 16
			C_t[j] = f[j] * C_t[j] + i_[j] * g[j];
			temp_t temp_x = clamp_fixed(C_t[j], TANH_XMIN, TANH_XMAX);
			const ap_uint<8> idx = ((temp_x + temp_t(TANH_XMAX)) / (2 * TANH_XMAX)) * 255;
			h_t[j] = o[j] * Tanh_lut[idx];
		}

#if MARGIN_BASE
		fc_layer(classifier_weight, classifier_bias, h_t, res);
        int cur_argmax = argmaxPred(res);
        float max_val = res[cur_argmax], second_max = -INFINITY;
        for (int i = 0; i < CLASS_NUM; ++i) {
			#pragma HLS PIPELINE
            if (i != cur_argmax && res[i] > second_max)
                second_max = res[i];
        }
        if (cur_argmax == last_pred && (max_val - second_max) > MARGIN_THRESHOLD) {
            if (++stable_count >= EARLY_EXIT_STREAK) {
            	early_exited = true;
            	return;
            }
        } else {
            stable_count = 0;
        }
        last_pred = cur_argmax;
#endif
    }
    fc_layer(classifier_weight, classifier_bias, h_t, res);
    return;
}
