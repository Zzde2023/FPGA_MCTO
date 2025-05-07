#ifndef LSTM_UNIT_H
#define LSTM_UNIT_H

// 这里定义输入、输出以及状态的大小，可根据实际情况调整
#define INPUT_SIZE   128
#define OUTPUT_SIZE  128
#define STATE_SIZE   128
#define LUT_SIZE     256

// 顶层接口：输入数据、输出数据以及动态决定的量化位宽
void lstm_unit(float input_data[INPUT_SIZE],
               float output_data[OUTPUT_SIZE],
               int bitwidth);

#endif
