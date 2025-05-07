#include "rnn.h"
#include "weight.h"

#define SKIP_THRESHOLD 0.02
#define SIGMOID_XMIN -8
#define SIGMOID_XMAX 8
#define TANH_XMIN -4
#define TANH_XMAX 4

act_t sigmoid(act_t x) {
    return 1/(1+exp(-x));
}

act_t tanh(act_t x) {
    return (exp(x) -exp(-x)) /(exp(x) + exp(-x));
}

act_t dot(const weight_t w[], const act_t x[], int len) {
    act_t sum = 0;
    for (int i = 0; i < len; i++) {
		sum += w[i] * x[i];
    }
    return sum;
}

void fc1_layer(const weight_t W[HIDDEN_DIM][2 * HIDDEN_DIM], const weight_t B[HIDDEN_DIM], const act_t in[2 * HIDDEN_DIM], act_t out[HIDDEN_DIM]) {
    for (int i = 0; i < HIDDEN_DIM; i++) {
        act_t sum = 0;
        for (int j = 0; j < 2 * HIDDEN_DIM; j++) {
            sum += W[i][j] * in[j];
        }
        act_t acc = sum + B[i];
        out[i] = acc > 0 ? acc : act_t(0);
    }
}

void fc2_layer(const weight_t W[CLASS_NUM][HIDDEN_DIM], const weight_t B[CLASS_NUM], const act_t in[HIDDEN_DIM], act_t out[CLASS_NUM]) {
    for (int i = 0; i < CLASS_NUM; i++) {
        act_t sum = 0;
        for (int j = 0; j < HIDDEN_DIM; j++) {
            sum += W[i][j] * in[j];
        }
        out[i] = sum + B[i];
    }
}

void merge_output(act_t h_forward[HIDDEN_DIM], act_t h_backward[HIDDEN_DIM], act_t h_out[2 * HIDDEN_DIM]) {
    for (int i = 0; i < HIDDEN_DIM; i++) {
        h_out[i] = h_forward[i];
        h_out[HIDDEN_DIM + i] = h_backward[i];
    }
}

void lstm_forward(act_t input[MAX_SEQ_LEN * INPUT_DIM], int valid_len, act_t h_out[HIDDEN_DIM], act_t c_out[HIDDEN_DIM]) {
    act_t h_t[HIDDEN_DIM] = {0};
    act_t C_t[HIDDEN_DIM] = {0};
    act_t x_h[INPUT_DIM + HIDDEN_DIM];
    act_t out_all[4 * HIDDEN_DIM];
    act_t i_;
    act_t f;
	act_t g;
	act_t o;
	 for (int t = 0; t < valid_len; t++) {
        for (int i = 0; i < INPUT_DIM; i++) {
        	x_h[i] = input[t*INPUT_DIM + i];
        }
        for (int i = 0; i < HIDDEN_DIM; i++){
        	x_h[INPUT_DIM + i] = h_t[i];
        }
        for (int j = 0; j < 4 * HIDDEN_DIM; j++) {
            out_all[j] = dot(Weight_fused_f[j], x_h, INPUT_DIM + HIDDEN_DIM) + Bias_fused_f[j];
        }
        for (int j = 0; j < HIDDEN_DIM; j++) {
            i_ = sigmoid(out_all[j]);
            f = sigmoid(out_all[HIDDEN_DIM + j]);
            g = tanh(out_all[2 * HIDDEN_DIM + j]);
            o = sigmoid(out_all[3 * HIDDEN_DIM + j]);
            C_t[j] = f * C_t[j] + i_ * g;
            h_t[j] = o * tanh(C_t[j]);
        }
    }

    for (int i = 0; i < HIDDEN_DIM; i++) {
        h_out[i] = h_t[i];
        c_out[i] = C_t[i];
    }
}

void lstm_backward(act_t input[MAX_SEQ_LEN*INPUT_DIM], int valid_len, act_t h_out[HIDDEN_DIM], act_t c_out[HIDDEN_DIM]) {
    act_t h_t[HIDDEN_DIM] = {0};
    act_t C_t[HIDDEN_DIM] = {0};
    act_t x_h[INPUT_DIM + HIDDEN_DIM];
    act_t out_all[4 * HIDDEN_DIM];
    act_t i_;
    act_t f;
	act_t g;
	act_t o;
    for (int t = valid_len - 1; t >= 0; t--) {
        for (int i = 0; i < INPUT_DIM; i++) {
        	x_h[i] = input[t*INPUT_DIM + i];
        }
        for (int i = 0; i < HIDDEN_DIM; i++) {
        	x_h[INPUT_DIM + i] = h_t[i];
        }
        for (int j = 0; j < 4 * HIDDEN_DIM; j++) {
            out_all[j] = dot(Weight_fused_b[j], x_h, INPUT_DIM + HIDDEN_DIM) + Bias_fused_b[j];
        }
        for (int j = 0; j < HIDDEN_DIM; j++) {
            i_ = sigmoid(out_all[j]);
            f = sigmoid(out_all[HIDDEN_DIM + j]);
            g = tanh(out_all[2 * HIDDEN_DIM + j]);
            o = sigmoid(out_all[3 * HIDDEN_DIM + j]);
            C_t[j] = f * C_t[j] + i_ * g;
            h_t[j] = o * tanh(C_t[j]);
        }
    }

    for (int i = 0; i < HIDDEN_DIM; i++) {
        h_out[i] = h_t[i];
        c_out[i] = C_t[i];
    }
}

void compute_bilstm(act_t input_f[MAX_SEQ_LEN * INPUT_DIM],act_t input_b[MAX_SEQ_LEN*INPUT_DIM], int valid_len, act_t h_out[2 * HIDDEN_DIM]) {
    act_t h_f[HIDDEN_DIM];
    act_t c_f[HIDDEN_DIM];
    act_t h_b[HIDDEN_DIM];
    act_t c_b[HIDDEN_DIM];
    lstm_forward(input_f, valid_len, h_f, c_f);
    lstm_backward(input_b, valid_len, h_b, c_b);
    merge_output(h_f, h_b, h_out);
}

void lstm_infer(float input[MAX_SEQ_LEN * INPUT_DIM], int valid_len, float ress[CLASS_NUM]) {
	act_t input_f[MAX_SEQ_LEN * INPUT_DIM];
	act_t input_b[MAX_SEQ_LEN * INPUT_DIM];
	for (int i = 0; i < valid_len*INPUT_DIM; ++i) {
		input_f[i] = act_t(input[i]);
		input_b[i] = act_t(input[i]);
	}

	act_t h_t_cat[2 * HIDDEN_DIM];
    compute_bilstm(input_f, input_b, valid_len, h_t_cat);

    act_t fc1_out[HIDDEN_DIM];
    fc1_layer(Weight_fc1, Bias_fc1, h_t_cat, fc1_out);

    act_t fc2_out[CLASS_NUM];
    fc2_layer(Weight_fc2, Bias_fc2, fc1_out, fc2_out);

    for (int i = 0; i < CLASS_NUM; i++) {
        ress[i] = float(fc2_out[i]);
    }
}
