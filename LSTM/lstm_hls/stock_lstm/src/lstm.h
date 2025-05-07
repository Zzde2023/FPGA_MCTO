#ifndef RNN_H
#define RNN_H

#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_math.h>
#define INPUT_DIM	20
#define FEATURE 9
#define IMG_SIZE	INPUT_DIM * FEATURE
#define LAYER_NUM   1
#define HIDDEN_DIM	128
#define CLASS_NUM	10

// rnn.h
typedef float weight_t;      // 权重：8位（1位整数+7位小数）
typedef float act_t;        // 激活：16位（4位整数+12位小数）
typedef float temp_t;       // 中间变量：32位（9位整数+23位小数）
typedef float accum_t;     // 累加器：40位（13位整数+19位小数）
//////
//
//typedef ap_fixed<8,1> weight_t;      // 权重：8位（1位整数+7位小数）
//typedef ap_fixed<16,5> act_t;        // 激活：16位（4位整数+12位小数）
//typedef ap_fixed<16,9> temp_t;       // 中间变量：32位（9位整数+23位小数 256条目） 11整数 +5位小数（1024条目）
//typedef ap_fixed<16,5> accum_t;     // 累加器：40位（13位整数+19位小数）

#define CSIM_ON 1

#if CSIM_ON == 1
int infer(float input[IMG_SIZE]);
#else

void infer(float input[IMG_SIZE], float res[CLASS_NUM]);
#endif

#endif
