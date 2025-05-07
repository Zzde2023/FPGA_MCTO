#include "utils.h"
#include "rnn.h"

template <typename T, int U, int TI, int TD>
void mnist_lstm_batch(stream_t in[BATCH_SIZE*IMG_SIZE], stream_t out[BATCH_SIZE*CLASS_NUM])
{
	float buf_in[IMG_SIZE], img_dat[IMG_SIZE], res[BATCH_SIZE][CLASS_NUM];

	for (int b = 0; b < BATCH_SIZE; ++b){
		for (int i = 0; i < IMG_SIZE; i++){
			#pragma HLS UNROLL factor=4
			buf_in[i] = pop_stream <T, U, TI, TD> (in[b*IMG_SIZE + i]);
			img_dat[i] = buf_in[i] / 255;
		}
#if CSIM_ON == 0
		infer(img_dat, res[b]);
#endif
		for (int i = 0; i < CLASS_NUM; i++){
			#pragma HLS UNROLL factor=4
			out[b*CLASS_NUM + i] = push_stream <T, U, TI, TD> (res[b][i], (i == CLASS_NUM - 1));
		}
	}
	return;
}

// THIS IS THE TOP LEVEL DESIGN THAT WILL BE SYNTHESIZED
void LSTM_Top(stream_t in[BATCH_SIZE * IMG_SIZE], stream_t out[BATCH_SIZE * CLASS_NUM])
{
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

	mnist_lstm_batch <float, 1, 1, 1> (in, out);

	return;
}
