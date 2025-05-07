#include "fixed_lstm.h"
#include "utils.h"
/*
// 顶层推理函数：多步 LSTM + 全连接层输出分类结果
int infer(fixed_t input_sequence[NUM_TIMESTEPS][INPUT_DIM]) {
#pragma HLS DATAFLOW

    // 定义 LSTM 状态，使用 FixedLSTM 模板中的 T_state 类型（这里以 8 位门控 / 12 位状态为例）
    FixedLSTM<8, 12>::T_state cell_state[HIDDEN_DIM];
    FixedLSTM<8, 12>::T_state hidden_state[HIDDEN_DIM];
#pragma HLS ARRAY_PARTITION variable=cell_state complete
#pragma HLS ARRAY_PARTITION variable=hidden_state complete

    // 初始化状态为0
    for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE II=1
        cell_state[i] = 0;
        hidden_state[i] = 0;
    }

    // 创建 LSTM 对象，并设置动态量化位宽（例如 8 位）
    FixedLSTM<8, 12> lstm;
    int dynamic_bitwidth = 8;
    lstm.compute_multi(input_sequence, cell_state, hidden_state, dynamic_bitwidth);

    // 全连接层：利用最终 hidden_state 计算分类得分
    fixed_t fc_out[NUM_CLASSES];
#pragma HLS ARRAY_PARTITION variable=fc_out complete
    for (int i = 0; i < NUM_CLASSES; i++) {
#pragma HLS PIPELINE II=1
        fc_out[i] = Bias_fc[i];
        for (int j = 0; j < HIDDEN_DIM; j++) {
            fc_out[i] += Weight_fc[i][j] * (fixed_t)hidden_state[j];
        }
    }

    // 选择最大得分对应的标签
    int label = 0;
    for (int i = 1; i < NUM_CLASSES; i++) {
#pragma HLS PIPELINE II=1
        if (fc_out[i] > fc_out[label])
            label = i;
    }
    return label;
}

template <typename T, int U, int TI, int TD>
void mnist_lstm(stream_t in[IMG_SIZE], stream_t out[NUM_CLASSES])
{
	float buf_in[IMG_SIZE], img_dat[IMG_SIZE], res[NUM_CLASSES];

	//
	for (int i = 0; i < IMG_SIZE; i++)
	{
#pragma HLS PIPELINE II=1
		buf_in[i] = pop_stream <T, U, TI, TD> (in[i]);
		img_dat[i] = buf_in[i] / 255;
	}

	//输出推理结果
//	infer(img_dat);
	// 杈撳嚭鏁版嵁
	for (int i = 0; i < NUM_CLASSES; i++)
	{
#pragma HLS PIPELINE II=1
		out[i] = push_stream <T, U, TI, TD> (res[i], (i == NUM_CLASSES - 1));
	}

	return;
}
*/

