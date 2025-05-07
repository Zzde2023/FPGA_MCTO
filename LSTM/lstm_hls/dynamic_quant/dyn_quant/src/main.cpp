#include <iostream>
#include "lstm_unit.h"  // 或者包含对应的头文件声明

#define INPUT_SIZE   128
#define OUTPUT_SIZE  128
void lstm_top(float input_data[INPUT_SIZE],
              float output_data[OUTPUT_SIZE]);
/*
int main() {
    float input_data[INPUT_SIZE];
    float output_data[OUTPUT_SIZE];

    // 初始化输入数据，例如生成 0 到 0.9 之间的周期性数据
    for (int i = 0; i < INPUT_SIZE; i++) {
        input_data[i] = ((float)(i % 10)) / 10.0f;
    }

    // 调用顶层函数进行 LSTM 运算
    lstm_top(input_data, output_data);
//    int bitwidth = 4;
//    lstm_unit(input_data, output_data, bitwidth);
    // 输出前 10 个结果进行验证
    std::cout << "LSTM Top Output:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "Output[" << i << "] = " << output_data[i] << std::endl;
    }

    return 0;
}
*/
