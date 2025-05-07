#ifndef MIXED_PRECISION_LSTM_H
#define MIXED_PRECISION_LSTM_H

#include <ap_fixed.h>
#include <hls_math.h>

// 定义输入和隐藏状态的维度（可根据实际需求调整）
#define INPUT_DIM   28
#define HIDDEN_DIM  128
#define NUM_TIMESTEPS 28

// LUT 查表函数声明
float lut_sigmoid(float x);
float lut_tanh(float x);

// 混合精度 LSTM 单元类，模板参数用于指定门控与状态更新的定点位宽
template<int GATE_WIDTH, int STATE_WIDTH>
struct MixedPrecisionLSTM {
    // 定义门控和状态的数据类型
    typedef ap_fixed<GATE_WIDTH, 2>  T_gate;   // 门控运算通常对范围要求不高
    typedef ap_fixed<STATE_WIDTH, 4> T_state;   // 状态更新要求较大动态范围

    // 单步计算接口：对一个时间步的 LSTM 计算
    // 输入：input_data[INPUT_DIM]（当前时刻输入向量）
    // 输出：output_data[HIDDEN_DIM]（更新后的隐藏状态）
    // dynamic_bitwidth：动态量化控制参数（例如 4 位或 8 位）
    void compute(float input_data[INPUT_DIM],
                 float output_data[HIDDEN_DIM],
                 int dynamic_bitwidth);
    // 扩展的多步计算接口：输入为 [NUM_TIMESTEPS][INPUT_DIM]，内部维护状态更新
        // 最终 hidden_state 保存在 persistent 参数中
	void compute_multi(float input_sequence[NUM_TIMESTEPS][INPUT_DIM],
					   T_state cell_state[HIDDEN_DIM],
					   T_state hidden_state[HIDDEN_DIM],
					   int dynamic_bitwidth);
private:
    // 内部函数：量化，将浮点数转换为 T_gate 类型，依据 dynamic_bitwidth 控制离散级数
    T_gate quantize_gate(float x, int dynamic_bitwidth);

    // 内部函数：将 T_state 数据转换为浮点数输出
    float dequantize_state(T_state x);
};

#endif
