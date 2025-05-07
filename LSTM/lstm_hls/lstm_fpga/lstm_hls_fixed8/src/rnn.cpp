#include <iostream>
#include <cmath>
#include <string.h>
#include "rnn.h"
#include "weight.h"

#include <hls_math.h>

inline int argmaxPred(float in[CLASS_NUM]){
	int argmax = 0;
	float max_score = in[0];
	for (int i = 1; i < CLASS_NUM; ++i) {
		#pragma HLS UNROLL
	    if (in[i] > max_score) {
	        max_score = in[i];
	        argmax = i;
	    }
	}
	return argmax;
}

void fc_layer(const weight_t W[CLASS_NUM][HIDDEN_DIM], const weight_t B[CLASS_NUM], const act_t in[HIDDEN_DIM], act_t out[CLASS_NUM]) {
	temp_t sum;
	for (int i = 0; i < CLASS_NUM; i++) {
		#pragma HLS PIPELINE
        sum = 0;
        for (int j = 0; j < HIDDEN_DIM; j++) {
            #pragma HLS UNROLL factor=8
        	sum += W[i][j]*in[j];
        }
        out[i] = sum + B[i];
    }
}

inline void geva(act_t* res, act_t* a, int size) {
    #pragma HLS INLINE
    for(int i=0; i<size; i++) {
        #pragma HLS UNROLL factor=8
        res[i] += a[i];
    }
}

void gemvm_quant(
    act_t* res,
    const weight_t (*a)[INPUT_DIM + HIDDEN_DIM],
    const act_t *b
) {
	temp_t acc; // Example: 32 total, 10 integer, 22 fractional
	for(int r=0; r<HIDDEN_DIM; ++r) {
		#pragma HLS PIPELINE
		acc = 0;
        for(int c=0; c<INPUT_DIM + HIDDEN_DIM; ++c) {
            #pragma HLS UNROLL factor=4
            acc += a[r][c] * b[c];
        }
        res[r] = acc;
    }
}

inline void geva_quant(
    act_t* res,
    const weight_t* b
) {
    #pragma HLS INLINE
    for(int i=0; i<HIDDEN_DIM; ++i) {
        #pragma HLS UNROLL factor=8
    	res[i] += b[i];
    }
}

inline void sigmoid(act_t* res, act_t* x, int size) {
     #pragma HLS INLINE off
     for(int i=0; i<size; ++i) {
		 #pragma HLS PIPELINE
    	 res[i] = 1/(1+hls::exp(-float(x[i])));
     }
}

inline void tanh(act_t* res, act_t* x, int size) {
     #pragma HLS INLINE off
     for(int i=0; i<size; ++i) {
		 #pragma HLS PIPELINE
    	 res[i] = ((hls::exp(float(x[i]))-hls::exp(-float(x[i]))))/(hls::exp(float(x[i]))+hls::exp(-float(x[i])));
     }
}

inline void hprod(act_t* res, act_t* a, act_t* b, int size) {
    #pragma HLS INLINE
    for(int i=0; i<size; i++) {
        #pragma HLS UNROLL factor=8
        res[i] = a[i] * b[i];
    }
}

#if CSIM_ON == 1
int infer(float input[IMG_SIZE], float res[CLASS_NUM])
#else
void infer(float input[IMG_SIZE], float res[CLASS_NUM])
#endif
{
    act_t gate_f[HIDDEN_DIM];
    act_t gate_i[HIDDEN_DIM];
    act_t gate_o[HIDDEN_DIM];
    act_t C_t[HIDDEN_DIM];
    act_t fc_out[CLASS_NUM];
    act_t stat_C[HIDDEN_DIM];
    act_t h_t[HIDDEN_DIM];
    for(int i=0;i<HIDDEN_DIM;i++){
		#pragma HLS UNROLL
    	stat_C[i]=0;
    	h_t[i]=0;
    }
    act_t vec_i[INPUT_DIM + HIDDEN_DIM];
    int cur_argmax;
    for (int t = 0; t < INPUT_DIM; t++) {
    	for (int j = 0; j < INPUT_DIM; j++) {
			#pragma HLS UNROLL
			vec_i[j] = act_t(input[t * INPUT_DIM + j]);
		}
    	for (int j = 0; j < HIDDEN_DIM; j++) {
			#pragma HLS UNROLL
			vec_i[INPUT_DIM + j] = h_t[j];
		}

		gemvm_quant(gate_f, Weight_f, vec_i);
		geva_quant(gate_f, Bias_f);

		sigmoid(gate_f, gate_f, HIDDEN_DIM);

        gemvm_quant(gate_i, Weight_i, vec_i);
        geva_quant(gate_i, Bias_i);
        sigmoid(gate_i, gate_i, HIDDEN_DIM);

        gemvm_quant(C_t, Weight_c, vec_i);
        geva_quant(C_t, Bias_c);
        tanh(C_t, C_t, HIDDEN_DIM);

        gemvm_quant(gate_o, Weight_o, vec_i);
        geva_quant(gate_o, Bias_o);
        sigmoid(gate_o, gate_o, HIDDEN_DIM);

        hprod(stat_C, gate_f, stat_C, HIDDEN_DIM);
        hprod(C_t, gate_i, C_t, HIDDEN_DIM);
        geva(stat_C, C_t, HIDDEN_DIM);

        tanh(h_t, stat_C, HIDDEN_DIM);
        hprod(h_t, gate_o, h_t, HIDDEN_DIM);
    }
    fc_layer(Weight_lc, Bias_lc, h_t, fc_out);
    for(int k=0;k<CLASS_NUM;k++){
		#pragma HLS UNROLL
		res[k]=float(fc_out[k]);
	}
//    int index = argmaxPred(res);
    return ;
}
