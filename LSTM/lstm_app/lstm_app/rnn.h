#ifndef RNN_H
#define RNN_H

#include <cmath>

#define INPUT_DIM 39
#define HIDDEN_DIM 50
#define CLASS_NUM 10
#define LUT_SIZE 256
#define MAX_SEQ_LEN 100


//typedef ap_fixed<16,6> act_t;
//typedef ap_fixed<16,6> lut_t;
//typedef ap_fixed<16,6> weight_t;

typedef float act_t;
typedef float lut_t;
typedef float weight_t;
typedef float temp_t;
//typedef float temp_t;

extern "C" {
    void lstm_infer(float input[MAX_SEQ_LEN*INPUT_DIM], int valid_len, float ress[CLASS_NUM]);
}
#endif
