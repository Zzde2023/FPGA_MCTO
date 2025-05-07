#ifndef FIXED_LSTM_H
#define FIXED_LSTM_H

#include <ap_fixed.h>
#include <hls_math.h>

// ================================================================
// 参数定义：根据平台及模型需求调整
// ================================================================
#define INPUT_DIM     28         // 每个时刻输入向量维度（MNIST 每行 28 像素）
#define HIDDEN_DIM    128        // 隐藏状态/细胞状态维度
#define LUT_SIZE      256        // 激活函数 LUT 尺寸
#define NUM_TIMESTEPS 28         // 时序步数（MNIST 图片 28 行）
#define NUM_CLASSES   10         // 分类数（MNIST 为10类）

// 定点类型定义（此处采用16位定点，8位整数+8位小数，可根据需要调整）
//typedef ap_fixed<16, 8> fixed_t;
typedef float fixed_t;

// ================================================================
// 权重、偏置和 LUT 外部声明（由用户配置好，建议存于 BRAM/ROM）
// ================================================================
extern fixed_t Weight_f[HIDDEN_DIM][INPUT_DIM + HIDDEN_DIM];
extern fixed_t Bias_f[HIDDEN_DIM];
extern fixed_t Weight_i[HIDDEN_DIM][INPUT_DIM + HIDDEN_DIM];
extern fixed_t Bias_i[HIDDEN_DIM];
extern fixed_t Weight_c[HIDDEN_DIM][INPUT_DIM + HIDDEN_DIM];
extern fixed_t Bias_c[HIDDEN_DIM];
extern fixed_t Weight_o[HIDDEN_DIM][INPUT_DIM + HIDDEN_DIM];
extern fixed_t Bias_o[HIDDEN_DIM];

extern fixed_t Weight_fc[NUM_CLASSES][HIDDEN_DIM];
extern fixed_t Bias_fc[NUM_CLASSES];

extern fixed_t Sigmoid_lut[LUT_SIZE];
extern fixed_t Tanh_lut[LUT_SIZE];

// LUT查表函数声明
fixed_t lut_sigmoid_fixed(fixed_t x);
fixed_t lut_tanh_fixed(fixed_t x);

// ================================================================
// FixedLSTM 模块类模板：仅使用定点数实现混合精度，模板参数用于指定门控与状态的位宽
// ================================================================
template<int GATE_WIDTH, int STATE_WIDTH>
struct FixedLSTM {
    // 门控数据类型：范围要求不高
    typedef ap_fixed<GATE_WIDTH, 2>  T_gate;
    // 状态数据类型：需要较大动态范围
    typedef ap_fixed<STATE_WIDTH, 4> T_state;
    // 用于量化的中间数据类型（此处范围 -16~16）
    typedef ap_fixed<STATE_WIDTH, 5> T_quant;

    // 单步计算接口（可用于单步仿真测试）
    void compute(fixed_t input_data[INPUT_DIM],
                 fixed_t output_data[HIDDEN_DIM],
                 int dynamic_bitwidth);

    // 多步计算接口：输入序列 shape 为 [NUM_TIMESTEPS][INPUT_DIM]，状态累积更新
    void compute_multi(fixed_t input_sequence[NUM_TIMESTEPS][INPUT_DIM],
                       T_state cell_state[HIDDEN_DIM],
                       T_state hidden_state[HIDDEN_DIM],
                       int dynamic_bitwidth);

private:
    // 内部函数：动态量化，将定点数 x 映射到离散级数，返回量化结果（T_quant 类型）
    T_quant quantize_gate(fixed_t x, int dynamic_bitwidth);
    // 内部函数：状态转输出（直接转换为 fixed_t）
    fixed_t dequantize_state(T_state x);
};

#endif
