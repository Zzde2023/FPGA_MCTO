#include <cstdio>
#include <ctime>
#include <cmath>
#include <string.h>

#include "fixed_lstm.h"
#include <direct.h>


typedef unsigned char byte;

FILE* data_fp = nullptr;
FILE* label_fp = nullptr;

int img_row = -1;
int img_col = -1;
int img_num = -1;

float* buf = nullptr;		// 鍥剧墖缂撳瓨
byte* label = nullptr;		// 鏍囩缂撳瓨

int mnist_app_set(const char* data_path, const char* label_path);
float mnist_app_test_all();
void mnist_app_end();

// 顶层推理函数：多步 LSTM + 全连接层（FC）输出分类结果
// 此函数在 HLS 中生成 IP 核时作为顶层接口
int infer(fixed_t input_sequence[NUM_TIMESTEPS][INPUT_DIM]) {
#pragma HLS DATAFLOW

    // 定义 LSTM 状态，采用 FixedLSTM 模板中的 T_state 类型（这里实例化为 8位门控/12位状态）
    FixedLSTM<12, 16>::T_state cell_state[HIDDEN_DIM];
    FixedLSTM<12, 16>::T_state hidden_state[HIDDEN_DIM];
#pragma HLS ARRAY_PARTITION variable=cell_state complete
#pragma HLS ARRAY_PARTITION variable=hidden_state complete

    // 初始化状态为0
    for (int i = 0; i < HIDDEN_DIM; i++) {
#pragma HLS PIPELINE II=1
        cell_state[i] = 0;
        hidden_state[i] = 0;
    }

    // 创建 LSTM 对象，并设置动态量化位宽（例如8位）
    FixedLSTM<12, 16> lstm;
    int dynamic_bitwidth = 8;
    lstm.compute_multi(input_sequence, cell_state, hidden_state, dynamic_bitwidth);

    // 全连接层计算：利用最终 hidden_state 计算分类得分
    fixed_t fc_out[NUM_CLASSES];
#pragma HLS ARRAY_PARTITION variable=fc_out complete
    for (int i = 0; i < NUM_CLASSES; i++) {
#pragma HLS PIPELINE II=1
        fc_out[i] = Bias_fc[i];
        for (int j = 0; j < HIDDEN_DIM; j++) {
            fc_out[i] += Weight_fc[i][j] * (fixed_t)hidden_state[j];
        }
    }

    // 选择得分最大的类别作为输出标签
    int label = 0;
    for (int i = 1; i < NUM_CLASSES; i++) {
#pragma HLS PIPELINE II=1
        if (fc_out[i] > fc_out[label])
            label = i;
    }
    return label;
}
int main()
{

	printf("i'm in the main function !\n\n\n\n\n\n");
	char cwd[1024];
	_getcwd(cwd, sizeof(cwd));
	printf("Current dir: %s\n", cwd);
	printf("test on the road!\n");

    int t = mnist_app_set("../../../../../../../lab3/lstm_pytorch/MNIST/raw/t10k-images-idx3-ubyte",
    		"../../../../../../../lab3/lstm_pytorch/MNIST/raw/t10k-labels-idx1-ubyte");
    if (t == -1) return 0;

    printf("Testing all images...\n");
    clock_t p0 = clock();
    double acc = mnist_app_test_all();
    clock_t p1 = clock();
    printf("%.3lfs usded, acc = %lf\n", (double)(p1 - p0) / CLOCKS_PER_SEC, acc);
    printf("Test done.\n");

    mnist_app_end();




    return 0;
}

////
//// 灏忕杞ぇ绔�
inline int transform(int num)
{
	int a = num & 0x000000FF;
	int b = num & 0x0000FF00;
	int c = num & 0x00FF0000;
	int d = num & 0xFF000000;

	return (a << 24) + (b << 8) + (c >> 8) + (d >> 24);
}

int mnist_app_set(const char* data_path, const char* label_path)
{
	data_fp = fopen(data_path, "rb");
	if (data_fp == nullptr)
	{
		printf("Failed to open data file.\n");
		return -1;
	}

	label_fp = fopen(label_path, "rb");
	if (label_fp == nullptr)
	{
		printf("Failed to open label file.\n");
		return -1;
	}

	int num_img, num_label;
	// 璇诲浘鐗囨暟
	fread(&num_img, 1, sizeof(int), data_fp);
	fread(&num_img, 1, sizeof(int), data_fp);
	num_img = transform(num_img);
	// 璇绘爣绛炬暟
	fseek(label_fp, 4, SEEK_SET);
	fread(&num_label, 1, sizeof(int), label_fp);
	num_label = transform(num_label);

	if (num_img != num_label) printf("Warning: num_img != num_label\n");
	img_num = num_img < num_label ? num_img : num_label;

	// 璇诲浘鐗囧ぇ灏�
	fread(&img_row, 1, sizeof(int), data_fp);	img_row = transform(img_row);
	fread(&img_col, 1, sizeof(int), data_fp);	img_col = transform(img_col);

	// 鍒嗛厤绌洪棿
	buf = new float[img_row * img_col];
	label = new byte[img_num];

	// 璇绘爣绛炬暟鎹�
	fread(label, img_num, sizeof(byte), label_fp);

	return 0;
}

inline void normalize(float* out, byte* in, int size, int max_val)
{
	for (int i = 0; i < size; i++)
		out[i] = (float)in[i] / max_val;
}

inline int mnist_app_get_label(int indx)
{
	return (int)label[indx];
}

float mnist_app_test_all()
{
	int match_num = 0;

	fseek(data_fp, 16, SEEK_SET);
	byte* tmp = new byte[img_row * img_col];

	float res_vec[10];
	for (int i = 0; i <  img_num; i++)
	{
		// 璇诲彇涓�寮犲浘鐗�
		fread(tmp, sizeof(byte), img_row * img_col, data_fp);

		// 瀵瑰浘鐗囧儚绱犲�艰繘琛屽綊涓�鍖�
		normalize(buf, tmp, img_row * img_col, 255);
		//quantize(tmp1, tmp, img_row * img_col);
		//for (int i = 0; i < img_row * img_col; i++) {printf("%d ", (int)tmp[i]); if(i%img_row==0) printf("\n");}
		//printf("\n debug-tmp\n");
		//将图像按行分解，每行28个像素作为一个时序输入
		fixed_t input_sequence[NUM_TIMESTEPS][INPUT_DIM];
		for (int r = 0; r < NUM_TIMESTEPS; r++) {
			for (int c = 0; c < INPUT_DIM; c++) {
				input_sequence[r][c] = buf[r * INPUT_DIM + c];
			}
		}
		int net_output = infer(input_sequence);
		//printf("%d image(%d) is predict as %d\n\n\n",i, mnist_app_get_label(i), net_output);
		if (net_output == mnist_app_get_label(i)) match_num++;
	}

	delete tmp;
	return (float)match_num / img_num;
}

void mnist_app_end()
{
	if (data_fp != nullptr)
		fclose(data_fp);

	if (label_fp != nullptr)
		fclose(label_fp);

	if (buf != nullptr)
		delete buf;

	if (label != nullptr)
		delete label;
}
