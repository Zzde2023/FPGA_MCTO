#ifndef RNN_H
#define RNN_H

#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_math.h>
#define INPUT_DIM	28
#define IMG_SIZE	INPUT_DIM * INPUT_DIM
#define LAYER_NUM   1
#define HIDDEN_DIM	128
#define CLASS_NUM	10
#define BATCH_SIZE 5
typedef float weight_t;
typedef float act_t;
typedef float temp_t;
typedef float lut_t;
//typedef ap_fixed<8,1> weight_t;
//typedef ap_fixed<8,5> act_t;
//typedef ap_uint<8> temp_t;
//typedef ap_fixed<8,1> lut_t;
//typedef ap_fixed<8,1> weight_t;
//typedef ap_fixed<16,5> act_t;
//typedef ap_fixed<16,9> temp_t;
//typedef ap_fixed<16,1> lut_t;
#define CSIM_ON 1


#if CSIM_ON == 1
int infer(float input[IMG_SIZE], float res[CLASS_NUM]);
#else

void infer(float input[IMG_SIZE], float res[CLASS_NUM]);
#endif

#endif
