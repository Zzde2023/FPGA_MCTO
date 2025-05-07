#include "fixed_lstm.h"

// ----------------------------------------------------------
// LUT查表函数（定点版本）：直接将输入映射到 LUT 索引
// ----------------------------------------------------------
fixed_t lut_sigmoid_fixed(fixed_t x) {
    if(x < -16) x = -16;
    if(x > 16)  x = 16;
    fixed_t index_f = (x + 16) * ((fixed_t)(LUT_SIZE - 1) / 32);
    int index = (int)index_f;
    if(index < 0) index = 0;
    if(index >= LUT_SIZE) index = LUT_SIZE - 1;
    return Sigmoid_lut[index];
}

fixed_t lut_tanh_fixed(fixed_t x) {
    if(x < -16) x = -16;
    if(x > 16)  x = 16;
    fixed_t index_f = (x + 16) * ((fixed_t)(LUT_SIZE - 1) / 32);
    int index = (int)index_f;
    if(index < 0) index = 0;
    if(index >= LUT_SIZE) index = LUT_SIZE - 1;
    return Tanh_lut[index];
}

// ----------------------------------------------------------
// 内部函数：动态量化，将 x 限定到 -16~16，并根据 dynamic_bitwidth 离散化
// ----------------------------------------------------------
template<int GATE_WIDTH, int STATE_WIDTH>
inline typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_quant
FixedLSTM<GATE_WIDTH, STATE_WIDTH>::quantize_gate(fixed_t x, int dynamic_bitwidth) {
    const fixed_t max_range = 16;
    if(x > max_range) x = max_range;
    if(x < -max_range) x = -max_range;
    int levels = (1 << dynamic_bitwidth);  // 如4bit->16级, 8bit->256级
    fixed_t step = (2 * max_range) / (levels - 1);
    int q = (int)((x + max_range) / step + 0.5);
    fixed_t quantized = q * step - max_range;
    return (T_quant)quantized;
}

template<int GATE_WIDTH, int STATE_WIDTH>
inline fixed_t FixedLSTM<GATE_WIDTH, STATE_WIDTH>::dequantize_state(T_state x) {
    return (fixed_t)x;
}

// ----------------------------------------------------------
// 单步 LSTM 计算实现（使用定点数）
// ----------------------------------------------------------
template<int GATE_WIDTH, int STATE_WIDTH>
void FixedLSTM<GATE_WIDTH, STATE_WIDTH>::compute(fixed_t input_data[INPUT_DIM],
                                                 fixed_t output_data[HIDDEN_DIM],
                                                 int dynamic_bitwidth) {
#pragma HLS INTERFACE ap_memory port=input_data
#pragma HLS INTERFACE ap_memory port=output_data
#pragma HLS INTERFACE s_axilite port=dynamic_bitwidth
#pragma HLS INTERFACE s_axilite port=return

    // 内部状态初始化（单步内部状态置0）
    T_state cell_state[HIDDEN_DIM];
    T_state hidden_state[HIDDEN_DIM];
#pragma HLS ARRAY_PARTITION variable=cell_state complete
#pragma HLS ARRAY_PARTITION variable=hidden_state complete
    for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE II=1
        cell_state[i] = 0;
        hidden_state[i] = 0;
    }

    // 拼接输入和隐藏状态，构成 vec_i 长度为 INPUT_DIM+HIDDEN_DIM
    fixed_t vec_i[INPUT_DIM + HIDDEN_DIM];
#pragma HLS ARRAY_PARTITION variable=vec_i complete
    for (int j = 0; j < INPUT_DIM; j++) {
#pragma HLS PIPELINE II=1
        vec_i[j] = input_data[j];
    }
    for (int j = 0; j < HIDDEN_DIM; j++) {
#pragma HLS PIPELINE II=1
        vec_i[INPUT_DIM+j] = dequantize_state(hidden_state[j]);
    }

    // 定义各门输出数组
    typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate
         gate_f[HIDDEN_DIM], gate_i[HIDDEN_DIM], cand[HIDDEN_DIM], gate_o[HIDDEN_DIM];
#pragma HLS ARRAY_PARTITION variable=gate_f complete
#pragma HLS ARRAY_PARTITION variable=gate_i complete
#pragma HLS ARRAY_PARTITION variable=cand complete
#pragma HLS ARRAY_PARTITION variable=gate_o complete

    // ---- 忘记门计算： f_t = sigmoid(W_f * vec_i + Bias_f) ----
    for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE II=1
        fixed_t sum = Bias_f[i];
        for (int k = 0; k < (INPUT_DIM+HIDDEN_DIM); k++) {
#pragma HLS UNROLL factor=16
            sum += Weight_f[i][k] * vec_i[k];
        }
        // 动态量化后查 LUT
        typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate q_val = quantize_gate(sum, dynamic_bitwidth);
        gate_f[i] = (typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate)lut_sigmoid_fixed(q_val);
    }
    // ---- 输入门计算： i_t = sigmoid(W_i * vec_i + Bias_i) ----
    for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE II=1
        fixed_t sum = Bias_i[i];
        for (int k = 0; k < (INPUT_DIM+HIDDEN_DIM); k++) {
#pragma HLS UNROLL factor=16
            sum += Weight_i[i][k] * vec_i[k];
        }
        typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate q_val = quantize_gate(sum, dynamic_bitwidth);
        gate_i[i] = (typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate)lut_sigmoid_fixed(q_val);
    }
    // ---- 候选状态计算： C~ = tanh(W_c * vec_i + Bias_c) ----
    for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE II=1
        fixed_t sum = Bias_c[i];
        for (int k = 0; k < (INPUT_DIM+HIDDEN_DIM); k++) {
#pragma HLS UNROLL factor=16
            sum += Weight_c[i][k] * vec_i[k];
        }
        typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate q_val = quantize_gate(sum, dynamic_bitwidth);
        cand[i] = (typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate)lut_tanh_fixed(q_val);
    }
    // ---- 输出门计算： o_t = sigmoid(W_o * vec_i + Bias_o) ----
    for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE II=1
        fixed_t sum = Bias_o[i];
        for (int k = 0; k < (INPUT_DIM+HIDDEN_DIM); k++) {
#pragma HLS UNROLL factor=16
            sum += Weight_o[i][k] * vec_i[k];
        }
        typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate q_val = quantize_gate(sum, dynamic_bitwidth);
        gate_o[i] = (typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate)lut_sigmoid_fixed(q_val);
    }
    // ---- 状态更新 ----
    for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE II=1
        cell_state[i] = gate_f[i] * cell_state[i] + gate_i[i] * cand[i];
        hidden_state[i] = gate_o[i] * (typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_state)lut_tanh_fixed(cell_state[i]);
        output_data[i] = dequantize_state(hidden_state[i]);
    }
}

// ----------------------------------------------------------
// 多步 LSTM 计算实现（compute_multi）：累积更新状态
// ----------------------------------------------------------
template<int GATE_WIDTH, int STATE_WIDTH>
void FixedLSTM<GATE_WIDTH, STATE_WIDTH>::compute_multi(fixed_t input_sequence[NUM_TIMESTEPS][INPUT_DIM],
                                                         T_state cell_state[HIDDEN_DIM],
                                                         T_state hidden_state[HIDDEN_DIM],
                                                         int dynamic_bitwidth) {
#pragma HLS INTERFACE ap_memory port=input_sequence
#pragma HLS INTERFACE ap_memory port=cell_state
#pragma HLS INTERFACE ap_memory port=hidden_state
#pragma HLS INTERFACE s_axilite port=dynamic_bitwidth
#pragma HLS INTERFACE s_axilite port=return

    fixed_t vec_i[INPUT_DIM + HIDDEN_DIM];
#pragma HLS ARRAY_PARTITION variable=vec_i complete

    // 针对每个时间步更新状态
    for (int t = 0; t < NUM_TIMESTEPS; t++) {
        // 拼接当前时刻输入与上一时刻隐藏状态
        for (int j = 0; j < INPUT_DIM; j++) {
#pragma HLS PIPELINE II=1
            vec_i[j] = input_sequence[t][j];
        }
        for (int j = 0; j < HIDDEN_DIM; j++) {
#pragma HLS PIPELINE II=1
            vec_i[INPUT_DIM+j] = dequantize_state(hidden_state[j]);
        }

        // 定义各门数组
        typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate
            gate_f[HIDDEN_DIM], gate_i[HIDDEN_DIM], cand[HIDDEN_DIM], gate_o[HIDDEN_DIM];
#pragma HLS ARRAY_PARTITION variable=gate_f complete
#pragma HLS ARRAY_PARTITION variable=gate_i complete
#pragma HLS ARRAY_PARTITION variable=cand complete
#pragma HLS ARRAY_PARTITION variable=gate_o complete

        for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE II=1
            fixed_t sum_f = Bias_f[i];
            fixed_t sum_i = Bias_i[i];
            fixed_t sum_c = Bias_c[i];
            fixed_t sum_o = Bias_o[i];
            for (int k = 0; k < (INPUT_DIM+HIDDEN_DIM); k++) {
#pragma HLS UNROLL factor=16
                fixed_t vec_val = vec_i[k];
                sum_f += Weight_f[i][k] * vec_val;
                sum_i += Weight_i[i][k] * vec_val;
                sum_c += Weight_c[i][k] * vec_val;
                sum_o += Weight_o[i][k] * vec_val;
            }
            typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_quant qf = quantize_gate(sum_f, dynamic_bitwidth);
            typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_quant qi = quantize_gate(sum_i, dynamic_bitwidth);
            typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_quant qc = quantize_gate(sum_c, dynamic_bitwidth);
            typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_quant qo = quantize_gate(sum_o, dynamic_bitwidth);
            gate_f[i] = (typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate)lut_sigmoid_fixed(qf);
            gate_i[i] = (typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate)lut_sigmoid_fixed(qi);
            cand[i]   = (typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate)lut_tanh_fixed(qc);
            gate_o[i] = (typename FixedLSTM<GATE_WIDTH, STATE_WIDTH>::T_gate)lut_sigmoid_fixed(qo);
        }
        // 状态更新
        for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE II=1
            cell_state[i] = gate_f[i] * cell_state[i] + gate_i[i] * cand[i];
            hidden_state[i] = gate_o[i] * (T_state)lut_tanh_fixed(cell_state[i]);
        }
    }
}

// 显式模板实例化
template struct FixedLSTM<4, 8>;
template struct FixedLSTM<8, 12>;
template struct FixedLSTM<12, 16>;
