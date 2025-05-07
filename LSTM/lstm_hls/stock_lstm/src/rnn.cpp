#include <iostream>
#include <cmath>
#include <string.h>
#include "rnn.h"
#include "weight.h"

#include <hls_math.h>

// 示例：全局范围定义


#define gemvm(res, a, b, row, col) \
{ \
	std::fill_n(res, row, 0.0); \
	for (int r = 0; r < row; r++) \
		for (int c = 0; c < col; c++) \
			res[r] += a[r][c] * b[c]; \
}
inline void geva(act_t* res, act_t* a, int size) {
    #pragma HLS INLINE
    for(int i=0; i<size; i++) {
        #pragma HLS PIPELINE II=2
        #pragma HLS UNROLL factor=16
        res[i] += a[i];
    }
}
void gemvm_quant(
    act_t* res,
    const weight_t (*a)[INPUT_DIM + HIDDEN_DIM],
    const act_t *b
) {
    #pragma HLS ARRAY_PARTITION variable=a cyclic factor=16 dim=2  // 原16→8
    #pragma HLS ARRAY_PARTITION variable=b cyclic factor=16       // 原16→8
	for(int r=0; r<HIDDEN_DIM; ++r) {
        accum_t acc = 0;
        for(int c=0; c<INPUT_DIM + HIDDEN_DIM; ++c) {
            #pragma HLS PIPELINE II=2 // 原II=2→2
            #pragma HLS UNROLL factor=16  // 原16→8
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
		#pragma HLS PIPELINE II=2
        #pragma HLS UNROLL factor=16
    	res[i] += b[i];
    }
}
// 优化后的索引计算函数
/*
template<typename T>
ap_uint<8> quantize_index(T x) {
    #pragma HLS INLINE
	//temp_t x_val = hls::fmin(hls::fmax(x, temp_t(-8.0)), temp_t(8.0));
    // 合并运算步骤提升效率
    temp_t normalized = (temp_t(x) + temp_t(16)) * temp_t(8) + temp_t(0.5);//15.9375f

    // 使用HLS内置饱和函数
//    normalized = hls::floor(hls::fmin(hls::fmax(normalized, temp_t(0.0)), temp_t(255.0)));

    return ap_uint<8>(normalized);
}
*/
/*
// 量化范围调整（-10.0 ~ 10.0）
template<typename T>
ap_uint<10> quantize_index(T x) {
    #pragma HLS INLINE
    // 动态校准输入范围
    temp_t clamped = hls::fmin(hls::fmax(temp_t(x), RANGE_MIN), RANGE_MAX);
    // 归一化到[0, 1023]
    temp_t normalized = (clamped - RANGE_MIN) * (temp_t(1023.0) / (RANGE_MAX - RANGE_MIN));
    return ap_uint<10>(hls::floor(normalized + temp_t(0.5)));  // 四舍五入
}
*/
 // 优化后的激活函数
inline void sigmoid(act_t* res, act_t* x, int size) {
     #pragma HLS INLINE off
	 #pragma HLS ARRAY_PARTITION variable=Sigmoid_lut cyclic factor=16
     for(int i=0; i<size; ++i) {
		 #pragma HLS PIPELINE II=2
		 #pragma HLS UNROLL factor=16
    	 temp_t normalized = (temp_t(x[i]) + temp_t(16))*temp_t(7.96875) + temp_t(0.5); //0~255 +0.5
    	 res[i] = Sigmoid_lut[ap_uint<8>(normalized)];
     }
}

inline void tanh(act_t* res, act_t* x, int size) {
     #pragma HLS INLINE off
	 #pragma HLS ARRAY_PARTITION variable=Tanh_lut cyclic factor=16
     for(int i=0; i<size; ++i) {
		 #pragma HLS PIPELINE II=2
		 #pragma HLS UNROLL factor=16
    	 temp_t normalized = (temp_t(x[i]) + temp_t(16))*temp_t(7.96875) + temp_t(0.5); //0~255 +0.5
		 res[i] = Tanh_lut[ap_uint<8>(normalized)];
     }
}

inline void hprod(act_t* res, act_t* a, act_t* b, int size) {
    #pragma HLS INLINE
    for(int i=0; i<size; i++) {
		#pragma HLS PIPELINE II=2
        #pragma HLS UNROLL factor=16
        res[i] = a[i] * b[i];
    }
}

#if CSIM_ON == 1
int infer(float input[IMG_SIZE])
#else
void infer(float input[IMG_SIZE], float res[CLASS_NUM])
#endif
{   
	#pragma HLS DATAFLOW
    act_t gate_f[HIDDEN_DIM];
    act_t gate_i[HIDDEN_DIM];
    act_t gate_o[HIDDEN_DIM];
    act_t stat_C[HIDDEN_DIM];
    act_t C_t[HIDDEN_DIM];
    act_t h_t[HIDDEN_DIM];
    act_t vec_i[INPUT_DIM + HIDDEN_DIM];
    act_t ress[CLASS_NUM];
    for (int j = 0; j < HIDDEN_DIM; j++) {
		#pragma HLS PIPELINE II=2
    	gate_f[j] = 0.0;
    	gate_i[j] = 0.0;
    	gate_o[j] = 0.0;
    	stat_C[j] = 0.0;
    	C_t[j] = 0.0;
    	h_t[j] = 0.0;
    }
    for (int j = 0; j < CLASS_NUM; j++) {
		#pragma HLS PIPELINE II=2
    	ress[j]=0.0;
    }
	#pragma HLS ARRAY_PARTITION variable=gate_f cyclic factor=16
    #pragma HLS ARRAY_PARTITION variable=gate_i cyclic factor=16
	#pragma HLS ARRAY_PARTITION variable=gate_o cyclic factor=16
	#pragma HLS ARRAY_PARTITION variable=vec_i cyclic factor=16
    #pragma HLS ARRAY_PARTITION variable=stat_C cyclic factor=16
	#pragma HLS ARRAY_PARTITION variable=C_t cyclic factor=16
	#pragma HLS ARRAY_PARTITION variable=Weight0_f cyclic factor=16 dim=2
	#pragma HLS ARRAY_PARTITION variable=Weight0_i cyclic factor=16 dim=2
	#pragma HLS ARRAY_PARTITION variable=Weight0_c cyclic factor=16 dim=2
	#pragma HLS ARRAY_PARTITION variable=Weight0_o cyclic factor=16 dim=2
	#pragma HLS ARRAY_PARTITION variable=Weight_lc cyclic factor=16 dim=2
	#pragma HLS ARRAY_PARTITION variable=Bias0_f cyclic factor=16
	#pragma HLS ARRAY_PARTITION variable=Bias0_i cyclic factor=16
	#pragma HLS ARRAY_PARTITION variable=Bias0_c cyclic factor=16
	#pragma HLS ARRAY_PARTITION variable=Bias0_o cyclic factor=16

    for (int i = 0; i < INPUT_DIM; i++) {
    	for (int j = 0; j < INPUT_DIM; j++) {
			#pragma HLS PIPELINE II=2
			#pragma HLS UNROLL factor=2
			vec_i[j] = act_t(input[i * INPUT_DIM + j]);
		}
		for (int j = 0; j < HIDDEN_DIM; j++) {
			#pragma HLS PIPELINE II=2
			#pragma HLS UNROLL factor=8
			vec_i[INPUT_DIM + j] = h_t[j];
		}

		gemvm_quant(gate_f, Weight0_f, vec_i);
		geva_quant(gate_f, Bias0_f);
		sigmoid(gate_f, gate_f, HIDDEN_DIM);

        gemvm_quant(gate_i, Weight0_i, vec_i);
        geva_quant(gate_i, Bias0_i);
        sigmoid(gate_i, gate_i, HIDDEN_DIM);

        gemvm_quant(C_t, Weight0_c, vec_i);
        geva_quant(C_t, Bias0_c);
        tanh(C_t, C_t, HIDDEN_DIM);

        gemvm_quant(gate_o, Weight0_o, vec_i);
        geva_quant(gate_o, Bias0_o);
        sigmoid(gate_o, gate_o, HIDDEN_DIM);

        hprod(stat_C, gate_f, stat_C, HIDDEN_DIM);
        hprod(C_t, gate_i, C_t, HIDDEN_DIM);
        geva(stat_C, C_t, HIDDEN_DIM);

        tanh(h_t, stat_C, HIDDEN_DIM);
        hprod(h_t, gate_o, h_t, HIDDEN_DIM);
    }

#if CSIM_ON == 1
float res[CLASS_NUM];
#endif
    gemvm(ress, Weight_lc, h_t, CLASS_NUM, HIDDEN_DIM);
    for(int i=0; i<CLASS_NUM; ++i) {
		#pragma HLS PIPELINE II=2
        ress[i] += Bias_lc[i];
        res[i] = float(ress[i]);
    }
#if CSIM_ON == 1
    int label = 0;
    for (int i = 1; i < CLASS_NUM; i++)
        if (res[i] > res[label]) label = i;
    return label;
#endif
}
