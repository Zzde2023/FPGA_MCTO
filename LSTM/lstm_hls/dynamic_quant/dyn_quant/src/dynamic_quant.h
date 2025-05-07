// dynamic_quant.h
#ifndef DYNAMIC_QUANT_H
#define DYNAMIC_QUANT_H

#include <ap_fixed.h>

// 假设数据范围及统计结果使用float表示，实际可以更复杂
struct QuantStats {
    float max_val;
    float mean;
    // 可以添加更多统计量
};

int decide_bitwidth(const QuantStats &stats);
#endif
