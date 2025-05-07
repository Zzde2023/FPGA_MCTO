#include "utils.h"
#include "rnn.h"

void mnist_lstm_batch(stream_t in[BATCH_SIZE * IMG_SIZE], stream_t out[BATCH_SIZE * CLASS_NUM]) {
#pragma HLS INLINE off

float res[BATCH_SIZE][CLASS_NUM];
    // Step 1: Input stream -> img_dat
    for (int b = 0; b < BATCH_SIZE; ++b) {
    	float img_dat[IMG_SIZE];
    	for (int i = 0; i < IMG_SIZE; ++i) {
			#pragma HLS PIPELINE II=1
            float pixel = pop_stream<float, 1, 1, 1>(in[b * IMG_SIZE + i]);
            img_dat[i] = pixel / 255.0f;
        }
    // Step 2:Inference

#if CSIM_ON == 0
        infer(img_dat, res[b]);
#endif

    // Step 3: Output res -> stream
        for (int i = 0; i < CLASS_NUM; ++i) {
			#pragma HLS PIPELINE II=1
            out[b * CLASS_NUM + i] = push_stream<float, 1, 1, 1>(res[b][i], i == CLASS_NUM - 1);
        }
    }
}

// THIS IS THE TOP LEVEL DESIGN THAT WILL BE SYNTHESIZED
void LSTM_Top(stream_t in[BATCH_SIZE * IMG_SIZE], stream_t out[BATCH_SIZE * CLASS_NUM]) {
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

    mnist_lstm_batch(in, out);
}
