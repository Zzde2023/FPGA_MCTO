#include "dynamic_quant.h"
int decide_bitwidth(const QuantStats &stats) {
    // 简单规则：根据max值设定位宽
    if(stats.max_val < 1.0) {
        return 4;  // 4-bit量化
    } else if(stats.max_val < 2.0) {
        return 6;
    } else {
        return 8;
    }
}
