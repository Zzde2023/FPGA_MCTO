#include "gemvm_quant.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void gemvm_quant::thread_tmp_80_cast_fu_4853_p1() {
    tmp_80_cast_fu_4853_p1 = esl_zext<64,15>(tmp_80_fu_4847_p2.read());
}

void gemvm_quant::thread_tmp_80_fu_4847_p2() {
    tmp_80_fu_4847_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_1E.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_1E));
}

void gemvm_quant::thread_tmp_81_cast_fu_4864_p1() {
    tmp_81_cast_fu_4864_p1 = esl_zext<64,15>(tmp_81_fu_4858_p2.read());
}

void gemvm_quant::thread_tmp_81_fu_4858_p2() {
    tmp_81_fu_4858_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_1F.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_1F));
}

void gemvm_quant::thread_tmp_82_cast_fu_4891_p1() {
    tmp_82_cast_fu_4891_p1 = esl_zext<64,15>(tmp_82_fu_4885_p2.read());
}

void gemvm_quant::thread_tmp_82_fu_4885_p2() {
    tmp_82_fu_4885_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_20.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_20));
}

void gemvm_quant::thread_tmp_83_cast_fu_4902_p1() {
    tmp_83_cast_fu_4902_p1 = esl_zext<64,15>(tmp_83_fu_4896_p2.read());
}

void gemvm_quant::thread_tmp_83_fu_4896_p2() {
    tmp_83_fu_4896_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_21.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_21));
}

void gemvm_quant::thread_tmp_84_cast_fu_4988_p1() {
    tmp_84_cast_fu_4988_p1 = esl_zext<64,15>(tmp_84_fu_4982_p2.read());
}

void gemvm_quant::thread_tmp_84_fu_4982_p2() {
    tmp_84_fu_4982_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_22.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_22));
}

void gemvm_quant::thread_tmp_85_cast_fu_4999_p1() {
    tmp_85_cast_fu_4999_p1 = esl_zext<64,15>(tmp_85_fu_4993_p2.read());
}

void gemvm_quant::thread_tmp_85_fu_4993_p2() {
    tmp_85_fu_4993_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_23.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_23));
}

void gemvm_quant::thread_tmp_86_cast_fu_3239_p1() {
    tmp_86_cast_fu_3239_p1 = esl_zext<64,15>(tmp_86_fu_3233_p2.read());
}

void gemvm_quant::thread_tmp_86_fu_3233_p2() {
    tmp_86_fu_3233_p2 = (!ap_phi_mux_phi_mul_phi_fu_3209_p4.read().is_01() || !ap_const_lv15_24.is_01())? sc_lv<15>(): (sc_biguint<15>(ap_phi_mux_phi_mul_phi_fu_3209_p4.read()) + sc_biguint<15>(ap_const_lv15_24));
}

void gemvm_quant::thread_tmp_87_cast_fu_3250_p1() {
    tmp_87_cast_fu_3250_p1 = esl_zext<64,15>(tmp_87_fu_3244_p2.read());
}

void gemvm_quant::thread_tmp_87_fu_3244_p2() {
    tmp_87_fu_3244_p2 = (!ap_phi_mux_phi_mul_phi_fu_3209_p4.read().is_01() || !ap_const_lv15_25.is_01())? sc_lv<15>(): (sc_biguint<15>(ap_phi_mux_phi_mul_phi_fu_3209_p4.read()) + sc_biguint<15>(ap_const_lv15_25));
}

void gemvm_quant::thread_tmp_88_cast_fu_3261_p1() {
    tmp_88_cast_fu_3261_p1 = esl_zext<64,15>(tmp_88_fu_3255_p2.read());
}

void gemvm_quant::thread_tmp_88_fu_3255_p2() {
    tmp_88_fu_3255_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_26.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_26));
}

void gemvm_quant::thread_tmp_89_cast_fu_7859_p1() {
    tmp_89_cast_fu_7859_p1 = esl_zext<64,15>(tmp_89_fu_7853_p2.read());
}

void gemvm_quant::thread_tmp_89_fu_7853_p2() {
    tmp_89_fu_7853_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_27.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_27));
}

void gemvm_quant::thread_tmp_90_cast_fu_7870_p1() {
    tmp_90_cast_fu_7870_p1 = esl_zext<64,15>(tmp_90_fu_7864_p2.read());
}

void gemvm_quant::thread_tmp_90_fu_7864_p2() {
    tmp_90_fu_7864_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_28.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_28));
}

void gemvm_quant::thread_tmp_91_cast_fu_7927_p1() {
    tmp_91_cast_fu_7927_p1 = esl_zext<64,15>(tmp_91_fu_7921_p2.read());
}

void gemvm_quant::thread_tmp_91_fu_7921_p2() {
    tmp_91_fu_7921_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_29.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_29));
}

void gemvm_quant::thread_tmp_92_cast_fu_7938_p1() {
    tmp_92_cast_fu_7938_p1 = esl_zext<64,15>(tmp_92_fu_7932_p2.read());
}

void gemvm_quant::thread_tmp_92_fu_7932_p2() {
    tmp_92_fu_7932_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_2A.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_2A));
}

void gemvm_quant::thread_tmp_93_cast_fu_5046_p1() {
    tmp_93_cast_fu_5046_p1 = esl_zext<64,15>(tmp_93_fu_5040_p2.read());
}

void gemvm_quant::thread_tmp_93_fu_5040_p2() {
    tmp_93_fu_5040_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_2B.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_2B));
}

void gemvm_quant::thread_tmp_94_cast_fu_5057_p1() {
    tmp_94_cast_fu_5057_p1 = esl_zext<64,15>(tmp_94_fu_5051_p2.read());
}

void gemvm_quant::thread_tmp_94_fu_5051_p2() {
    tmp_94_fu_5051_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_2C.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_2C));
}

void gemvm_quant::thread_tmp_95_cast_fu_5117_p1() {
    tmp_95_cast_fu_5117_p1 = esl_zext<64,15>(tmp_95_fu_5111_p2.read());
}

void gemvm_quant::thread_tmp_95_fu_5111_p2() {
    tmp_95_fu_5111_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_2D.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_2D));
}

void gemvm_quant::thread_tmp_96_cast_fu_5128_p1() {
    tmp_96_cast_fu_5128_p1 = esl_zext<64,15>(tmp_96_fu_5122_p2.read());
}

void gemvm_quant::thread_tmp_96_fu_5122_p2() {
    tmp_96_fu_5122_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_2E.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_2E));
}

void gemvm_quant::thread_tmp_97_cast_fu_5190_p1() {
    tmp_97_cast_fu_5190_p1 = esl_zext<64,15>(tmp_97_fu_5184_p2.read());
}

void gemvm_quant::thread_tmp_97_fu_5184_p2() {
    tmp_97_fu_5184_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_2F.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_2F));
}

void gemvm_quant::thread_tmp_98_cast_fu_8011_p1() {
    tmp_98_cast_fu_8011_p1 = esl_zext<64,15>(tmp_98_fu_8005_p2.read());
}

void gemvm_quant::thread_tmp_98_fu_8005_p2() {
    tmp_98_fu_8005_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_30.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_30));
}

void gemvm_quant::thread_tmp_99_cast_fu_8022_p1() {
    tmp_99_cast_fu_8022_p1 = esl_zext<64,15>(tmp_99_fu_8016_p2.read());
}

void gemvm_quant::thread_tmp_99_fu_8016_p2() {
    tmp_99_fu_8016_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_31.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_31));
}

void gemvm_quant::thread_tmp_fu_8149_p1() {
    tmp_fu_8149_p1 = esl_zext<64,8>(r_reg_3193_pp0_iter1_reg.read());
}

}

