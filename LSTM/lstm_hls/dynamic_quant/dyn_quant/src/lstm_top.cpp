#include "dynamic_quant.h"
#include "lstm_unit.h"

#define INPUT_SIZE   128
#define OUTPUT_SIZE  128

void lstm_top(float input_data[INPUT_SIZE],
              float output_data[OUTPUT_SIZE]) {
#pragma HLS INTERFACE ap_memory port=input_data
#pragma HLS INTERFACE ap_memory port=output_data
#pragma HLS INTERFACE s_axilite port=return

    QuantStats stats;
    stats.max_val = 0.0f;
    stats.mean = 0.0f;

    // 统计输入数据的最大值和均值
    for (int i = 0; i < INPUT_SIZE; i++) {
		#pragma HLS PIPELINE
        float val = input_data[i];
        stats.mean += val;
        if (val > stats.max_val)
            stats.max_val = val;
    }
    stats.mean /= INPUT_SIZE;

    // 根据统计结果决定量化位宽
    int bitwidth = decide_bitwidth(stats);
    printf("choose %d bits", bitwidth);
    // 调用 LSTM 单元进行计算
    lstm_unit(input_data, output_data, bitwidth);
}
