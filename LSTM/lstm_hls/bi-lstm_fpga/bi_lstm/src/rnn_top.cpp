#include "rnn.h"
#include "utils.h"
int data_lens[300] = {
  30, 27, 33, 36, 34, 41, 28, 24, 45, 39, 43, 35, 19, 17, 27, 25, 36, 32, 19, 38, 45, 29, 39, 23, 39, 31, 19, 30, 31, 26, 39, 25, 46, 31, 44, 81, 23, 38, 21, 28, 31, 44, 33, 31, 32, 22, 28, 38, 20, 31, 37, 43, 46, 34, 23, 27, 35, 31, 37, 39, 39, 42, 43, 33, 28, 60, 32, 22, 21, 36, 41, 44, 53, 56, 36, 25, 36, 41, 21, 31, 36, 29, 39, 51, 44, 28, 26, 36, 56, 29, 31, 35, 44, 34, 41, 29, 28, 49, 63, 45, 35, 25, 37, 34, 30, 22, 50, 26, 28, 24, 57, 16, 21, 24, 29, 28, 42, 22, 28, 40, 32, 24, 27, 54, 41, 41, 46, 32, 22, 26, 22, 16, 54, 43, 42, 36, 25, 31, 33, 29, 23, 21, 37, 29, 38, 35, 15, 46, 32, 55, 35, 47, 31, 28, 33, 29, 22, 37, 35, 37, 22, 36, 20, 40, 46, 29, 48, 43, 22, 27, 22, 35, 31, 52, 32, 28, 18, 32, 39, 42, 39, 26, 25, 30, 36, 38, 25, 36, 33, 28, 22, 39, 29, 27, 29, 33, 34, 50, 34, 34, 41, 50, 52, 42, 35, 47, 40, 28, 41, 26, 26, 33, 34, 16, 40, 21, 47, 28, 37, 48, 43, 40, 42, 27, 36, 42, 28, 24, 25, 23, 47, 27, 28, 23, 29, 32, 26, 32, 44, 37, 36, 33, 32, 31, 38, 32, 35, 32, 47, 51, 41, 24, 37, 30, 43, 41, 41, 47, 33, 34, 33, 42, 26, 30, 32, 24, 25, 44, 27, 29, 22, 63, 26, 29, 42, 21, 34, 38, 54, 35, 27, 30, 21, 38, 60, 41, 39, 27, 33, 51, 40, 27, 48, 43, 38, 43, 20, 33, 33, 35
};
int seq=0;
void read_input(hls::stream<stream_t> &input_stream, float input_buf[MAX_SEQ_LEN * INPUT_DIM]) {
#pragma HLS INLINE off
read_loop:
	for (int i = 0; i < MAX_SEQ_LEN * INPUT_DIM; ++i) {
		#pragma HLS PIPELINE II=1
		input_buf[i] = pop_stream<float, 1, 1, 1>(input_stream.read());
	}
	seq = seq ==300? 0: seq;
}

void write_output(hls::stream<stream_t> &output_stream, float res[CLASS_NUM]) {
#pragma HLS INLINE off
write_loop:
    for (int i = 0; i < CLASS_NUM; ++i) {
#pragma HLS PIPELINE II=1
        bool is_last = (i == CLASS_NUM - 1);
        output_stream.write(push_stream<float, 1, 1, 1>(res[i], is_last));
    }
}

void BiLSTM_Top(hls::stream<stream_t> &input_stream,
             hls::stream<stream_t> &output_stream
             ) {
#pragma HLS INTERFACE axis port=input_stream
#pragma HLS INTERFACE axis port=output_stream
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS DATAFLOW

    float input_ping[MAX_SEQ_LEN*INPUT_DIM];
//    float input_pong[MAX_SEQ_LEN*INPUT_DIM];
    float res[CLASS_NUM];

//#pragma HLS ARRAY_PARTITION variable=input_ping dim=1 block factor=16
//#pragma HLS ARRAY_PARTITION variable=input_pong dim=1 block factor=16
#pragma HLS ARRAY_PARTITION variable=res complete

    read_input(input_stream, input_ping);
	lstm_infer(input_ping, data_lens[seq++], res);
	write_output(output_stream, res);
    /*
    bool pingpong_flag = false;

    main_loop:
    for (int batch = 0; batch < 1; ++batch) {
        if (pingpong_flag) {
        	read_input(input_stream, input_ping);
            lstm_infer(input_ping, data_lens[seq++], res);
        } else {
            read_input(input_stream, input_pong);
            lstm_infer(input_pong, data_lens[seq++], res);
        }
        write_output(output_stream, res);
        pingpong_flag = !pingpong_flag;
    }
    */

}
