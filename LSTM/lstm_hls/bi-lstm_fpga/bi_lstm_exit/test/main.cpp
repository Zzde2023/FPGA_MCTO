#include <cstdio>
#include "rnn.h"
#include "test_data.h"
#include <iostream>

int main() {
    int correct = 0;
    printf("test in main function !!\n\n\n");
    clock_t p0 = clock();
    for (int i = 0; i < TEST_SAMPLE_NUM; i++) {
        // 输入转换成 act_t 类型
        float input[MAX_SEQ_LEN*INPUT_DIM];
        for (int t = 0; t < MAX_SEQ_LEN; t++) {
            for (int j = 0; j < INPUT_DIM; j++) {
                input[t*INPUT_DIM + j] = test_features[i][t][j];
            }
        }

        float result[CLASS_NUM];
        //test for infer time
//        valid_lens[i]
        lstm_infer(input, valid_lens[i], result);

        int pred = 0;
        float max_val = result[0];
        for (int k = 1; k < CLASS_NUM; k++) {
            if (result[k] > max_val) {
                max_val = result[k];
                pred = k;
            }
        }

        if (pred == test_labels[i]) correct++;
        //std::cout << "Sample " << i << ": Predict " << pred << ", Label " << test_labels[i] << std::endl;
    }
    clock_t p1 = clock();
    printf("%.3lfs usded\n", (double)(p1 - p0) / CLOCKS_PER_SEC);//5.098s(no-sparse ) 5.019s
    std::cout << "Accuracy: " << (float)correct / TEST_SAMPLE_NUM << std::endl;
    return 0;
}
