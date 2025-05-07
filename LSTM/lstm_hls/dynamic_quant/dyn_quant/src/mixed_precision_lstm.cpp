#include "mixed_precision_lstm.h"
#include "weight.h"
// =================================================================
// 激活函数 LUT 查表函数（示例实现，注意需补全 LUT 数据）
// =================================================================
float lut_sigmoid(float x) {
    // 限定输入范围 -16 ~ 16
    if(x < -16.0f) x = -16.0f;
    if(x > 16.0f)  x = 16.0f;
    // 映射到 [0, LUT_SIZE-1]
    float index_f = (x + 16.0f) * ((float)(LUT_SIZE - 1) / 32.0f);
    int index = (int)index_f;
    if(index < 0) index = 0;
    if(index >= LUT_SIZE) index = LUT_SIZE - 1;
    return Sigmoid_lut[index];
}

float lut_tanh(float x) {
    // 限定输入范围 -16 ~ 16
    if(x < -16.0f) x = -16.0f;
    if(x > 16.0f)  x = 16.0f;
    float index_f = (x + 16.0f) * ((float)(LUT_SIZE - 1) / 32.0f);
    int index = (int)index_f;
    if(index < 0) index = 0;
    if(index >= LUT_SIZE) index = LUT_SIZE - 1;
    return Tanh_lut[index];
}

// =================================================================
// 内部函数实现
// =================================================================
template<int GATE_WIDTH, int STATE_WIDTH>
typename MixedPrecisionLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate
MixedPrecisionLSTM<GATE_WIDTH, STATE_WIDTH>::quantize_gate(float x, int dynamic_bitwidth) {
    // 此处假设量化范围与激活函数输入范围保持一致，即 -16 ~ 16
    const float max_range = 16.0f;
    if(x > max_range) x = max_range;
    if(x < -max_range) x = -max_range;
    // 动态位宽决定离散级数（例如 4bit -> 16 级，8bit -> 256 级）
    int levels = (1 << dynamic_bitwidth);
    float step = (2 * max_range) / (levels - 1);
    int q = (int)((x + max_range) / step + 0.5f);
    float quantized = q * step - max_range;
    return (T_gate)quantized;
}

template<int GATE_WIDTH, int STATE_WIDTH>
float MixedPrecisionLSTM<GATE_WIDTH, STATE_WIDTH>::dequantize_state(T_state x) {
    return (float)x;
}

// =================================================================
// 完整的混合精度 LSTM 单元计算实现
// =================================================================
template<int GATE_WIDTH, int STATE_WIDTH>
void MixedPrecisionLSTM<GATE_WIDTH, STATE_WIDTH>::compute(float input_data[INPUT_DIM],
                                                          float output_data[HIDDEN_DIM],
                                                          int dynamic_bitwidth) {
#pragma HLS INTERFACE ap_memory port=input_data
#pragma HLS INTERFACE ap_memory port=output_data
#pragma HLS INTERFACE s_axilite port=dynamic_bitwidth
#pragma HLS INTERFACE s_axilite port=return

    // 内部状态数组（细胞状态和隐藏状态），采用较高精度 T_state
    T_state cell_state[HIDDEN_DIM];
    T_state hidden_state[HIDDEN_DIM];
#pragma HLS ARRAY_PARTITION variable=cell_state complete
#pragma HLS ARRAY_PARTITION variable=hidden_state complete

    // 门控输出：忘记门、输入门、候选状态、输出门，均采用 T_gate 类型
    T_gate gate_f[HIDDEN_DIM];
    T_gate gate_i[HIDDEN_DIM];
    T_gate cand[HIDDEN_DIM];
    T_gate gate_o[HIDDEN_DIM];
#pragma HLS ARRAY_PARTITION variable=gate_f complete
#pragma HLS ARRAY_PARTITION variable=gate_i complete
#pragma HLS ARRAY_PARTITION variable=cand complete
#pragma HLS ARRAY_PARTITION variable=gate_o complete

    // 1. 初始化 cell_state 和 hidden_state（可根据需求保存上一次状态，本示例初始化为0）
    for (int j = 0; j < HIDDEN_DIM; j++) {
#pragma HLS PIPELINE
        cell_state[j] = 0;
        hidden_state[j] = 0;
    }

    // 2. 拼接输入和上一次隐藏状态构成 LSTM 输入向量 vec_i
    float vec_i[INPUT_DIM + HIDDEN_DIM];
#pragma HLS ARRAY_PARTITION variable=vec_i complete
    for (int j = 0; j < INPUT_DIM; j++) {
#pragma HLS PIPELINE
        vec_i[j] = input_data[j];
    }
    for (int j = 0; j < HIDDEN_DIM; j++) {
#pragma HLS PIPELINE
        vec_i[INPUT_DIM + j] = (float)hidden_state[j];
    }

    // 3. 计算各门的线性部分（矩阵乘法 + 加偏置）并动态量化、激活
    // 3.1 忘记门：f_t = sigmoid(W_f * vec_i + Bias_f)
    for (int i = 0; i < HIDDEN_DIM; i++) {
        float sum = 0.0f;
        for (int k = 0; k < INPUT_DIM + HIDDEN_DIM; k++) {
#pragma HLS PIPELINE II=1
            sum += Weight_f[i][k] * vec_i[k];
        }
        sum += Bias_f[i];
        // 量化处理后查 LUT 得到激活值
        T_gate q_val = quantize_gate(sum, dynamic_bitwidth);
        gate_f[i] = (T_gate)lut_sigmoid((float)q_val);
    }

    // 3.2 输入门：i_t = sigmoid(W_i * vec_i + Bias_i)
    for (int i = 0; i < HIDDEN_DIM; i++) {
        float sum = 0.0f;
        for (int k = 0; k < INPUT_DIM + HIDDEN_DIM; k++) {
#pragma HLS PIPELINE II=1
            sum += Weight_i[i][k] * vec_i[k];
        }
        sum += Bias_i[i];
        T_gate q_val = quantize_gate(sum, dynamic_bitwidth);
        gate_i[i] = (T_gate)lut_sigmoid((float)q_val);
    }

    // 3.3 候选状态：C~ = tanh(W_c * vec_i + Bias_c)
    for (int i = 0; i < HIDDEN_DIM; i++) {
        float sum = 0.0f;
        for (int k = 0; k < INPUT_DIM + HIDDEN_DIM; k++) {
#pragma HLS PIPELINE II=1
            sum += Weight_c[i][k] * vec_i[k];
        }
        sum += Bias_c[i];
        T_gate q_val = quantize_gate(sum, dynamic_bitwidth);
        cand[i] = (T_gate)lut_tanh((float)q_val);
    }

    // 3.4 输出门：o_t = sigmoid(W_o * vec_i + Bias_o)
    for (int i = 0; i < HIDDEN_DIM; i++) {
        float sum = 0.0f;
        for (int k = 0; k < INPUT_DIM + HIDDEN_DIM; k++) {
#pragma HLS PIPELINE II=1
            sum += Weight_o[i][k] * vec_i[k];
        }
        sum += Bias_o[i];
        T_gate q_val = quantize_gate(sum, dynamic_bitwidth);
        gate_o[i] = (T_gate)lut_sigmoid((float)q_val);
    }

    // 4. 状态更新：更新细胞状态和隐藏状态
    for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE
        // 更新细胞状态：C_t = f_t * C_{t-1} + i_t * C~
        cell_state[i] = gate_f[i] * cell_state[i] + gate_i[i] * cand[i];
        // 更新隐藏状态：h_t = o_t * tanh(C_t)
        hidden_state[i] = gate_o[i] * (T_state)lut_tanh((float)cell_state[i]);
    }

    // 5. 输出隐藏状态作为本时间步输出
    for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE
        output_data[i] = dequantize_state(hidden_state[i]);
    }
}



// 显式模板实例化（根据需求可生成不同精度组合的实例）
// 例如：实例化 4 位门控 / 8 位状态 和 8 位门控 / 12 位状态的组合
template struct MixedPrecisionLSTM<4, 8>;
template struct MixedPrecisionLSTM<8, 12>;
