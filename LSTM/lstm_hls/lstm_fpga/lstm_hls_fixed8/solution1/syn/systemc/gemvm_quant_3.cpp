#include "gemvm_quant.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void gemvm_quant::thread_a_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage77.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage77.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_98_cast_fu_8011_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage76.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage76.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_91_cast_fu_7927_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage75.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage75.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_89_cast_fu_7859_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage74.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage74.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_59_cast_fu_7782_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage73.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage73.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_52_cast_fu_7704_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage72.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage72.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (phi_mul_cast_reg_9890.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage71.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage71.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_197_cast_fu_7589_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage70.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage70.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_192_cast_fu_7516_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage69.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage69.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_187_cast_fu_7445_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage68.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage68.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_182_cast_fu_7387_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage67.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage67.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_180_cast_fu_7314_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage66.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage66.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_178_cast_fu_7256_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage65.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage65.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_173_cast_fu_7189_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage64.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage64.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_171_cast_fu_7116_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage63.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage63.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_169_cast_fu_7045_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage62.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage62.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_164_cast_fu_7007_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage61.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage61.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_162_cast_fu_6949_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage60.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage60.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_160_cast_fu_6852_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage59.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage59.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_158_cast_fu_6814_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage58.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage58.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_156_cast_fu_6717_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage57.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage57.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_154_cast_fu_6679_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage56.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage56.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_152_cast_fu_6632_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage55.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage55.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_150_cast_fu_6559_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage54.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage54.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_148_cast_fu_6488_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage53.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage53.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_143_cast_fu_6430_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage52.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage52.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_140_cast_fu_6333_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage51.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage51.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_138_cast_fu_6295_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage50.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage50.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_136_cast_fu_6257_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage49.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage49.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_134_cast_fu_6173_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage48.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage48.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_132_cast_fu_6126_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage47.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage47.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_130_cast_fu_6053_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage46.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage46.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_128_cast_fu_5982_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage45.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage45.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_123_cast_fu_5924_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage44.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage44.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_121_cast_fu_5827_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage43.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage43.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_119_cast_fu_5789_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage42.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage42.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_117_cast_fu_5751_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage41.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage41.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_115_cast_fu_5654_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage40.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage40.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_113_cast_fu_5616_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage39.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage39.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_111_cast_fu_5519_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage38.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage38.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_109_cast_fu_5481_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage37.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage37.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_107_cast_fu_5443_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage36.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage36.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_105_cast_fu_5372_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage35.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage35.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_103_cast_fu_5275_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage34.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage34.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_101_cast_fu_5237_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage33.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage33.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_97_cast_fu_5190_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage32.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_95_cast_fu_5117_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_93_cast_fu_5046_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_84_cast_fu_4988_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_82_cast_fu_4891_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_80_cast_fu_4853_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_78_cast_fu_4815_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_76_cast_fu_4718_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_74_cast_fu_4680_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_72_cast_fu_4583_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_70_cast_fu_4545_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_68_cast_fu_4507_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_66_cast_fu_4436_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_64_cast_fu_4339_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_62_cast_fu_4301_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_58_cast_fu_4263_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_56_cast_fu_4166_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_54_cast_fu_4128_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_205_cast_fu_4057_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_203_cast_fu_4019_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_201_cast_fu_3948_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_199_cast_fu_3877_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_195_cast_fu_3839_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_191_cast_fu_3768_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_189_cast_fu_3697_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_185_cast_fu_3659_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_176_cast_fu_3588_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_174_cast_fu_3517_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_166_cast_fu_3479_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_147_cast_fu_3408_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_145_cast_fu_3337_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_126_cast_fu_3299_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_88_cast_fu_3261_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_V_address0 =  (sc_lv<15>) (tmp_86_cast_fu_3239_p1.read());
        } else {
            a_V_address0 = "XXXXXXXXXXXXXXX";
        }
    } else {
        a_V_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gemvm_quant::thread_a_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage77.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage77.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_99_cast_fu_8022_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage76.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage76.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_92_cast_fu_7938_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage75.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage75.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_90_cast_fu_7870_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage74.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage74.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_60_cast_fu_7793_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage73.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage73.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_53_cast_fu_7715_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage72.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage72.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_51_cast_fu_7652_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage71.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage71.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_198_cast_fu_7600_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage70.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage70.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_193_cast_fu_7527_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage69.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage69.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_188_cast_fu_7456_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage68.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage68.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_183_cast_fu_7398_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage67.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage67.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_181_cast_fu_7325_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage66.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage66.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_179_cast_fu_7267_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage65.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage65.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_177_cast_fu_7200_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage64.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage64.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_172_cast_fu_7127_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage63.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage63.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_170_cast_fu_7056_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage62.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage62.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_168_cast_fu_7018_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage61.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage61.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_163_cast_fu_6960_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage60.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage60.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_161_cast_fu_6863_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage59.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage59.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_159_cast_fu_6825_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage58.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage58.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_157_cast_fu_6728_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage57.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage57.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_155_cast_fu_6690_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage56.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage56.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_153_cast_fu_6643_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage55.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage55.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_151_cast_fu_6570_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage54.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage54.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_149_cast_fu_6499_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage53.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage53.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_144_cast_fu_6441_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage52.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage52.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_141_cast_fu_6344_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage51.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage51.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_139_cast_fu_6306_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage50.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage50.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_137_cast_fu_6268_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage49.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage49.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_135_cast_fu_6184_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage48.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage48.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_133_cast_fu_6137_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage47.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage47.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_131_cast_fu_6064_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage46.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage46.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_129_cast_fu_5993_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage45.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage45.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_124_cast_fu_5935_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage44.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage44.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_122_cast_fu_5838_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage43.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage43.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_120_cast_fu_5800_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage42.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage42.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_118_cast_fu_5762_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage41.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage41.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_116_cast_fu_5665_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage40.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage40.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_114_cast_fu_5627_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage39.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage39.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_112_cast_fu_5530_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage38.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage38.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_110_cast_fu_5492_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage37.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage37.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_108_cast_fu_5454_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage36.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage36.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_106_cast_fu_5383_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage35.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage35.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_104_cast_fu_5286_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage34.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage34.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_102_cast_fu_5248_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage33.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage33.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_100_cast_fu_5201_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage32.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_96_cast_fu_5128_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_94_cast_fu_5057_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_85_cast_fu_4999_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_83_cast_fu_4902_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_81_cast_fu_4864_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_79_cast_fu_4826_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_77_cast_fu_4729_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_75_cast_fu_4691_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_73_cast_fu_4594_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_71_cast_fu_4556_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_69_cast_fu_4518_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_67_cast_fu_4447_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_65_cast_fu_4350_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_63_cast_fu_4312_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_61_cast_fu_4274_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_57_cast_fu_4177_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_55_cast_fu_4139_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_206_cast_fu_4068_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_204_cast_fu_4030_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_202_cast_fu_3959_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_200_cast_fu_3888_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_196_cast_fu_3850_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_194_cast_fu_3779_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_190_cast_fu_3708_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_186_cast_fu_3670_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_184_cast_fu_3599_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_175_cast_fu_3528_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_167_cast_fu_3490_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_165_cast_fu_3419_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_146_cast_fu_3348_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_127_cast_fu_3310_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_125_cast_fu_3272_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_V_address1 =  (sc_lv<15>) (tmp_87_cast_fu_3250_p1.read());
        } else {
            a_V_address1 = "XXXXXXXXXXXXXXX";
        }
    } else {
        a_V_address1 = "XXXXXXXXXXXXXXX";
    }
}

void gemvm_quant::thread_a_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage77.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage77_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage48.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage48_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage49.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage49_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage50.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage50_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage51.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage51_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage52.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage52_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage53.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage53_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage54.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage54_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage55.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage55_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage56.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage56_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage57.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage57_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage58.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage58_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage59.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage59_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage60.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage60_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage61.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage61_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage62.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage62_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage63.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage63_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage64.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage64_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage65.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage65_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage66.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage66_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage67.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage67_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage68.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage68_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage69.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage69_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage70.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage70_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage71.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage71_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage72.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage72_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage73.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage73_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage74.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage74_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage75.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage75_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage76.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage76_11001.read(), ap_const_boolean_0)))) {
        a_V_ce0 = ap_const_logic_1;
    } else {
        a_V_ce0 = ap_const_logic_0;
    }
}

void gemvm_quant::thread_a_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage77.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage77_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage48.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage48_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage49.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage49_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage50.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage50_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage51.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage51_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage52.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage52_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage53.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage53_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage54.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage54_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage55.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage55_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage56.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage56_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage57.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage57_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage58.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage58_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage59.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage59_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage60.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage60_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage61.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage61_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage62.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage62_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage63.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage63_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage64.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage64_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage65.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage65_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage66.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage66_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage67.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage67_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage68.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage68_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage69.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage69_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage70.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage70_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage71.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage71_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage72.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage72_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage73.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage73_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage74.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage74_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage75.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage75_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage76.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage76_11001.read(), ap_const_boolean_0)))) {
        a_V_ce1 = ap_const_logic_1;
    } else {
        a_V_ce1 = ap_const_logic_0;
    }
}

void gemvm_quant::thread_acc_V_s_fu_8158_p2() {
    acc_V_s_fu_8158_p2 = (!tmp78_reg_11644.read().is_01() || !tmp1_fu_8154_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp78_reg_11644.read()) + sc_biguint<27>(tmp1_fu_8154_p2.read()));
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[2];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage10() {
    ap_CS_fsm_pp0_stage10 = ap_CS_fsm.read()[11];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage11() {
    ap_CS_fsm_pp0_stage11 = ap_CS_fsm.read()[12];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage12() {
    ap_CS_fsm_pp0_stage12 = ap_CS_fsm.read()[13];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage13() {
    ap_CS_fsm_pp0_stage13 = ap_CS_fsm.read()[14];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage14() {
    ap_CS_fsm_pp0_stage14 = ap_CS_fsm.read()[15];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage15() {
    ap_CS_fsm_pp0_stage15 = ap_CS_fsm.read()[16];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage16() {
    ap_CS_fsm_pp0_stage16 = ap_CS_fsm.read()[17];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage17() {
    ap_CS_fsm_pp0_stage17 = ap_CS_fsm.read()[18];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage18() {
    ap_CS_fsm_pp0_stage18 = ap_CS_fsm.read()[19];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage19() {
    ap_CS_fsm_pp0_stage19 = ap_CS_fsm.read()[20];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[3];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage20() {
    ap_CS_fsm_pp0_stage20 = ap_CS_fsm.read()[21];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage21() {
    ap_CS_fsm_pp0_stage21 = ap_CS_fsm.read()[22];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage22() {
    ap_CS_fsm_pp0_stage22 = ap_CS_fsm.read()[23];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage23() {
    ap_CS_fsm_pp0_stage23 = ap_CS_fsm.read()[24];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage24() {
    ap_CS_fsm_pp0_stage24 = ap_CS_fsm.read()[25];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage25() {
    ap_CS_fsm_pp0_stage25 = ap_CS_fsm.read()[26];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage26() {
    ap_CS_fsm_pp0_stage26 = ap_CS_fsm.read()[27];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage27() {
    ap_CS_fsm_pp0_stage27 = ap_CS_fsm.read()[28];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage28() {
    ap_CS_fsm_pp0_stage28 = ap_CS_fsm.read()[29];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage29() {
    ap_CS_fsm_pp0_stage29 = ap_CS_fsm.read()[30];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[4];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage30() {
    ap_CS_fsm_pp0_stage30 = ap_CS_fsm.read()[31];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage31() {
    ap_CS_fsm_pp0_stage31 = ap_CS_fsm.read()[32];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage32() {
    ap_CS_fsm_pp0_stage32 = ap_CS_fsm.read()[33];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage33() {
    ap_CS_fsm_pp0_stage33 = ap_CS_fsm.read()[34];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage34() {
    ap_CS_fsm_pp0_stage34 = ap_CS_fsm.read()[35];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage35() {
    ap_CS_fsm_pp0_stage35 = ap_CS_fsm.read()[36];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage36() {
    ap_CS_fsm_pp0_stage36 = ap_CS_fsm.read()[37];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage37() {
    ap_CS_fsm_pp0_stage37 = ap_CS_fsm.read()[38];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage38() {
    ap_CS_fsm_pp0_stage38 = ap_CS_fsm.read()[39];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage39() {
    ap_CS_fsm_pp0_stage39 = ap_CS_fsm.read()[40];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[5];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage40() {
    ap_CS_fsm_pp0_stage40 = ap_CS_fsm.read()[41];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage41() {
    ap_CS_fsm_pp0_stage41 = ap_CS_fsm.read()[42];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage42() {
    ap_CS_fsm_pp0_stage42 = ap_CS_fsm.read()[43];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage43() {
    ap_CS_fsm_pp0_stage43 = ap_CS_fsm.read()[44];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage44() {
    ap_CS_fsm_pp0_stage44 = ap_CS_fsm.read()[45];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage45() {
    ap_CS_fsm_pp0_stage45 = ap_CS_fsm.read()[46];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage46() {
    ap_CS_fsm_pp0_stage46 = ap_CS_fsm.read()[47];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage47() {
    ap_CS_fsm_pp0_stage47 = ap_CS_fsm.read()[48];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage48() {
    ap_CS_fsm_pp0_stage48 = ap_CS_fsm.read()[49];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage49() {
    ap_CS_fsm_pp0_stage49 = ap_CS_fsm.read()[50];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage5() {
    ap_CS_fsm_pp0_stage5 = ap_CS_fsm.read()[6];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage50() {
    ap_CS_fsm_pp0_stage50 = ap_CS_fsm.read()[51];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage51() {
    ap_CS_fsm_pp0_stage51 = ap_CS_fsm.read()[52];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage52() {
    ap_CS_fsm_pp0_stage52 = ap_CS_fsm.read()[53];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage53() {
    ap_CS_fsm_pp0_stage53 = ap_CS_fsm.read()[54];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage54() {
    ap_CS_fsm_pp0_stage54 = ap_CS_fsm.read()[55];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage55() {
    ap_CS_fsm_pp0_stage55 = ap_CS_fsm.read()[56];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage56() {
    ap_CS_fsm_pp0_stage56 = ap_CS_fsm.read()[57];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage57() {
    ap_CS_fsm_pp0_stage57 = ap_CS_fsm.read()[58];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage58() {
    ap_CS_fsm_pp0_stage58 = ap_CS_fsm.read()[59];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage59() {
    ap_CS_fsm_pp0_stage59 = ap_CS_fsm.read()[60];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[7];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage60() {
    ap_CS_fsm_pp0_stage60 = ap_CS_fsm.read()[61];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage61() {
    ap_CS_fsm_pp0_stage61 = ap_CS_fsm.read()[62];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage62() {
    ap_CS_fsm_pp0_stage62 = ap_CS_fsm.read()[63];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage63() {
    ap_CS_fsm_pp0_stage63 = ap_CS_fsm.read()[64];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage64() {
    ap_CS_fsm_pp0_stage64 = ap_CS_fsm.read()[65];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage65() {
    ap_CS_fsm_pp0_stage65 = ap_CS_fsm.read()[66];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage66() {
    ap_CS_fsm_pp0_stage66 = ap_CS_fsm.read()[67];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage67() {
    ap_CS_fsm_pp0_stage67 = ap_CS_fsm.read()[68];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage68() {
    ap_CS_fsm_pp0_stage68 = ap_CS_fsm.read()[69];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage69() {
    ap_CS_fsm_pp0_stage69 = ap_CS_fsm.read()[70];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[8];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage70() {
    ap_CS_fsm_pp0_stage70 = ap_CS_fsm.read()[71];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage71() {
    ap_CS_fsm_pp0_stage71 = ap_CS_fsm.read()[72];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage72() {
    ap_CS_fsm_pp0_stage72 = ap_CS_fsm.read()[73];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage73() {
    ap_CS_fsm_pp0_stage73 = ap_CS_fsm.read()[74];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage74() {
    ap_CS_fsm_pp0_stage74 = ap_CS_fsm.read()[75];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage75() {
    ap_CS_fsm_pp0_stage75 = ap_CS_fsm.read()[76];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage76() {
    ap_CS_fsm_pp0_stage76 = ap_CS_fsm.read()[77];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage77() {
    ap_CS_fsm_pp0_stage77 = ap_CS_fsm.read()[78];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage8() {
    ap_CS_fsm_pp0_stage8 = ap_CS_fsm.read()[9];
}

void gemvm_quant::thread_ap_CS_fsm_pp0_stage9() {
    ap_CS_fsm_pp0_stage9 = ap_CS_fsm.read()[10];
}

void gemvm_quant::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void gemvm_quant::thread_ap_CS_fsm_state83() {
    ap_CS_fsm_state83 = ap_CS_fsm.read()[79];
}

void gemvm_quant::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage10() {
    ap_block_pp0_stage10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage10_11001() {
    ap_block_pp0_stage10_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage10_subdone() {
    ap_block_pp0_stage10_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage11() {
    ap_block_pp0_stage11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage11_11001() {
    ap_block_pp0_stage11_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage11_subdone() {
    ap_block_pp0_stage11_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage12() {
    ap_block_pp0_stage12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage12_11001() {
    ap_block_pp0_stage12_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage12_subdone() {
    ap_block_pp0_stage12_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage13() {
    ap_block_pp0_stage13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage13_11001() {
    ap_block_pp0_stage13_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage13_subdone() {
    ap_block_pp0_stage13_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage14() {
    ap_block_pp0_stage14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage14_11001() {
    ap_block_pp0_stage14_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage14_subdone() {
    ap_block_pp0_stage14_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage15() {
    ap_block_pp0_stage15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage15_11001() {
    ap_block_pp0_stage15_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage15_subdone() {
    ap_block_pp0_stage15_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage16() {
    ap_block_pp0_stage16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage16_11001() {
    ap_block_pp0_stage16_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage16_subdone() {
    ap_block_pp0_stage16_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage17() {
    ap_block_pp0_stage17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage17_11001() {
    ap_block_pp0_stage17_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage17_subdone() {
    ap_block_pp0_stage17_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage18() {
    ap_block_pp0_stage18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage18_11001() {
    ap_block_pp0_stage18_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage18_subdone() {
    ap_block_pp0_stage18_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage19() {
    ap_block_pp0_stage19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage19_11001() {
    ap_block_pp0_stage19_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage19_subdone() {
    ap_block_pp0_stage19_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage20() {
    ap_block_pp0_stage20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage20_11001() {
    ap_block_pp0_stage20_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage20_subdone() {
    ap_block_pp0_stage20_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage21() {
    ap_block_pp0_stage21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage21_11001() {
    ap_block_pp0_stage21_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage21_subdone() {
    ap_block_pp0_stage21_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage22() {
    ap_block_pp0_stage22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage22_11001() {
    ap_block_pp0_stage22_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage22_subdone() {
    ap_block_pp0_stage22_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage23() {
    ap_block_pp0_stage23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage23_11001() {
    ap_block_pp0_stage23_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage23_subdone() {
    ap_block_pp0_stage23_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage24() {
    ap_block_pp0_stage24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage24_11001() {
    ap_block_pp0_stage24_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage24_subdone() {
    ap_block_pp0_stage24_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage25() {
    ap_block_pp0_stage25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage25_11001() {
    ap_block_pp0_stage25_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage25_subdone() {
    ap_block_pp0_stage25_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage26() {
    ap_block_pp0_stage26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage26_11001() {
    ap_block_pp0_stage26_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage26_subdone() {
    ap_block_pp0_stage26_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage27() {
    ap_block_pp0_stage27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage27_11001() {
    ap_block_pp0_stage27_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage27_subdone() {
    ap_block_pp0_stage27_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage28() {
    ap_block_pp0_stage28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage28_11001() {
    ap_block_pp0_stage28_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage28_subdone() {
    ap_block_pp0_stage28_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage29() {
    ap_block_pp0_stage29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage29_11001() {
    ap_block_pp0_stage29_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage29_subdone() {
    ap_block_pp0_stage29_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage30() {
    ap_block_pp0_stage30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage30_11001() {
    ap_block_pp0_stage30_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage30_subdone() {
    ap_block_pp0_stage30_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage31() {
    ap_block_pp0_stage31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage31_11001() {
    ap_block_pp0_stage31_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage31_subdone() {
    ap_block_pp0_stage31_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage32() {
    ap_block_pp0_stage32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage32_11001() {
    ap_block_pp0_stage32_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage32_subdone() {
    ap_block_pp0_stage32_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage33() {
    ap_block_pp0_stage33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage33_11001() {
    ap_block_pp0_stage33_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage33_subdone() {
    ap_block_pp0_stage33_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage34() {
    ap_block_pp0_stage34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage34_11001() {
    ap_block_pp0_stage34_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage34_subdone() {
    ap_block_pp0_stage34_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage35() {
    ap_block_pp0_stage35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage35_11001() {
    ap_block_pp0_stage35_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage35_subdone() {
    ap_block_pp0_stage35_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage36() {
    ap_block_pp0_stage36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage36_11001() {
    ap_block_pp0_stage36_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage36_subdone() {
    ap_block_pp0_stage36_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage37() {
    ap_block_pp0_stage37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage37_11001() {
    ap_block_pp0_stage37_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage37_subdone() {
    ap_block_pp0_stage37_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage38() {
    ap_block_pp0_stage38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage38_11001() {
    ap_block_pp0_stage38_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage38_subdone() {
    ap_block_pp0_stage38_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage39() {
    ap_block_pp0_stage39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage39_11001() {
    ap_block_pp0_stage39_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage39_subdone() {
    ap_block_pp0_stage39_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage40() {
    ap_block_pp0_stage40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage40_11001() {
    ap_block_pp0_stage40_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage40_subdone() {
    ap_block_pp0_stage40_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage41() {
    ap_block_pp0_stage41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage41_11001() {
    ap_block_pp0_stage41_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage41_subdone() {
    ap_block_pp0_stage41_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage42() {
    ap_block_pp0_stage42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage42_11001() {
    ap_block_pp0_stage42_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage42_subdone() {
    ap_block_pp0_stage42_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage43() {
    ap_block_pp0_stage43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage43_11001() {
    ap_block_pp0_stage43_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage43_subdone() {
    ap_block_pp0_stage43_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage44() {
    ap_block_pp0_stage44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage44_11001() {
    ap_block_pp0_stage44_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage44_subdone() {
    ap_block_pp0_stage44_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage45() {
    ap_block_pp0_stage45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage45_11001() {
    ap_block_pp0_stage45_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage45_subdone() {
    ap_block_pp0_stage45_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage46() {
    ap_block_pp0_stage46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage46_11001() {
    ap_block_pp0_stage46_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage46_subdone() {
    ap_block_pp0_stage46_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage47() {
    ap_block_pp0_stage47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage47_11001() {
    ap_block_pp0_stage47_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage47_subdone() {
    ap_block_pp0_stage47_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage48() {
    ap_block_pp0_stage48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage48_11001() {
    ap_block_pp0_stage48_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage48_subdone() {
    ap_block_pp0_stage48_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage49() {
    ap_block_pp0_stage49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage49_11001() {
    ap_block_pp0_stage49_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage49_subdone() {
    ap_block_pp0_stage49_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage5() {
    ap_block_pp0_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage50() {
    ap_block_pp0_stage50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage50_11001() {
    ap_block_pp0_stage50_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage50_subdone() {
    ap_block_pp0_stage50_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage51() {
    ap_block_pp0_stage51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage51_11001() {
    ap_block_pp0_stage51_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage51_subdone() {
    ap_block_pp0_stage51_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage52() {
    ap_block_pp0_stage52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage52_11001() {
    ap_block_pp0_stage52_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage52_subdone() {
    ap_block_pp0_stage52_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage53() {
    ap_block_pp0_stage53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage53_11001() {
    ap_block_pp0_stage53_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage53_subdone() {
    ap_block_pp0_stage53_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage54() {
    ap_block_pp0_stage54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage54_11001() {
    ap_block_pp0_stage54_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage54_subdone() {
    ap_block_pp0_stage54_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage55() {
    ap_block_pp0_stage55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage55_11001() {
    ap_block_pp0_stage55_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage55_subdone() {
    ap_block_pp0_stage55_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage56() {
    ap_block_pp0_stage56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage56_11001() {
    ap_block_pp0_stage56_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage56_subdone() {
    ap_block_pp0_stage56_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage57() {
    ap_block_pp0_stage57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage57_11001() {
    ap_block_pp0_stage57_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage57_subdone() {
    ap_block_pp0_stage57_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage58() {
    ap_block_pp0_stage58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage58_11001() {
    ap_block_pp0_stage58_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage58_subdone() {
    ap_block_pp0_stage58_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage59() {
    ap_block_pp0_stage59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage59_11001() {
    ap_block_pp0_stage59_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage59_subdone() {
    ap_block_pp0_stage59_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage5_11001() {
    ap_block_pp0_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage6() {
    ap_block_pp0_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage60() {
    ap_block_pp0_stage60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage60_11001() {
    ap_block_pp0_stage60_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage60_subdone() {
    ap_block_pp0_stage60_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage61() {
    ap_block_pp0_stage61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage61_11001() {
    ap_block_pp0_stage61_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage61_subdone() {
    ap_block_pp0_stage61_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage62() {
    ap_block_pp0_stage62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage62_11001() {
    ap_block_pp0_stage62_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage62_subdone() {
    ap_block_pp0_stage62_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage63() {
    ap_block_pp0_stage63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage63_11001() {
    ap_block_pp0_stage63_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage63_subdone() {
    ap_block_pp0_stage63_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage64() {
    ap_block_pp0_stage64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage64_11001() {
    ap_block_pp0_stage64_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage64_subdone() {
    ap_block_pp0_stage64_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage65() {
    ap_block_pp0_stage65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage65_11001() {
    ap_block_pp0_stage65_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage65_subdone() {
    ap_block_pp0_stage65_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage66() {
    ap_block_pp0_stage66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage66_11001() {
    ap_block_pp0_stage66_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage66_subdone() {
    ap_block_pp0_stage66_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage67() {
    ap_block_pp0_stage67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage67_11001() {
    ap_block_pp0_stage67_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage67_subdone() {
    ap_block_pp0_stage67_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage68() {
    ap_block_pp0_stage68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage68_11001() {
    ap_block_pp0_stage68_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage68_subdone() {
    ap_block_pp0_stage68_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage69() {
    ap_block_pp0_stage69 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage69_11001() {
    ap_block_pp0_stage69_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage69_subdone() {
    ap_block_pp0_stage69_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage6_11001() {
    ap_block_pp0_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage7() {
    ap_block_pp0_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage70() {
    ap_block_pp0_stage70 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage70_11001() {
    ap_block_pp0_stage70_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage70_subdone() {
    ap_block_pp0_stage70_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage71() {
    ap_block_pp0_stage71 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage71_11001() {
    ap_block_pp0_stage71_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage71_subdone() {
    ap_block_pp0_stage71_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage72() {
    ap_block_pp0_stage72 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage72_11001() {
    ap_block_pp0_stage72_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage72_subdone() {
    ap_block_pp0_stage72_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage73() {
    ap_block_pp0_stage73 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage73_11001() {
    ap_block_pp0_stage73_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage73_subdone() {
    ap_block_pp0_stage73_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage74() {
    ap_block_pp0_stage74 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage74_11001() {
    ap_block_pp0_stage74_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage74_subdone() {
    ap_block_pp0_stage74_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage75() {
    ap_block_pp0_stage75 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage75_11001() {
    ap_block_pp0_stage75_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage75_subdone() {
    ap_block_pp0_stage75_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage76() {
    ap_block_pp0_stage76 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage76_11001() {
    ap_block_pp0_stage76_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage76_subdone() {
    ap_block_pp0_stage76_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage77() {
    ap_block_pp0_stage77 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage77_11001() {
    ap_block_pp0_stage77_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage77_subdone() {
    ap_block_pp0_stage77_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage7_11001() {
    ap_block_pp0_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage8() {
    ap_block_pp0_stage8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage8_11001() {
    ap_block_pp0_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage8_subdone() {
    ap_block_pp0_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage9() {
    ap_block_pp0_stage9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage9_11001() {
    ap_block_pp0_stage9_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_pp0_stage9_subdone() {
    ap_block_pp0_stage9_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state10_pp0_stage8_iter0() {
    ap_block_state10_pp0_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state11_pp0_stage9_iter0() {
    ap_block_state11_pp0_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state12_pp0_stage10_iter0() {
    ap_block_state12_pp0_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state13_pp0_stage11_iter0() {
    ap_block_state13_pp0_stage11_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state14_pp0_stage12_iter0() {
    ap_block_state14_pp0_stage12_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state15_pp0_stage13_iter0() {
    ap_block_state15_pp0_stage13_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state16_pp0_stage14_iter0() {
    ap_block_state16_pp0_stage14_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state17_pp0_stage15_iter0() {
    ap_block_state17_pp0_stage15_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state18_pp0_stage16_iter0() {
    ap_block_state18_pp0_stage16_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state19_pp0_stage17_iter0() {
    ap_block_state19_pp0_stage17_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state20_pp0_stage18_iter0() {
    ap_block_state20_pp0_stage18_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state21_pp0_stage19_iter0() {
    ap_block_state21_pp0_stage19_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state22_pp0_stage20_iter0() {
    ap_block_state22_pp0_stage20_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state23_pp0_stage21_iter0() {
    ap_block_state23_pp0_stage21_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state24_pp0_stage22_iter0() {
    ap_block_state24_pp0_stage22_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state25_pp0_stage23_iter0() {
    ap_block_state25_pp0_stage23_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state26_pp0_stage24_iter0() {
    ap_block_state26_pp0_stage24_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state27_pp0_stage25_iter0() {
    ap_block_state27_pp0_stage25_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state28_pp0_stage26_iter0() {
    ap_block_state28_pp0_stage26_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state29_pp0_stage27_iter0() {
    ap_block_state29_pp0_stage27_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state30_pp0_stage28_iter0() {
    ap_block_state30_pp0_stage28_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state31_pp0_stage29_iter0() {
    ap_block_state31_pp0_stage29_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state32_pp0_stage30_iter0() {
    ap_block_state32_pp0_stage30_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state33_pp0_stage31_iter0() {
    ap_block_state33_pp0_stage31_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state34_pp0_stage32_iter0() {
    ap_block_state34_pp0_stage32_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state35_pp0_stage33_iter0() {
    ap_block_state35_pp0_stage33_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state36_pp0_stage34_iter0() {
    ap_block_state36_pp0_stage34_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state37_pp0_stage35_iter0() {
    ap_block_state37_pp0_stage35_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state38_pp0_stage36_iter0() {
    ap_block_state38_pp0_stage36_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state39_pp0_stage37_iter0() {
    ap_block_state39_pp0_stage37_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state40_pp0_stage38_iter0() {
    ap_block_state40_pp0_stage38_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state41_pp0_stage39_iter0() {
    ap_block_state41_pp0_stage39_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state42_pp0_stage40_iter0() {
    ap_block_state42_pp0_stage40_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state43_pp0_stage41_iter0() {
    ap_block_state43_pp0_stage41_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state44_pp0_stage42_iter0() {
    ap_block_state44_pp0_stage42_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state45_pp0_stage43_iter0() {
    ap_block_state45_pp0_stage43_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state46_pp0_stage44_iter0() {
    ap_block_state46_pp0_stage44_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state47_pp0_stage45_iter0() {
    ap_block_state47_pp0_stage45_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state48_pp0_stage46_iter0() {
    ap_block_state48_pp0_stage46_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state49_pp0_stage47_iter0() {
    ap_block_state49_pp0_stage47_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state4_pp0_stage2_iter0() {
    ap_block_state4_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state50_pp0_stage48_iter0() {
    ap_block_state50_pp0_stage48_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state51_pp0_stage49_iter0() {
    ap_block_state51_pp0_stage49_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state52_pp0_stage50_iter0() {
    ap_block_state52_pp0_stage50_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state53_pp0_stage51_iter0() {
    ap_block_state53_pp0_stage51_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state54_pp0_stage52_iter0() {
    ap_block_state54_pp0_stage52_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state55_pp0_stage53_iter0() {
    ap_block_state55_pp0_stage53_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state56_pp0_stage54_iter0() {
    ap_block_state56_pp0_stage54_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state57_pp0_stage55_iter0() {
    ap_block_state57_pp0_stage55_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state58_pp0_stage56_iter0() {
    ap_block_state58_pp0_stage56_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state59_pp0_stage57_iter0() {
    ap_block_state59_pp0_stage57_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state5_pp0_stage3_iter0() {
    ap_block_state5_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state60_pp0_stage58_iter0() {
    ap_block_state60_pp0_stage58_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state61_pp0_stage59_iter0() {
    ap_block_state61_pp0_stage59_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state62_pp0_stage60_iter0() {
    ap_block_state62_pp0_stage60_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state63_pp0_stage61_iter0() {
    ap_block_state63_pp0_stage61_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state64_pp0_stage62_iter0() {
    ap_block_state64_pp0_stage62_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state65_pp0_stage63_iter0() {
    ap_block_state65_pp0_stage63_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state66_pp0_stage64_iter0() {
    ap_block_state66_pp0_stage64_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state67_pp0_stage65_iter0() {
    ap_block_state67_pp0_stage65_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state68_pp0_stage66_iter0() {
    ap_block_state68_pp0_stage66_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state69_pp0_stage67_iter0() {
    ap_block_state69_pp0_stage67_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state6_pp0_stage4_iter0() {
    ap_block_state6_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state70_pp0_stage68_iter0() {
    ap_block_state70_pp0_stage68_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state71_pp0_stage69_iter0() {
    ap_block_state71_pp0_stage69_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state72_pp0_stage70_iter0() {
    ap_block_state72_pp0_stage70_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state73_pp0_stage71_iter0() {
    ap_block_state73_pp0_stage71_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state74_pp0_stage72_iter0() {
    ap_block_state74_pp0_stage72_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state75_pp0_stage73_iter0() {
    ap_block_state75_pp0_stage73_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state76_pp0_stage74_iter0() {
    ap_block_state76_pp0_stage74_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state77_pp0_stage75_iter0() {
    ap_block_state77_pp0_stage75_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state78_pp0_stage76_iter0() {
    ap_block_state78_pp0_stage76_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state79_pp0_stage77_iter0() {
    ap_block_state79_pp0_stage77_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state7_pp0_stage5_iter0() {
    ap_block_state7_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state80_pp0_stage0_iter1() {
    ap_block_state80_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state81_pp0_stage1_iter1() {
    ap_block_state81_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state82_pp0_stage2_iter1() {
    ap_block_state82_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state8_pp0_stage6_iter0() {
    ap_block_state8_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_block_state9_pp0_stage7_iter0() {
    ap_block_state9_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gemvm_quant::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond5_fu_3221_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void gemvm_quant::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void gemvm_quant::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void gemvm_quant::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void gemvm_quant::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void gemvm_quant::thread_ap_phi_mux_phi_mul_phi_fu_3209_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(exitcond5_reg_9895.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_phi_mul_phi_fu_3209_p4 = next_mul_reg_11699.read();
    } else {
        ap_phi_mux_phi_mul_phi_fu_3209_p4 = phi_mul_reg_3205.read();
    }
}

void gemvm_quant::thread_ap_phi_mux_r_phi_fu_3197_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(exitcond5_reg_9895.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_r_phi_fu_3197_p4 = r_1_reg_9899.read();
    } else {
        ap_phi_mux_r_phi_fu_3197_p4 = r_reg_3193.read();
    }
}

void gemvm_quant::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void gemvm_quant::thread_b_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage77.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage77.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_30);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage76.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage76.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_29);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage75.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage75.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_27);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage74.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage74.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage73.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage73.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage72.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage72.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_0);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage71.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage71.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_92);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage70.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage70.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_8D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage69.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage69.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_88);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage68.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage68.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_83);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage67.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage67.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_81);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage66.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage66.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_7F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage65.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage65.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_7A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage64.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage64.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_78);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage63.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage63.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_76);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage62.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage62.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_71);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage61.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage61.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_6F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage60.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage60.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_6D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage59.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage59.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_6B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage58.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage58.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_69);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage57.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage57.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_67);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage56.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage56.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_65);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage55.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage55.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_63);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage54.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage54.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_61);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage53.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage53.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_5C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage52.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage52.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_5A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage51.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage51.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_58);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage50.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage50.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_56);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage49.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage49.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_54);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage48.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage48.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_52);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage47.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage47.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_50);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage46.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage46.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_4E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage45.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage45.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_49);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage44.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage44.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_47);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage43.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage43.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_45);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage42.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage42.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_43);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage41.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage41.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_41);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage40.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage40.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_3F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage39.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage39.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_3D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage38.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage38.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_3B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage37.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage37.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_39);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage36.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage36.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_37);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage35.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage35.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_35);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage34.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage34.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_33);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage33.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage33.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_2F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage32.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_2D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_2B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_22);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_20);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_1E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_1C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_1A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_18);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_16);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_14);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_12);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_10);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_9A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_98);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_96);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_94);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_90);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_8C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_8A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_86);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_7D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_7B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_73);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_60);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_5E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_4C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_26);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            b_V_address0 =  (sc_lv<8>) (ap_const_lv64_24);
        } else {
            b_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        b_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void gemvm_quant::thread_b_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage77.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage77.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_31);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage76.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage76.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_2A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage75.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage75.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_28);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage74.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage74.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage73.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage73.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage72.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage72.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_1);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage71.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage71.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_93);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage70.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage70.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_8E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage69.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage69.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_89);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage68.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage68.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_84);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage67.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage67.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_82);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage66.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage66.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_80);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage65.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage65.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_7E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage64.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage64.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_79);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage63.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage63.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_77);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage62.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage62.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_75);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage61.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage61.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_70);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage60.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage60.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_6E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage59.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage59.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_6C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage58.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage58.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_6A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage57.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage57.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_68);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage56.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage56.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_66);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage55.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage55.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_64);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage54.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage54.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_62);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage53.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage53.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_5D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage52.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage52.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_5B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage51.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage51.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_59);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage50.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage50.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_57);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage49.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage49.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_55);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage48.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage48.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_53);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage47.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage47.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_51);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage46.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage46.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_4F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage45.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage45.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_4A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage44.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage44.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_48);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage43.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage43.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_46);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage42.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage42.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_44);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage41.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage41.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_42);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage40.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage40.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_40);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage39.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage39.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_3E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage38.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage38.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_3C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage37.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage37.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_3A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage36.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage36.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_38);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage35.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage35.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_36);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage34.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage34.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_34);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage33.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage33.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_32);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage32.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_2E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_2C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_23);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_21);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_1F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_1D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_1B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_19);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_17);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_15);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_13);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_11);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_9B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_99);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_97);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_95);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_91);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_8F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_8B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_87);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_85);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_7C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_74);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_72);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_5F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_4D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_4B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            b_V_address1 =  (sc_lv<8>) (ap_const_lv64_25);
        } else {
            b_V_address1 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        b_V_address1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void gemvm_quant::thread_b_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage77.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage77_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage48.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage48_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage49.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage49_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage50.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage50_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage51.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage51_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage52.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage52_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage53.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage53_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage54.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage54_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage55.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage55_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage56.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage56_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage57.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage57_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage58.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage58_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage59.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage59_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage60.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage60_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage61.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage61_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage62.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage62_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage63.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage63_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage64.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage64_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage65.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage65_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage66.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage66_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage67.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage67_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage68.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage68_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage69.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage69_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage70.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage70_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage71.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage71_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage72.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage72_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage73.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage73_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage74.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage74_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage75.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage75_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage76.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage76_11001.read(), ap_const_boolean_0)))) {
        b_V_ce0 = ap_const_logic_1;
    } else {
        b_V_ce0 = ap_const_logic_0;
    }
}

void gemvm_quant::thread_b_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage77.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage77_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage48.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage48_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage49.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage49_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage50.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage50_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage51.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage51_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage52.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage52_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage53.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage53_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage54.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage54_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage55.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage55_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage56.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage56_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage57.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage57_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage58.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage58_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage59.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage59_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage60.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage60_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage61.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage61_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage62.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage62_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage63.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage63_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage64.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage64_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage65.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage65_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage66.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage66_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage67.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage67_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage68.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage68_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage69.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage69_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage70.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage70_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage71.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage71_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage72.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage72_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage73.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage73_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage74.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage74_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage75.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage75_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage76.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage76_11001.read(), ap_const_boolean_0)))) {
        b_V_ce1 = ap_const_logic_1;
    } else {
        b_V_ce1 = ap_const_logic_0;
    }
}

void gemvm_quant::thread_exitcond5_fu_3221_p2() {
    exitcond5_fu_3221_p2 = (!ap_phi_mux_r_phi_fu_3197_p4.read().is_01() || !ap_const_lv8_80.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_r_phi_fu_3197_p4.read() == ap_const_lv8_80);
}

void gemvm_quant::thread_next_mul_fu_7999_p2() {
    next_mul_fu_7999_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_9C.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_9C));
}

void gemvm_quant::thread_phi_mul_cast_fu_3217_p1() {
    phi_mul_cast_fu_3217_p1 = esl_zext<64,15>(ap_phi_mux_phi_mul_phi_fu_3209_p4.read());
}

void gemvm_quant::thread_r_1_fu_3227_p2() {
    r_1_fu_3227_p2 = (!ap_phi_mux_r_phi_fu_3197_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ap_phi_mux_r_phi_fu_3197_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void gemvm_quant::thread_res_V_address0() {
    res_V_address0 =  (sc_lv<7>) (tmp_fu_8149_p1.read());
}

void gemvm_quant::thread_res_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        res_V_ce0 = ap_const_logic_1;
    } else {
        res_V_ce0 = ap_const_logic_0;
    }
}

void gemvm_quant::thread_res_V_d0() {
    res_V_d0 = acc_V_s_fu_8158_p2.read().range(26, 11);
}

void gemvm_quant::thread_res_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond5_reg_9895_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        res_V_we0 = ap_const_logic_1;
    } else {
        res_V_we0 = ap_const_logic_0;
    }
}

void gemvm_quant::thread_tmp100_fu_6802_p2() {
    tmp100_fu_6802_p2 = (!tmp102_fu_6796_p2.read().is_01() || !tmp101_fu_6784_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp102_fu_6796_p2.read()) + sc_biguint<27>(tmp101_fu_6784_p2.read()));
}

void gemvm_quant::thread_tmp101_fu_6784_p2() {
    tmp101_fu_6784_p2 = (!tmp_215_96_fu_6733_p3.read().is_01() || !tmp_215_97_fu_6740_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_96_fu_6733_p3.read()) + sc_biguint<27>(tmp_215_97_fu_6740_p3.read()));
}

void gemvm_quant::thread_tmp102_fu_6796_p2() {
    tmp102_fu_6796_p2 = (!tmp103_fu_6790_p2.read().is_01() || !tmp_215_98_fu_6747_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp103_fu_6790_p2.read()) + sc_biguint<27>(tmp_215_98_fu_6747_p3.read()));
}

void gemvm_quant::thread_tmp103_fu_6790_p2() {
    tmp103_fu_6790_p2 = (!tmp_215_99_fu_6754_p3.read().is_01() || !tmp_215_100_fu_6761_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_99_fu_6754_p3.read()) + sc_biguint<27>(tmp_215_100_fu_6761_p3.read()));
}

void gemvm_quant::thread_tmp104_fu_6937_p2() {
    tmp104_fu_6937_p2 = (!tmp106_fu_6931_p2.read().is_01() || !tmp105_fu_6919_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp106_fu_6931_p2.read()) + sc_biguint<27>(tmp105_fu_6919_p2.read()));
}

void gemvm_quant::thread_tmp105_fu_6919_p2() {
    tmp105_fu_6919_p2 = (!tmp_215_101_fu_6868_p3.read().is_01() || !tmp_215_102_fu_6875_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_101_fu_6868_p3.read()) + sc_biguint<27>(tmp_215_102_fu_6875_p3.read()));
}

void gemvm_quant::thread_tmp106_fu_6931_p2() {
    tmp106_fu_6931_p2 = (!tmp107_fu_6925_p2.read().is_01() || !tmp_215_103_fu_6882_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp107_fu_6925_p2.read()) + sc_biguint<27>(tmp_215_103_fu_6882_p3.read()));
}

void gemvm_quant::thread_tmp107_fu_6925_p2() {
    tmp107_fu_6925_p2 = (!tmp_215_104_fu_6889_p3.read().is_01() || !tmp_215_105_fu_6896_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_104_fu_6889_p3.read()) + sc_biguint<27>(tmp_215_105_fu_6896_p3.read()));
}

void gemvm_quant::thread_tmp108_fu_7177_p2() {
    tmp108_fu_7177_p2 = (!tmp113_fu_7172_p2.read().is_01() || !tmp109_fu_7162_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp113_fu_7172_p2.read()) + sc_biguint<27>(tmp109_fu_7162_p2.read()));
}

void gemvm_quant::thread_tmp109_fu_7162_p2() {
    tmp109_fu_7162_p2 = (!tmp111_reg_11359.read().is_01() || !tmp110_reg_11314.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp111_reg_11359.read()) + sc_biguint<27>(tmp110_reg_11314.read()));
}

void gemvm_quant::thread_tmp10_fu_4418_p2() {
    tmp10_fu_4418_p2 = (!tmp11_fu_4412_p2.read().is_01() || !tmp_215_6_fu_4369_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp11_fu_4412_p2.read()) + sc_biguint<27>(tmp_215_6_fu_4369_p3.read()));
}

void gemvm_quant::thread_tmp110_fu_6995_p2() {
    tmp110_fu_6995_p2 = (!tmp_215_106_fu_6965_p3.read().is_01() || !tmp_215_107_fu_6972_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_106_fu_6965_p3.read()) + sc_biguint<27>(tmp_215_107_fu_6972_p3.read()));
}

void gemvm_quant::thread_tmp111_fu_7104_p2() {
    tmp111_fu_7104_p2 = (!tmp112_fu_7098_p2.read().is_01() || !tmp_215_108_fu_7061_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp112_fu_7098_p2.read()) + sc_biguint<27>(tmp_215_108_fu_7061_p3.read()));
}

void gemvm_quant::thread_tmp112_fu_7098_p2() {
    tmp112_fu_7098_p2 = (!tmp_215_109_fu_7068_p3.read().is_01() || !tmp_215_110_fu_7075_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_109_fu_7068_p3.read()) + sc_biguint<27>(tmp_215_110_fu_7075_p3.read()));
}

void gemvm_quant::thread_tmp113_fu_7172_p2() {
    tmp113_fu_7172_p2 = (!tmp115_reg_10069.read().is_01() || !tmp114_fu_7166_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp115_reg_10069.read()) + sc_biguint<27>(tmp114_fu_7166_p2.read()));
}

void gemvm_quant::thread_tmp114_fu_7166_p2() {
    tmp114_fu_7166_p2 = (!tmp_215_111_fu_7132_p3.read().is_01() || !tmp_215_112_fu_7139_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_111_fu_7132_p3.read()) + sc_biguint<27>(tmp_215_112_fu_7139_p3.read()));
}

void gemvm_quant::thread_tmp115_fu_3647_p2() {
    tmp115_fu_3647_p2 = (!tmp116_fu_3641_p2.read().is_01() || !tmp_215_113_fu_3604_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp116_fu_3641_p2.read()) + sc_biguint<27>(tmp_215_113_fu_3604_p3.read()));
}

void gemvm_quant::thread_tmp116_fu_3641_p2() {
    tmp116_fu_3641_p2 = (!tmp_215_114_fu_3611_p3.read().is_01() || !tmp_215_115_fu_3618_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_114_fu_3611_p3.read()) + sc_biguint<27>(tmp_215_115_fu_3618_p3.read()));
}

void gemvm_quant::thread_tmp117_fu_7842_p2() {
    tmp117_fu_7842_p2 = (!tmp136_reg_11614.read().is_01() || !tmp118_fu_7838_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp136_reg_11614.read()) + sc_biguint<27>(tmp118_fu_7838_p2.read()));
}

void gemvm_quant::thread_tmp118_fu_7838_p2() {
    tmp118_fu_7838_p2 = (!tmp127_reg_11539.read().is_01() || !tmp119_reg_11464.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp127_reg_11539.read()) + sc_biguint<27>(tmp119_reg_11464.read()));
}

void gemvm_quant::thread_tmp119_fu_7375_p2() {
    tmp119_fu_7375_p2 = (!tmp123_fu_7370_p2.read().is_01() || !tmp120_fu_7360_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp123_fu_7370_p2.read()) + sc_biguint<27>(tmp120_fu_7360_p2.read()));
}

void gemvm_quant::thread_tmp11_fu_4412_p2() {
    tmp11_fu_4412_p2 = (!tmp_215_7_fu_4376_p3.read().is_01() || !tmp_215_8_fu_4383_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_7_fu_4376_p3.read()) + sc_biguint<27>(tmp_215_8_fu_4383_p3.read()));
}

void gemvm_quant::thread_tmp120_fu_7360_p2() {
    tmp120_fu_7360_p2 = (!tmp122_reg_11439.read().is_01() || !tmp121_reg_11414.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp122_reg_11439.read()) + sc_biguint<27>(tmp121_reg_11414.read()));
}

void gemvm_quant::thread_tmp121_fu_7244_p2() {
    tmp121_fu_7244_p2 = (!tmp_215_116_fu_7205_p3.read().is_01() || !tmp_215_117_fu_7212_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_116_fu_7205_p3.read()) + sc_biguint<27>(tmp_215_117_fu_7212_p3.read()));
}

void gemvm_quant::thread_tmp122_fu_7302_p2() {
    tmp122_fu_7302_p2 = (!tmp_215_118_fu_7272_p3.read().is_01() || !tmp_215_119_fu_7279_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_118_fu_7272_p3.read()) + sc_biguint<27>(tmp_215_119_fu_7279_p3.read()));
}

void gemvm_quant::thread_tmp123_fu_7370_p2() {
    tmp123_fu_7370_p2 = (!tmp125_reg_10114.read().is_01() || !tmp124_fu_7364_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp125_reg_10114.read()) + sc_biguint<27>(tmp124_fu_7364_p2.read()));
}

void gemvm_quant::thread_tmp124_fu_7364_p2() {
    tmp124_fu_7364_p2 = (!tmp_215_120_fu_7330_p3.read().is_01() || !tmp_215_121_fu_7337_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_120_fu_7330_p3.read()) + sc_biguint<27>(tmp_215_121_fu_7337_p3.read()));
}

void gemvm_quant::thread_tmp125_fu_3756_p2() {
    tmp125_fu_3756_p2 = (!tmp126_fu_3750_p2.read().is_01() || !tmp_215_122_fu_3713_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp126_fu_3750_p2.read()) + sc_biguint<27>(tmp_215_122_fu_3713_p3.read()));
}

void gemvm_quant::thread_tmp126_fu_3750_p2() {
    tmp126_fu_3750_p2 = (!tmp_215_123_fu_3720_p3.read().is_01() || !tmp_215_124_fu_3727_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_123_fu_3720_p3.read()) + sc_biguint<27>(tmp_215_124_fu_3727_p3.read()));
}

void gemvm_quant::thread_tmp127_fu_7577_p2() {
    tmp127_fu_7577_p2 = (!tmp132_fu_7572_p2.read().is_01() || !tmp128_fu_7562_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp132_fu_7572_p2.read()) + sc_biguint<27>(tmp128_fu_7562_p2.read()));
}

void gemvm_quant::thread_tmp128_fu_7562_p2() {
    tmp128_fu_7562_p2 = (!tmp130_reg_11514.read().is_01() || !tmp129_reg_11489.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp130_reg_11514.read()) + sc_biguint<27>(tmp129_reg_11489.read()));
}

void gemvm_quant::thread_tmp129_fu_7433_p2() {
    tmp129_fu_7433_p2 = (!tmp_215_125_fu_7403_p3.read().is_01() || !tmp_215_126_fu_7410_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_125_fu_7403_p3.read()) + sc_biguint<27>(tmp_215_126_fu_7410_p3.read()));
}

void gemvm_quant::thread_tmp12_fu_7984_p2() {
    tmp12_fu_7984_p2 = (!tmp17_reg_10454.read().is_01() || !tmp13_fu_7979_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp17_reg_10454.read()) + sc_biguint<27>(tmp13_fu_7979_p2.read()));
}

void gemvm_quant::thread_tmp130_fu_7504_p2() {
    tmp130_fu_7504_p2 = (!tmp131_fu_7498_p2.read().is_01() || !tmp_215_127_fu_7461_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp131_fu_7498_p2.read()) + sc_biguint<27>(tmp_215_127_fu_7461_p3.read()));
}

void gemvm_quant::thread_tmp131_fu_7498_p2() {
    tmp131_fu_7498_p2 = (!tmp_215_128_fu_7468_p3.read().is_01() || !tmp_215_129_fu_7475_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_128_fu_7468_p3.read()) + sc_biguint<27>(tmp_215_129_fu_7475_p3.read()));
}

void gemvm_quant::thread_tmp132_fu_7572_p2() {
    tmp132_fu_7572_p2 = (!tmp134_reg_10139.read().is_01() || !tmp133_fu_7566_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp134_reg_10139.read()) + sc_biguint<27>(tmp133_fu_7566_p2.read()));
}

void gemvm_quant::thread_tmp133_fu_7566_p2() {
    tmp133_fu_7566_p2 = (!tmp_215_130_fu_7532_p3.read().is_01() || !tmp_215_131_fu_7539_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_130_fu_7532_p3.read()) + sc_biguint<27>(tmp_215_131_fu_7539_p3.read()));
}

void gemvm_quant::thread_tmp134_fu_3827_p2() {
    tmp134_fu_3827_p2 = (!tmp135_fu_3821_p2.read().is_01() || !tmp_215_132_fu_3784_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp135_fu_3821_p2.read()) + sc_biguint<27>(tmp_215_132_fu_3784_p3.read()));
}

void gemvm_quant::thread_tmp135_fu_3821_p2() {
    tmp135_fu_3821_p2 = (!tmp_215_133_fu_3791_p3.read().is_01() || !tmp_215_134_fu_3798_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_133_fu_3791_p3.read()) + sc_biguint<27>(tmp_215_134_fu_3798_p3.read()));
}

void gemvm_quant::thread_tmp136_fu_7770_p2() {
    tmp136_fu_7770_p2 = (!tmp146_fu_7765_p2.read().is_01() || !tmp137_fu_7750_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp146_fu_7765_p2.read()) + sc_biguint<27>(tmp137_fu_7750_p2.read()));
}

void gemvm_quant::thread_tmp137_fu_7750_p2() {
    tmp137_fu_7750_p2 = (!tmp142_reg_11589.read().is_01() || !tmp138_reg_11564.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp142_reg_11589.read()) + sc_biguint<27>(tmp138_reg_11564.read()));
}

void gemvm_quant::thread_tmp138_fu_7641_p2() {
    tmp138_fu_7641_p2 = (!tmp140_reg_10184.read().is_01() || !tmp139_fu_7635_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp140_reg_10184.read()) + sc_biguint<27>(tmp139_fu_7635_p2.read()));
}

void gemvm_quant::thread_tmp139_fu_7635_p2() {
    tmp139_fu_7635_p2 = (!tmp_215_135_fu_7605_p3.read().is_01() || !tmp_215_136_fu_7612_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_135_fu_7605_p3.read()) + sc_biguint<27>(tmp_215_136_fu_7612_p3.read()));
}

void gemvm_quant::thread_tmp13_fu_7979_p2() {
    tmp13_fu_7979_p2 = (!tmp15_reg_10389.read().is_01() || !tmp14_fu_7973_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp15_reg_10389.read()) + sc_biguint<27>(tmp14_fu_7973_p2.read()));
}

void gemvm_quant::thread_tmp140_fu_3936_p2() {
    tmp140_fu_3936_p2 = (!tmp141_fu_3930_p2.read().is_01() || !tmp_215_137_fu_3893_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp141_fu_3930_p2.read()) + sc_biguint<27>(tmp_215_137_fu_3893_p3.read()));
}

void gemvm_quant::thread_tmp141_fu_3930_p2() {
    tmp141_fu_3930_p2 = (!tmp_215_138_fu_3900_p3.read().is_01() || !tmp_215_139_fu_3907_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_138_fu_3900_p3.read()) + sc_biguint<27>(tmp_215_139_fu_3907_p3.read()));
}

void gemvm_quant::thread_tmp142_fu_7693_p2() {
    tmp142_fu_7693_p2 = (!tmp144_reg_10209.read().is_01() || !tmp143_fu_7687_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp144_reg_10209.read()) + sc_biguint<27>(tmp143_fu_7687_p2.read()));
}

void gemvm_quant::thread_tmp143_fu_7687_p2() {
    tmp143_fu_7687_p2 = (!tmp_215_140_fu_7657_p3.read().is_01() || !tmp_215_141_fu_7664_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_140_fu_7657_p3.read()) + sc_biguint<27>(tmp_215_141_fu_7664_p3.read()));
}

void gemvm_quant::thread_tmp144_fu_4007_p2() {
    tmp144_fu_4007_p2 = (!tmp145_fu_4001_p2.read().is_01() || !tmp_215_142_fu_3964_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp145_fu_4001_p2.read()) + sc_biguint<27>(tmp_215_142_fu_3964_p3.read()));
}

void gemvm_quant::thread_tmp145_fu_4001_p2() {
    tmp145_fu_4001_p2 = (!tmp_215_143_fu_3971_p3.read().is_01() || !tmp_215_144_fu_3978_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_143_fu_3971_p3.read()) + sc_biguint<27>(tmp_215_144_fu_3978_p3.read()));
}

void gemvm_quant::thread_tmp146_fu_7765_p2() {
    tmp146_fu_7765_p2 = (!tmp151_reg_10299.read().is_01() || !tmp147_fu_7760_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp151_reg_10299.read()) + sc_biguint<27>(tmp147_fu_7760_p2.read()));
}

void gemvm_quant::thread_tmp147_fu_7760_p2() {
    tmp147_fu_7760_p2 = (!tmp149_reg_10254.read().is_01() || !tmp148_fu_7754_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp149_reg_10254.read()) + sc_biguint<27>(tmp148_fu_7754_p2.read()));
}

void gemvm_quant::thread_tmp148_fu_7754_p2() {
    tmp148_fu_7754_p2 = (!tmp_215_145_fu_7736_p3.read().is_01() || !tmp_215_146_fu_7743_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_145_fu_7736_p3.read()) + sc_biguint<27>(tmp_215_146_fu_7743_p3.read()));
}

void gemvm_quant::thread_tmp149_fu_4116_p2() {
    tmp149_fu_4116_p2 = (!tmp150_fu_4110_p2.read().is_01() || !tmp_215_147_fu_4073_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp150_fu_4110_p2.read()) + sc_biguint<27>(tmp_215_147_fu_4073_p3.read()));
}

void gemvm_quant::thread_tmp14_fu_7973_p2() {
    tmp14_fu_7973_p2 = (!tmp_215_9_fu_7943_p3.read().is_01() || !tmp_215_s_fu_7950_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_9_fu_7943_p3.read()) + sc_biguint<27>(tmp_215_s_fu_7950_p3.read()));
}

void gemvm_quant::thread_tmp150_fu_4110_p2() {
    tmp150_fu_4110_p2 = (!tmp_215_148_fu_4080_p3.read().is_01() || !tmp_215_149_fu_4087_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_148_fu_4080_p3.read()) + sc_biguint<27>(tmp_215_149_fu_4087_p3.read()));
}

void gemvm_quant::thread_tmp151_fu_4251_p2() {
    tmp151_fu_4251_p2 = (!tmp153_fu_4245_p2.read().is_01() || !tmp152_fu_4233_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp153_fu_4245_p2.read()) + sc_biguint<27>(tmp152_fu_4233_p2.read()));
}

void gemvm_quant::thread_tmp152_fu_4233_p2() {
    tmp152_fu_4233_p2 = (!tmp_215_150_fu_4198_p3.read().is_01() || !tmp_215_151_fu_4205_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_150_fu_4198_p3.read()) + sc_biguint<27>(tmp_215_151_fu_4205_p3.read()));
}

void gemvm_quant::thread_tmp153_fu_4245_p2() {
    tmp153_fu_4245_p2 = (!tmp154_fu_4239_p2.read().is_01() || !tmp_215_152_fu_4212_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp154_fu_4239_p2.read()) + sc_biguint<27>(tmp_215_152_fu_4212_p3.read()));
}

void gemvm_quant::thread_tmp154_fu_4239_p2() {
    tmp154_fu_4239_p2 = (!tmp_215_153_fu_4219_p3.read().is_01() || !tmp_215_154_fu_4226_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_153_fu_4219_p3.read()) + sc_biguint<27>(tmp_215_154_fu_4226_p3.read()));
}

void gemvm_quant::thread_tmp15_fu_4495_p2() {
    tmp15_fu_4495_p2 = (!tmp16_fu_4489_p2.read().is_01() || !tmp_215_10_fu_4452_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp16_fu_4489_p2.read()) + sc_biguint<27>(tmp_215_10_fu_4452_p3.read()));
}

void gemvm_quant::thread_tmp16_fu_4489_p2() {
    tmp16_fu_4489_p2 = (!tmp_215_11_fu_4459_p3.read().is_01() || !tmp_215_12_fu_4466_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_11_fu_4459_p3.read()) + sc_biguint<27>(tmp_215_12_fu_4466_p3.read()));
}

void gemvm_quant::thread_tmp17_fu_4668_p2() {
    tmp17_fu_4668_p2 = (!tmp19_fu_4662_p2.read().is_01() || !tmp18_fu_4650_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp19_fu_4662_p2.read()) + sc_biguint<27>(tmp18_fu_4650_p2.read()));
}

void gemvm_quant::thread_tmp18_fu_4650_p2() {
    tmp18_fu_4650_p2 = (!tmp_215_13_fu_4599_p3.read().is_01() || !tmp_215_14_fu_4606_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_13_fu_4599_p3.read()) + sc_biguint<27>(tmp_215_14_fu_4606_p3.read()));
}

void gemvm_quant::thread_tmp19_fu_4662_p2() {
    tmp19_fu_4662_p2 = (!tmp20_fu_4656_p2.read().is_01() || !tmp_215_15_fu_4613_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp20_fu_4656_p2.read()) + sc_biguint<27>(tmp_215_15_fu_4613_p3.read()));
}

void gemvm_quant::thread_tmp1_fu_8154_p2() {
    tmp1_fu_8154_p2 = (!tmp40_reg_11744.read().is_01() || !tmp2_reg_11694.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp40_reg_11744.read()) + sc_biguint<27>(tmp2_reg_11694.read()));
}

void gemvm_quant::thread_tmp20_fu_4656_p2() {
    tmp20_fu_4656_p2 = (!tmp_215_16_fu_4620_p3.read().is_01() || !tmp_215_17_fu_4627_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_16_fu_4620_p3.read()) + sc_biguint<27>(tmp_215_17_fu_4627_p3.read()));
}

void gemvm_quant::thread_tmp21_fu_5226_p2() {
    tmp21_fu_5226_p2 = (!tmp31_reg_10639.read().is_01() || !tmp22_fu_5222_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp31_reg_10639.read()) + sc_biguint<27>(tmp22_fu_5222_p2.read()));
}

void gemvm_quant::thread_tmp22_fu_5222_p2() {
    tmp22_fu_5222_p2 = (!tmp27_reg_10564.read().is_01() || !tmp23_reg_10499.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp27_reg_10564.read()) + sc_biguint<27>(tmp23_reg_10499.read()));
}

void gemvm_quant::thread_tmp23_fu_4803_p2() {
    tmp23_fu_4803_p2 = (!tmp25_fu_4797_p2.read().is_01() || !tmp24_fu_4785_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp25_fu_4797_p2.read()) + sc_biguint<27>(tmp24_fu_4785_p2.read()));
}

void gemvm_quant::thread_tmp24_fu_4785_p2() {
    tmp24_fu_4785_p2 = (!tmp_215_18_fu_4734_p3.read().is_01() || !tmp_215_19_fu_4741_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_18_fu_4734_p3.read()) + sc_biguint<27>(tmp_215_19_fu_4741_p3.read()));
}

void gemvm_quant::thread_tmp25_fu_4797_p2() {
    tmp25_fu_4797_p2 = (!tmp26_fu_4791_p2.read().is_01() || !tmp_215_20_fu_4748_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp26_fu_4791_p2.read()) + sc_biguint<27>(tmp_215_20_fu_4748_p3.read()));
}

void gemvm_quant::thread_tmp26_fu_4791_p2() {
    tmp26_fu_4791_p2 = (!tmp_215_21_fu_4755_p3.read().is_01() || !tmp_215_22_fu_4762_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_21_fu_4755_p3.read()) + sc_biguint<27>(tmp_215_22_fu_4762_p3.read()));
}

void gemvm_quant::thread_tmp27_fu_4976_p2() {
    tmp27_fu_4976_p2 = (!tmp29_fu_4970_p2.read().is_01() || !tmp28_fu_4958_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp29_fu_4970_p2.read()) + sc_biguint<27>(tmp28_fu_4958_p2.read()));
}

void gemvm_quant::thread_tmp28_fu_4958_p2() {
    tmp28_fu_4958_p2 = (!tmp_215_23_fu_4907_p3.read().is_01() || !tmp_215_24_fu_4914_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_23_fu_4907_p3.read()) + sc_biguint<27>(tmp_215_24_fu_4914_p3.read()));
}

void gemvm_quant::thread_tmp29_fu_4970_p2() {
    tmp29_fu_4970_p2 = (!tmp30_fu_4964_p2.read().is_01() || !tmp_215_25_fu_4921_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp30_fu_4964_p2.read()) + sc_biguint<27>(tmp_215_25_fu_4921_p3.read()));
}

void gemvm_quant::thread_tmp2_fu_7994_p2() {
    tmp2_fu_7994_p2 = (!tmp21_reg_10664.read().is_01() || !tmp3_fu_7989_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp21_reg_10664.read()) + sc_biguint<27>(tmp3_fu_7989_p2.read()));
}

void gemvm_quant::thread_tmp30_fu_4964_p2() {
    tmp30_fu_4964_p2 = (!tmp_215_26_fu_4928_p3.read().is_01() || !tmp_215_27_fu_4935_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_26_fu_4928_p3.read()) + sc_biguint<27>(tmp_215_27_fu_4935_p3.read()));
}

void gemvm_quant::thread_tmp31_fu_5178_p2() {
    tmp31_fu_5178_p2 = (!tmp36_fu_5173_p2.read().is_01() || !tmp32_fu_5163_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp36_fu_5173_p2.read()) + sc_biguint<27>(tmp32_fu_5163_p2.read()));
}

void gemvm_quant::thread_tmp32_fu_5163_p2() {
    tmp32_fu_5163_p2 = (!tmp34_reg_10614.read().is_01() || !tmp33_reg_10589.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp34_reg_10614.read()) + sc_biguint<27>(tmp33_reg_10589.read()));
}

void gemvm_quant::thread_tmp33_fu_5034_p2() {
    tmp33_fu_5034_p2 = (!tmp_215_28_fu_5004_p3.read().is_01() || !tmp_215_29_fu_5011_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_28_fu_5004_p3.read()) + sc_biguint<27>(tmp_215_29_fu_5011_p3.read()));
}

void gemvm_quant::thread_tmp34_fu_5105_p2() {
    tmp34_fu_5105_p2 = (!tmp35_fu_5099_p2.read().is_01() || !tmp_215_30_fu_5062_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp35_fu_5099_p2.read()) + sc_biguint<27>(tmp_215_30_fu_5062_p3.read()));
}

void gemvm_quant::thread_tmp35_fu_5099_p2() {
    tmp35_fu_5099_p2 = (!tmp_215_31_fu_5069_p3.read().is_01() || !tmp_215_32_fu_5076_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_31_fu_5069_p3.read()) + sc_biguint<27>(tmp_215_32_fu_5076_p3.read()));
}

void gemvm_quant::thread_tmp36_fu_5173_p2() {
    tmp36_fu_5173_p2 = (!tmp38_reg_9974.read().is_01() || !tmp37_fu_5167_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp38_reg_9974.read()) + sc_biguint<27>(tmp37_fu_5167_p2.read()));
}

void gemvm_quant::thread_tmp37_fu_5167_p2() {
    tmp37_fu_5167_p2 = (!tmp_215_33_fu_5133_p3.read().is_01() || !tmp_215_34_fu_5140_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_33_fu_5133_p3.read()) + sc_biguint<27>(tmp_215_34_fu_5140_p3.read()));
}

void gemvm_quant::thread_tmp38_fu_3396_p2() {
    tmp38_fu_3396_p2 = (!tmp39_fu_3390_p2.read().is_01() || !tmp_215_35_fu_3353_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp39_fu_3390_p2.read()) + sc_biguint<27>(tmp_215_35_fu_3353_p3.read()));
}

void gemvm_quant::thread_tmp39_fu_3390_p2() {
    tmp39_fu_3390_p2 = (!tmp_215_36_fu_3360_p3.read().is_01() || !tmp_215_37_fu_3367_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_36_fu_3360_p3.read()) + sc_biguint<27>(tmp_215_37_fu_3367_p3.read()));
}

void gemvm_quant::thread_tmp3_fu_7989_p2() {
    tmp3_fu_7989_p2 = (!tmp12_fu_7984_p2.read().is_01() || !tmp4_reg_11669.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp12_fu_7984_p2.read()) + sc_biguint<27>(tmp4_reg_11669.read()));
}

void gemvm_quant::thread_tmp40_fu_8144_p2() {
    tmp40_fu_8144_p2 = (!tmp59_reg_11009.read().is_01() || !tmp41_fu_8139_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp59_reg_11009.read()) + sc_biguint<27>(tmp41_fu_8139_p2.read()));
}

void gemvm_quant::thread_tmp41_fu_8139_p2() {
    tmp41_fu_8139_p2 = (!tmp50_fu_8134_p2.read().is_01() || !tmp42_reg_11739.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp50_fu_8134_p2.read()) + sc_biguint<27>(tmp42_reg_11739.read()));
}

void gemvm_quant::thread_tmp42_fu_8104_p2() {
    tmp42_fu_8104_p2 = (!tmp46_reg_10709.read().is_01() || !tmp43_fu_8099_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp46_reg_10709.read()) + sc_biguint<27>(tmp43_fu_8099_p2.read()));
}

void gemvm_quant::thread_tmp43_fu_8099_p2() {
    tmp43_fu_8099_p2 = (!tmp45_fu_8093_p2.read().is_01() || !tmp44_reg_11724.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp45_fu_8093_p2.read()) + sc_biguint<27>(tmp44_reg_11724.read()));
}

void gemvm_quant::thread_tmp44_fu_8057_p2() {
    tmp44_fu_8057_p2 = (!tmp_215_38_fu_8027_p3.read().is_01() || !tmp_215_39_fu_8034_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_38_fu_8027_p3.read()) + sc_biguint<27>(tmp_215_39_fu_8034_p3.read()));
}

void gemvm_quant::thread_tmp45_fu_8093_p2() {
    tmp45_fu_8093_p2 = (!tmp_215_40_fu_8063_p3.read().is_01() || !tmp_215_41_fu_8070_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_40_fu_8063_p3.read()) + sc_biguint<27>(tmp_215_41_fu_8070_p3.read()));
}

void gemvm_quant::thread_tmp46_fu_5360_p2() {
    tmp46_fu_5360_p2 = (!tmp48_fu_5354_p2.read().is_01() || !tmp47_fu_5342_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp48_fu_5354_p2.read()) + sc_biguint<27>(tmp47_fu_5342_p2.read()));
}

void gemvm_quant::thread_tmp47_fu_5342_p2() {
    tmp47_fu_5342_p2 = (!tmp_215_42_fu_5291_p3.read().is_01() || !tmp_215_43_fu_5298_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_42_fu_5291_p3.read()) + sc_biguint<27>(tmp_215_43_fu_5298_p3.read()));
}

void gemvm_quant::thread_tmp48_fu_5354_p2() {
    tmp48_fu_5354_p2 = (!tmp49_fu_5348_p2.read().is_01() || !tmp_215_44_fu_5305_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp49_fu_5348_p2.read()) + sc_biguint<27>(tmp_215_44_fu_5305_p3.read()));
}

void gemvm_quant::thread_tmp49_fu_5348_p2() {
    tmp49_fu_5348_p2 = (!tmp_215_45_fu_5312_p3.read().is_01() || !tmp_215_46_fu_5319_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_45_fu_5312_p3.read()) + sc_biguint<27>(tmp_215_46_fu_5319_p3.read()));
}

void gemvm_quant::thread_tmp4_fu_7916_p2() {
    tmp4_fu_7916_p2 = (!tmp8_reg_10364.read().is_01() || !tmp5_fu_7911_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp8_reg_10364.read()) + sc_biguint<27>(tmp5_fu_7911_p2.read()));
}

void gemvm_quant::thread_tmp50_fu_8134_p2() {
    tmp50_fu_8134_p2 = (!tmp55_reg_10799.read().is_01() || !tmp51_fu_8129_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp55_reg_10799.read()) + sc_biguint<27>(tmp51_fu_8129_p2.read()));
}

void gemvm_quant::thread_tmp51_fu_8129_p2() {
    tmp51_fu_8129_p2 = (!tmp53_reg_10734.read().is_01() || !tmp52_fu_8123_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp53_reg_10734.read()) + sc_biguint<27>(tmp52_fu_8123_p2.read()));
}

void gemvm_quant::thread_tmp52_fu_8123_p2() {
    tmp52_fu_8123_p2 = (!tmp_215_47_fu_8109_p3.read().is_01() || !tmp_215_48_fu_8116_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_47_fu_8109_p3.read()) + sc_biguint<27>(tmp_215_48_fu_8116_p3.read()));
}

void gemvm_quant::thread_tmp53_fu_5431_p2() {
    tmp53_fu_5431_p2 = (!tmp54_fu_5425_p2.read().is_01() || !tmp_215_49_fu_5388_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp54_fu_5425_p2.read()) + sc_biguint<27>(tmp_215_49_fu_5388_p3.read()));
}

void gemvm_quant::thread_tmp54_fu_5425_p2() {
    tmp54_fu_5425_p2 = (!tmp_215_50_fu_5395_p3.read().is_01() || !tmp_215_51_fu_5402_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_50_fu_5395_p3.read()) + sc_biguint<27>(tmp_215_51_fu_5402_p3.read()));
}

void gemvm_quant::thread_tmp55_fu_5604_p2() {
    tmp55_fu_5604_p2 = (!tmp57_fu_5598_p2.read().is_01() || !tmp56_fu_5586_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp57_fu_5598_p2.read()) + sc_biguint<27>(tmp56_fu_5586_p2.read()));
}

void gemvm_quant::thread_tmp56_fu_5586_p2() {
    tmp56_fu_5586_p2 = (!tmp_215_52_fu_5535_p3.read().is_01() || !tmp_215_53_fu_5542_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_52_fu_5535_p3.read()) + sc_biguint<27>(tmp_215_53_fu_5542_p3.read()));
}

void gemvm_quant::thread_tmp57_fu_5598_p2() {
    tmp57_fu_5598_p2 = (!tmp58_fu_5592_p2.read().is_01() || !tmp_215_54_fu_5549_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp58_fu_5592_p2.read()) + sc_biguint<27>(tmp_215_54_fu_5549_p3.read()));
}

void gemvm_quant::thread_tmp58_fu_5592_p2() {
    tmp58_fu_5592_p2 = (!tmp_215_55_fu_5556_p3.read().is_01() || !tmp_215_56_fu_5563_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_55_fu_5556_p3.read()) + sc_biguint<27>(tmp_215_56_fu_5563_p3.read()));
}

void gemvm_quant::thread_tmp59_fu_6162_p2() {
    tmp59_fu_6162_p2 = (!tmp69_reg_10984.read().is_01() || !tmp60_fu_6158_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp69_reg_10984.read()) + sc_biguint<27>(tmp60_fu_6158_p2.read()));
}

void gemvm_quant::thread_tmp5_fu_7911_p2() {
    tmp5_fu_7911_p2 = (!tmp7_fu_7905_p2.read().is_01() || !tmp6_reg_11639.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp7_fu_7905_p2.read()) + sc_biguint<27>(tmp6_reg_11639.read()));
}

void gemvm_quant::thread_tmp60_fu_6158_p2() {
    tmp60_fu_6158_p2 = (!tmp65_reg_10909.read().is_01() || !tmp61_reg_10844.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp65_reg_10909.read()) + sc_biguint<27>(tmp61_reg_10844.read()));
}

void gemvm_quant::thread_tmp61_fu_5739_p2() {
    tmp61_fu_5739_p2 = (!tmp63_fu_5733_p2.read().is_01() || !tmp62_fu_5721_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp63_fu_5733_p2.read()) + sc_biguint<27>(tmp62_fu_5721_p2.read()));
}

void gemvm_quant::thread_tmp62_fu_5721_p2() {
    tmp62_fu_5721_p2 = (!tmp_215_57_fu_5670_p3.read().is_01() || !tmp_215_58_fu_5677_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_57_fu_5670_p3.read()) + sc_biguint<27>(tmp_215_58_fu_5677_p3.read()));
}

void gemvm_quant::thread_tmp63_fu_5733_p2() {
    tmp63_fu_5733_p2 = (!tmp64_fu_5727_p2.read().is_01() || !tmp_215_59_fu_5684_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp64_fu_5727_p2.read()) + sc_biguint<27>(tmp_215_59_fu_5684_p3.read()));
}

void gemvm_quant::thread_tmp64_fu_5727_p2() {
    tmp64_fu_5727_p2 = (!tmp_215_60_fu_5691_p3.read().is_01() || !tmp_215_61_fu_5698_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_60_fu_5691_p3.read()) + sc_biguint<27>(tmp_215_61_fu_5698_p3.read()));
}

void gemvm_quant::thread_tmp65_fu_5912_p2() {
    tmp65_fu_5912_p2 = (!tmp67_fu_5906_p2.read().is_01() || !tmp66_fu_5894_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp67_fu_5906_p2.read()) + sc_biguint<27>(tmp66_fu_5894_p2.read()));
}

void gemvm_quant::thread_tmp66_fu_5894_p2() {
    tmp66_fu_5894_p2 = (!tmp_215_62_fu_5843_p3.read().is_01() || !tmp_215_63_fu_5850_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_62_fu_5843_p3.read()) + sc_biguint<27>(tmp_215_63_fu_5850_p3.read()));
}

void gemvm_quant::thread_tmp67_fu_5906_p2() {
    tmp67_fu_5906_p2 = (!tmp68_fu_5900_p2.read().is_01() || !tmp_215_64_fu_5857_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp68_fu_5900_p2.read()) + sc_biguint<27>(tmp_215_64_fu_5857_p3.read()));
}

void gemvm_quant::thread_tmp68_fu_5900_p2() {
    tmp68_fu_5900_p2 = (!tmp_215_65_fu_5864_p3.read().is_01() || !tmp_215_66_fu_5871_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_65_fu_5864_p3.read()) + sc_biguint<27>(tmp_215_66_fu_5871_p3.read()));
}

void gemvm_quant::thread_tmp69_fu_6114_p2() {
    tmp69_fu_6114_p2 = (!tmp74_fu_6109_p2.read().is_01() || !tmp70_fu_6099_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp74_fu_6109_p2.read()) + sc_biguint<27>(tmp70_fu_6099_p2.read()));
}

void gemvm_quant::thread_tmp6_fu_7828_p2() {
    tmp6_fu_7828_p2 = (!tmp_215_fu_7798_p3.read().is_01() || !tmp_215_1_fu_7805_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_fu_7798_p3.read()) + sc_biguint<27>(tmp_215_1_fu_7805_p3.read()));
}

void gemvm_quant::thread_tmp70_fu_6099_p2() {
    tmp70_fu_6099_p2 = (!tmp72_reg_10959.read().is_01() || !tmp71_reg_10934.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp72_reg_10959.read()) + sc_biguint<27>(tmp71_reg_10934.read()));
}

void gemvm_quant::thread_tmp71_fu_5970_p2() {
    tmp71_fu_5970_p2 = (!tmp_215_67_fu_5940_p3.read().is_01() || !tmp_215_68_fu_5947_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_67_fu_5940_p3.read()) + sc_biguint<27>(tmp_215_68_fu_5947_p3.read()));
}

void gemvm_quant::thread_tmp72_fu_6041_p2() {
    tmp72_fu_6041_p2 = (!tmp73_fu_6035_p2.read().is_01() || !tmp_215_69_fu_5998_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp73_fu_6035_p2.read()) + sc_biguint<27>(tmp_215_69_fu_5998_p3.read()));
}

void gemvm_quant::thread_tmp73_fu_6035_p2() {
    tmp73_fu_6035_p2 = (!tmp_215_70_fu_6005_p3.read().is_01() || !tmp_215_71_fu_6012_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_70_fu_6005_p3.read()) + sc_biguint<27>(tmp_215_71_fu_6012_p3.read()));
}

void gemvm_quant::thread_tmp74_fu_6109_p2() {
    tmp74_fu_6109_p2 = (!tmp76_reg_9999.read().is_01() || !tmp75_fu_6103_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp76_reg_9999.read()) + sc_biguint<27>(tmp75_fu_6103_p2.read()));
}

void gemvm_quant::thread_tmp75_fu_6103_p2() {
    tmp75_fu_6103_p2 = (!tmp_215_72_fu_6069_p3.read().is_01() || !tmp_215_73_fu_6076_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_72_fu_6069_p3.read()) + sc_biguint<27>(tmp_215_73_fu_6076_p3.read()));
}

void gemvm_quant::thread_tmp76_fu_3467_p2() {
    tmp76_fu_3467_p2 = (!tmp77_fu_3461_p2.read().is_01() || !tmp_215_74_fu_3424_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp77_fu_3461_p2.read()) + sc_biguint<27>(tmp_215_74_fu_3424_p3.read()));
}

void gemvm_quant::thread_tmp77_fu_3461_p2() {
    tmp77_fu_3461_p2 = (!tmp_215_75_fu_3431_p3.read().is_01() || !tmp_215_76_fu_3438_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_75_fu_3431_p3.read()) + sc_biguint<27>(tmp_215_76_fu_3438_p3.read()));
}

void gemvm_quant::thread_tmp78_fu_7847_p2() {
    tmp78_fu_7847_p2 = (!tmp117_fu_7842_p2.read().is_01() || !tmp79_fu_7834_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp117_fu_7842_p2.read()) + sc_biguint<27>(tmp79_fu_7834_p2.read()));
}

void gemvm_quant::thread_tmp79_fu_7834_p2() {
    tmp79_fu_7834_p2 = (!tmp98_reg_11409.read().is_01() || !tmp80_reg_11199.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp98_reg_11409.read()) + sc_biguint<27>(tmp80_reg_11199.read()));
}

void gemvm_quant::thread_tmp7_fu_7905_p2() {
    tmp7_fu_7905_p2 = (!tmp_215_2_fu_7875_p3.read().is_01() || !tmp_215_3_fu_7882_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_2_fu_7875_p3.read()) + sc_biguint<27>(tmp_215_3_fu_7882_p3.read()));
}

void gemvm_quant::thread_tmp80_fu_6668_p2() {
    tmp80_fu_6668_p2 = (!tmp89_reg_11174.read().is_01() || !tmp81_fu_6664_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp89_reg_11174.read()) + sc_biguint<27>(tmp81_fu_6664_p2.read()));
}

void gemvm_quant::thread_tmp81_fu_6664_p2() {
    tmp81_fu_6664_p2 = (!tmp85_reg_11099.read().is_01() || !tmp82_reg_11034.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp85_reg_11099.read()) + sc_biguint<27>(tmp82_reg_11034.read()));
}

void gemvm_quant::thread_tmp82_fu_6245_p2() {
    tmp82_fu_6245_p2 = (!tmp84_fu_6239_p2.read().is_01() || !tmp83_fu_6233_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp84_fu_6239_p2.read()) + sc_biguint<27>(tmp83_fu_6233_p2.read()));
}

void gemvm_quant::thread_tmp83_fu_6233_p2() {
    tmp83_fu_6233_p2 = (!tmp_215_77_fu_6189_p3.read().is_01() || !tmp_215_78_fu_6196_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_77_fu_6189_p3.read()) + sc_biguint<27>(tmp_215_78_fu_6196_p3.read()));
}

void gemvm_quant::thread_tmp84_fu_6239_p2() {
    tmp84_fu_6239_p2 = (!tmp_215_79_fu_6203_p3.read().is_01() || !tmp_215_80_fu_6210_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_79_fu_6203_p3.read()) + sc_biguint<27>(tmp_215_80_fu_6210_p3.read()));
}

void gemvm_quant::thread_tmp85_fu_6418_p2() {
    tmp85_fu_6418_p2 = (!tmp87_fu_6412_p2.read().is_01() || !tmp86_fu_6400_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp87_fu_6412_p2.read()) + sc_biguint<27>(tmp86_fu_6400_p2.read()));
}

void gemvm_quant::thread_tmp86_fu_6400_p2() {
    tmp86_fu_6400_p2 = (!tmp_215_81_fu_6349_p3.read().is_01() || !tmp_215_82_fu_6356_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_81_fu_6349_p3.read()) + sc_biguint<27>(tmp_215_82_fu_6356_p3.read()));
}

void gemvm_quant::thread_tmp87_fu_6412_p2() {
    tmp87_fu_6412_p2 = (!tmp88_fu_6406_p2.read().is_01() || !tmp_215_83_fu_6363_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp88_fu_6406_p2.read()) + sc_biguint<27>(tmp_215_83_fu_6363_p3.read()));
}

void gemvm_quant::thread_tmp88_fu_6406_p2() {
    tmp88_fu_6406_p2 = (!tmp_215_84_fu_6370_p3.read().is_01() || !tmp_215_85_fu_6377_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_84_fu_6370_p3.read()) + sc_biguint<27>(tmp_215_85_fu_6377_p3.read()));
}

void gemvm_quant::thread_tmp89_fu_6620_p2() {
    tmp89_fu_6620_p2 = (!tmp94_fu_6615_p2.read().is_01() || !tmp90_fu_6605_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp94_fu_6615_p2.read()) + sc_biguint<27>(tmp90_fu_6605_p2.read()));
}

void gemvm_quant::thread_tmp8_fu_4424_p2() {
    tmp8_fu_4424_p2 = (!tmp10_fu_4418_p2.read().is_01() || !tmp9_fu_4406_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp10_fu_4418_p2.read()) + sc_biguint<27>(tmp9_fu_4406_p2.read()));
}

void gemvm_quant::thread_tmp90_fu_6605_p2() {
    tmp90_fu_6605_p2 = (!tmp92_reg_11149.read().is_01() || !tmp91_reg_11124.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp92_reg_11149.read()) + sc_biguint<27>(tmp91_reg_11124.read()));
}

void gemvm_quant::thread_tmp91_fu_6476_p2() {
    tmp91_fu_6476_p2 = (!tmp_215_86_fu_6446_p3.read().is_01() || !tmp_215_87_fu_6453_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_86_fu_6446_p3.read()) + sc_biguint<27>(tmp_215_87_fu_6453_p3.read()));
}

void gemvm_quant::thread_tmp92_fu_6547_p2() {
    tmp92_fu_6547_p2 = (!tmp93_fu_6541_p2.read().is_01() || !tmp_215_88_fu_6504_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp93_fu_6541_p2.read()) + sc_biguint<27>(tmp_215_88_fu_6504_p3.read()));
}

void gemvm_quant::thread_tmp93_fu_6541_p2() {
    tmp93_fu_6541_p2 = (!tmp_215_89_fu_6511_p3.read().is_01() || !tmp_215_90_fu_6518_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_89_fu_6511_p3.read()) + sc_biguint<27>(tmp_215_90_fu_6518_p3.read()));
}

void gemvm_quant::thread_tmp94_fu_6615_p2() {
    tmp94_fu_6615_p2 = (!tmp96_reg_10044.read().is_01() || !tmp95_fu_6609_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp96_reg_10044.read()) + sc_biguint<27>(tmp95_fu_6609_p2.read()));
}

void gemvm_quant::thread_tmp95_fu_6609_p2() {
    tmp95_fu_6609_p2 = (!tmp_215_91_fu_6575_p3.read().is_01() || !tmp_215_92_fu_6582_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_91_fu_6575_p3.read()) + sc_biguint<27>(tmp_215_92_fu_6582_p3.read()));
}

void gemvm_quant::thread_tmp96_fu_3576_p2() {
    tmp96_fu_3576_p2 = (!tmp97_fu_3570_p2.read().is_01() || !tmp_215_93_fu_3533_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp97_fu_3570_p2.read()) + sc_biguint<27>(tmp_215_93_fu_3533_p3.read()));
}

void gemvm_quant::thread_tmp97_fu_3570_p2() {
    tmp97_fu_3570_p2 = (!tmp_215_94_fu_3540_p3.read().is_01() || !tmp_215_95_fu_3547_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_94_fu_3540_p3.read()) + sc_biguint<27>(tmp_215_95_fu_3547_p3.read()));
}

void gemvm_quant::thread_tmp98_fu_7239_p2() {
    tmp98_fu_7239_p2 = (!tmp108_reg_11384.read().is_01() || !tmp99_fu_7235_p2.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp108_reg_11384.read()) + sc_biguint<27>(tmp99_fu_7235_p2.read()));
}

void gemvm_quant::thread_tmp99_fu_7235_p2() {
    tmp99_fu_7235_p2 = (!tmp104_reg_11289.read().is_01() || !tmp100_reg_11244.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp104_reg_11289.read()) + sc_biguint<27>(tmp100_reg_11244.read()));
}

void gemvm_quant::thread_tmp9_fu_4406_p2() {
    tmp9_fu_4406_p2 = (!tmp_215_4_fu_4355_p3.read().is_01() || !tmp_215_5_fu_4362_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(tmp_215_4_fu_4355_p3.read()) + sc_biguint<27>(tmp_215_5_fu_4362_p3.read()));
}

void gemvm_quant::thread_tmp_100_cast_fu_5201_p1() {
    tmp_100_cast_fu_5201_p1 = esl_zext<64,15>(tmp_100_fu_5195_p2.read());
}

void gemvm_quant::thread_tmp_100_fu_5195_p2() {
    tmp_100_fu_5195_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_32.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_32));
}

void gemvm_quant::thread_tmp_101_cast_fu_5237_p1() {
    tmp_101_cast_fu_5237_p1 = esl_zext<64,15>(tmp_101_fu_5231_p2.read());
}

void gemvm_quant::thread_tmp_101_fu_5231_p2() {
    tmp_101_fu_5231_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_33.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_33));
}

void gemvm_quant::thread_tmp_102_cast_fu_5248_p1() {
    tmp_102_cast_fu_5248_p1 = esl_zext<64,15>(tmp_102_fu_5242_p2.read());
}

void gemvm_quant::thread_tmp_102_fu_5242_p2() {
    tmp_102_fu_5242_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_34.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_34));
}

void gemvm_quant::thread_tmp_103_cast_fu_5275_p1() {
    tmp_103_cast_fu_5275_p1 = esl_zext<64,15>(tmp_103_fu_5269_p2.read());
}

void gemvm_quant::thread_tmp_103_fu_5269_p2() {
    tmp_103_fu_5269_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_35.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_35));
}

void gemvm_quant::thread_tmp_104_cast_fu_5286_p1() {
    tmp_104_cast_fu_5286_p1 = esl_zext<64,15>(tmp_104_fu_5280_p2.read());
}

void gemvm_quant::thread_tmp_104_fu_5280_p2() {
    tmp_104_fu_5280_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_36.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_36));
}

void gemvm_quant::thread_tmp_105_cast_fu_5372_p1() {
    tmp_105_cast_fu_5372_p1 = esl_zext<64,15>(tmp_105_fu_5366_p2.read());
}

void gemvm_quant::thread_tmp_105_fu_5366_p2() {
    tmp_105_fu_5366_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_37.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_37));
}

void gemvm_quant::thread_tmp_106_cast_fu_5383_p1() {
    tmp_106_cast_fu_5383_p1 = esl_zext<64,15>(tmp_106_fu_5377_p2.read());
}

void gemvm_quant::thread_tmp_106_fu_5377_p2() {
    tmp_106_fu_5377_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_38.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_38));
}

void gemvm_quant::thread_tmp_107_cast_fu_5443_p1() {
    tmp_107_cast_fu_5443_p1 = esl_zext<64,15>(tmp_107_fu_5437_p2.read());
}

void gemvm_quant::thread_tmp_107_fu_5437_p2() {
    tmp_107_fu_5437_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_39.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_39));
}

void gemvm_quant::thread_tmp_108_cast_fu_5454_p1() {
    tmp_108_cast_fu_5454_p1 = esl_zext<64,15>(tmp_108_fu_5448_p2.read());
}

void gemvm_quant::thread_tmp_108_fu_5448_p2() {
    tmp_108_fu_5448_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_3A.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_3A));
}

void gemvm_quant::thread_tmp_109_cast_fu_5481_p1() {
    tmp_109_cast_fu_5481_p1 = esl_zext<64,15>(tmp_109_fu_5475_p2.read());
}

void gemvm_quant::thread_tmp_109_fu_5475_p2() {
    tmp_109_fu_5475_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_3B.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_3B));
}

void gemvm_quant::thread_tmp_110_cast_fu_5492_p1() {
    tmp_110_cast_fu_5492_p1 = esl_zext<64,15>(tmp_110_fu_5486_p2.read());
}

void gemvm_quant::thread_tmp_110_fu_5486_p2() {
    tmp_110_fu_5486_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_3C.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_3C));
}

void gemvm_quant::thread_tmp_111_cast_fu_5519_p1() {
    tmp_111_cast_fu_5519_p1 = esl_zext<64,15>(tmp_111_fu_5513_p2.read());
}

void gemvm_quant::thread_tmp_111_fu_5513_p2() {
    tmp_111_fu_5513_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_3D.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_3D));
}

void gemvm_quant::thread_tmp_112_cast_fu_5530_p1() {
    tmp_112_cast_fu_5530_p1 = esl_zext<64,15>(tmp_112_fu_5524_p2.read());
}

void gemvm_quant::thread_tmp_112_fu_5524_p2() {
    tmp_112_fu_5524_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_3E.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_3E));
}

void gemvm_quant::thread_tmp_113_cast_fu_5616_p1() {
    tmp_113_cast_fu_5616_p1 = esl_zext<64,15>(tmp_113_fu_5610_p2.read());
}

void gemvm_quant::thread_tmp_113_fu_5610_p2() {
    tmp_113_fu_5610_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_3F.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_3F));
}

void gemvm_quant::thread_tmp_114_cast_fu_5627_p1() {
    tmp_114_cast_fu_5627_p1 = esl_zext<64,15>(tmp_114_fu_5621_p2.read());
}

void gemvm_quant::thread_tmp_114_fu_5621_p2() {
    tmp_114_fu_5621_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_40.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_40));
}

void gemvm_quant::thread_tmp_115_cast_fu_5654_p1() {
    tmp_115_cast_fu_5654_p1 = esl_zext<64,15>(tmp_115_fu_5648_p2.read());
}

void gemvm_quant::thread_tmp_115_fu_5648_p2() {
    tmp_115_fu_5648_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_41.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_41));
}

void gemvm_quant::thread_tmp_116_cast_fu_5665_p1() {
    tmp_116_cast_fu_5665_p1 = esl_zext<64,15>(tmp_116_fu_5659_p2.read());
}

void gemvm_quant::thread_tmp_116_fu_5659_p2() {
    tmp_116_fu_5659_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_42.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_42));
}

void gemvm_quant::thread_tmp_117_cast_fu_5751_p1() {
    tmp_117_cast_fu_5751_p1 = esl_zext<64,15>(tmp_117_fu_5745_p2.read());
}

void gemvm_quant::thread_tmp_117_fu_5745_p2() {
    tmp_117_fu_5745_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_43.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_43));
}

void gemvm_quant::thread_tmp_118_cast_fu_5762_p1() {
    tmp_118_cast_fu_5762_p1 = esl_zext<64,15>(tmp_118_fu_5756_p2.read());
}

void gemvm_quant::thread_tmp_118_fu_5756_p2() {
    tmp_118_fu_5756_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_44.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_44));
}

void gemvm_quant::thread_tmp_119_cast_fu_5789_p1() {
    tmp_119_cast_fu_5789_p1 = esl_zext<64,15>(tmp_119_fu_5783_p2.read());
}

void gemvm_quant::thread_tmp_119_fu_5783_p2() {
    tmp_119_fu_5783_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_45.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_45));
}

void gemvm_quant::thread_tmp_120_cast_fu_5800_p1() {
    tmp_120_cast_fu_5800_p1 = esl_zext<64,15>(tmp_120_fu_5794_p2.read());
}

void gemvm_quant::thread_tmp_120_fu_5794_p2() {
    tmp_120_fu_5794_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_46.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_46));
}

void gemvm_quant::thread_tmp_121_cast_fu_5827_p1() {
    tmp_121_cast_fu_5827_p1 = esl_zext<64,15>(tmp_121_fu_5821_p2.read());
}

void gemvm_quant::thread_tmp_121_fu_5821_p2() {
    tmp_121_fu_5821_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_47.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_47));
}

void gemvm_quant::thread_tmp_122_cast_fu_5838_p1() {
    tmp_122_cast_fu_5838_p1 = esl_zext<64,15>(tmp_122_fu_5832_p2.read());
}

void gemvm_quant::thread_tmp_122_fu_5832_p2() {
    tmp_122_fu_5832_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_48.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_48));
}

void gemvm_quant::thread_tmp_123_cast_fu_5924_p1() {
    tmp_123_cast_fu_5924_p1 = esl_zext<64,15>(tmp_123_fu_5918_p2.read());
}

void gemvm_quant::thread_tmp_123_fu_5918_p2() {
    tmp_123_fu_5918_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_49.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_49));
}

void gemvm_quant::thread_tmp_124_cast_fu_5935_p1() {
    tmp_124_cast_fu_5935_p1 = esl_zext<64,15>(tmp_124_fu_5929_p2.read());
}

void gemvm_quant::thread_tmp_124_fu_5929_p2() {
    tmp_124_fu_5929_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_4A.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_4A));
}

void gemvm_quant::thread_tmp_125_cast_fu_3272_p1() {
    tmp_125_cast_fu_3272_p1 = esl_zext<64,15>(tmp_125_fu_3266_p2.read());
}

void gemvm_quant::thread_tmp_125_fu_3266_p2() {
    tmp_125_fu_3266_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_4B.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_4B));
}

void gemvm_quant::thread_tmp_126_cast_fu_3299_p1() {
    tmp_126_cast_fu_3299_p1 = esl_zext<64,15>(tmp_126_fu_3293_p2.read());
}

void gemvm_quant::thread_tmp_126_fu_3293_p2() {
    tmp_126_fu_3293_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_4C.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_4C));
}

void gemvm_quant::thread_tmp_127_cast_fu_3310_p1() {
    tmp_127_cast_fu_3310_p1 = esl_zext<64,15>(tmp_127_fu_3304_p2.read());
}

void gemvm_quant::thread_tmp_127_fu_3304_p2() {
    tmp_127_fu_3304_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_4D.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_4D));
}

void gemvm_quant::thread_tmp_128_cast_fu_5982_p1() {
    tmp_128_cast_fu_5982_p1 = esl_zext<64,15>(tmp_128_fu_5976_p2.read());
}

void gemvm_quant::thread_tmp_128_fu_5976_p2() {
    tmp_128_fu_5976_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_4E.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_4E));
}

void gemvm_quant::thread_tmp_129_cast_fu_5993_p1() {
    tmp_129_cast_fu_5993_p1 = esl_zext<64,15>(tmp_129_fu_5987_p2.read());
}

void gemvm_quant::thread_tmp_129_fu_5987_p2() {
    tmp_129_fu_5987_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_4F.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_4F));
}

void gemvm_quant::thread_tmp_130_cast_fu_6053_p1() {
    tmp_130_cast_fu_6053_p1 = esl_zext<64,15>(tmp_130_fu_6047_p2.read());
}

void gemvm_quant::thread_tmp_130_fu_6047_p2() {
    tmp_130_fu_6047_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_50.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_50));
}

void gemvm_quant::thread_tmp_131_cast_fu_6064_p1() {
    tmp_131_cast_fu_6064_p1 = esl_zext<64,15>(tmp_131_fu_6058_p2.read());
}

void gemvm_quant::thread_tmp_131_fu_6058_p2() {
    tmp_131_fu_6058_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_51.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_51));
}

void gemvm_quant::thread_tmp_132_cast_fu_6126_p1() {
    tmp_132_cast_fu_6126_p1 = esl_zext<64,15>(tmp_132_fu_6120_p2.read());
}

void gemvm_quant::thread_tmp_132_fu_6120_p2() {
    tmp_132_fu_6120_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_52.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_52));
}

void gemvm_quant::thread_tmp_133_cast_fu_6137_p1() {
    tmp_133_cast_fu_6137_p1 = esl_zext<64,15>(tmp_133_fu_6131_p2.read());
}

void gemvm_quant::thread_tmp_133_fu_6131_p2() {
    tmp_133_fu_6131_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_53.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_53));
}

void gemvm_quant::thread_tmp_134_cast_fu_6173_p1() {
    tmp_134_cast_fu_6173_p1 = esl_zext<64,15>(tmp_134_fu_6167_p2.read());
}

void gemvm_quant::thread_tmp_134_fu_6167_p2() {
    tmp_134_fu_6167_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_54.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_54));
}

void gemvm_quant::thread_tmp_135_cast_fu_6184_p1() {
    tmp_135_cast_fu_6184_p1 = esl_zext<64,15>(tmp_135_fu_6178_p2.read());
}

void gemvm_quant::thread_tmp_135_fu_6178_p2() {
    tmp_135_fu_6178_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_55.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_55));
}

void gemvm_quant::thread_tmp_136_cast_fu_6257_p1() {
    tmp_136_cast_fu_6257_p1 = esl_zext<64,15>(tmp_136_fu_6251_p2.read());
}

void gemvm_quant::thread_tmp_136_fu_6251_p2() {
    tmp_136_fu_6251_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_56.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_56));
}

void gemvm_quant::thread_tmp_137_cast_fu_6268_p1() {
    tmp_137_cast_fu_6268_p1 = esl_zext<64,15>(tmp_137_fu_6262_p2.read());
}

void gemvm_quant::thread_tmp_137_fu_6262_p2() {
    tmp_137_fu_6262_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_57.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_57));
}

void gemvm_quant::thread_tmp_138_cast_fu_6295_p1() {
    tmp_138_cast_fu_6295_p1 = esl_zext<64,15>(tmp_138_fu_6289_p2.read());
}

void gemvm_quant::thread_tmp_138_fu_6289_p2() {
    tmp_138_fu_6289_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_58.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_58));
}

void gemvm_quant::thread_tmp_139_cast_fu_6306_p1() {
    tmp_139_cast_fu_6306_p1 = esl_zext<64,15>(tmp_139_fu_6300_p2.read());
}

void gemvm_quant::thread_tmp_139_fu_6300_p2() {
    tmp_139_fu_6300_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_59.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_59));
}

void gemvm_quant::thread_tmp_140_cast_fu_6333_p1() {
    tmp_140_cast_fu_6333_p1 = esl_zext<64,15>(tmp_140_fu_6327_p2.read());
}

void gemvm_quant::thread_tmp_140_fu_6327_p2() {
    tmp_140_fu_6327_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_5A.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_5A));
}

void gemvm_quant::thread_tmp_141_cast_fu_6344_p1() {
    tmp_141_cast_fu_6344_p1 = esl_zext<64,15>(tmp_141_fu_6338_p2.read());
}

void gemvm_quant::thread_tmp_141_fu_6338_p2() {
    tmp_141_fu_6338_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_5B.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_5B));
}

void gemvm_quant::thread_tmp_143_cast_fu_6430_p1() {
    tmp_143_cast_fu_6430_p1 = esl_zext<64,15>(tmp_143_fu_6424_p2.read());
}

void gemvm_quant::thread_tmp_143_fu_6424_p2() {
    tmp_143_fu_6424_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_5C.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_5C));
}

void gemvm_quant::thread_tmp_144_cast_fu_6441_p1() {
    tmp_144_cast_fu_6441_p1 = esl_zext<64,15>(tmp_144_fu_6435_p2.read());
}

void gemvm_quant::thread_tmp_144_fu_6435_p2() {
    tmp_144_fu_6435_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_5D.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_5D));
}

void gemvm_quant::thread_tmp_145_cast_fu_3337_p1() {
    tmp_145_cast_fu_3337_p1 = esl_zext<64,15>(tmp_145_fu_3331_p2.read());
}

void gemvm_quant::thread_tmp_145_fu_3331_p2() {
    tmp_145_fu_3331_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_5E.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_5E));
}

void gemvm_quant::thread_tmp_146_cast_fu_3348_p1() {
    tmp_146_cast_fu_3348_p1 = esl_zext<64,15>(tmp_146_fu_3342_p2.read());
}

void gemvm_quant::thread_tmp_146_fu_3342_p2() {
    tmp_146_fu_3342_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_5F.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_5F));
}

void gemvm_quant::thread_tmp_147_cast_fu_3408_p1() {
    tmp_147_cast_fu_3408_p1 = esl_zext<64,15>(tmp_147_fu_3402_p2.read());
}

void gemvm_quant::thread_tmp_147_fu_3402_p2() {
    tmp_147_fu_3402_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_60.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_60));
}

void gemvm_quant::thread_tmp_148_cast_fu_6488_p1() {
    tmp_148_cast_fu_6488_p1 = esl_zext<64,15>(tmp_148_fu_6482_p2.read());
}

void gemvm_quant::thread_tmp_148_fu_6482_p2() {
    tmp_148_fu_6482_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_61.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_61));
}

void gemvm_quant::thread_tmp_149_cast_fu_6499_p1() {
    tmp_149_cast_fu_6499_p1 = esl_zext<64,15>(tmp_149_fu_6493_p2.read());
}

void gemvm_quant::thread_tmp_149_fu_6493_p2() {
    tmp_149_fu_6493_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_62.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_62));
}

void gemvm_quant::thread_tmp_150_cast_fu_6559_p1() {
    tmp_150_cast_fu_6559_p1 = esl_zext<64,15>(tmp_150_fu_6553_p2.read());
}

void gemvm_quant::thread_tmp_150_fu_6553_p2() {
    tmp_150_fu_6553_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_63.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_63));
}

void gemvm_quant::thread_tmp_151_cast_fu_6570_p1() {
    tmp_151_cast_fu_6570_p1 = esl_zext<64,15>(tmp_151_fu_6564_p2.read());
}

void gemvm_quant::thread_tmp_151_fu_6564_p2() {
    tmp_151_fu_6564_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_64.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_64));
}

void gemvm_quant::thread_tmp_152_cast_fu_6632_p1() {
    tmp_152_cast_fu_6632_p1 = esl_zext<64,15>(tmp_152_fu_6626_p2.read());
}

void gemvm_quant::thread_tmp_152_fu_6626_p2() {
    tmp_152_fu_6626_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_65.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_65));
}

void gemvm_quant::thread_tmp_153_cast_fu_6643_p1() {
    tmp_153_cast_fu_6643_p1 = esl_zext<64,15>(tmp_153_fu_6637_p2.read());
}

void gemvm_quant::thread_tmp_153_fu_6637_p2() {
    tmp_153_fu_6637_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_66.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_66));
}

void gemvm_quant::thread_tmp_154_cast_fu_6679_p1() {
    tmp_154_cast_fu_6679_p1 = esl_zext<64,15>(tmp_154_fu_6673_p2.read());
}

void gemvm_quant::thread_tmp_154_fu_6673_p2() {
    tmp_154_fu_6673_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_67.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_67));
}

void gemvm_quant::thread_tmp_155_cast_fu_6690_p1() {
    tmp_155_cast_fu_6690_p1 = esl_zext<64,15>(tmp_155_fu_6684_p2.read());
}

void gemvm_quant::thread_tmp_155_fu_6684_p2() {
    tmp_155_fu_6684_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_68.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_68));
}

void gemvm_quant::thread_tmp_156_cast_fu_6717_p1() {
    tmp_156_cast_fu_6717_p1 = esl_zext<64,15>(tmp_156_fu_6711_p2.read());
}

void gemvm_quant::thread_tmp_156_fu_6711_p2() {
    tmp_156_fu_6711_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_69.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_69));
}

void gemvm_quant::thread_tmp_157_cast_fu_6728_p1() {
    tmp_157_cast_fu_6728_p1 = esl_zext<64,15>(tmp_157_fu_6722_p2.read());
}

void gemvm_quant::thread_tmp_157_fu_6722_p2() {
    tmp_157_fu_6722_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_6A.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_6A));
}

void gemvm_quant::thread_tmp_158_cast_fu_6814_p1() {
    tmp_158_cast_fu_6814_p1 = esl_zext<64,15>(tmp_158_fu_6808_p2.read());
}

void gemvm_quant::thread_tmp_158_fu_6808_p2() {
    tmp_158_fu_6808_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_6B.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_6B));
}

void gemvm_quant::thread_tmp_159_cast_fu_6825_p1() {
    tmp_159_cast_fu_6825_p1 = esl_zext<64,15>(tmp_159_fu_6819_p2.read());
}

void gemvm_quant::thread_tmp_159_fu_6819_p2() {
    tmp_159_fu_6819_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_6C.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_6C));
}

void gemvm_quant::thread_tmp_160_cast_fu_6852_p1() {
    tmp_160_cast_fu_6852_p1 = esl_zext<64,15>(tmp_160_fu_6846_p2.read());
}

void gemvm_quant::thread_tmp_160_fu_6846_p2() {
    tmp_160_fu_6846_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_6D.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_6D));
}

void gemvm_quant::thread_tmp_161_cast_fu_6863_p1() {
    tmp_161_cast_fu_6863_p1 = esl_zext<64,15>(tmp_161_fu_6857_p2.read());
}

void gemvm_quant::thread_tmp_161_fu_6857_p2() {
    tmp_161_fu_6857_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_6E.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_6E));
}

void gemvm_quant::thread_tmp_162_cast_fu_6949_p1() {
    tmp_162_cast_fu_6949_p1 = esl_zext<64,15>(tmp_162_fu_6943_p2.read());
}

void gemvm_quant::thread_tmp_162_fu_6943_p2() {
    tmp_162_fu_6943_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_6F.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_6F));
}

void gemvm_quant::thread_tmp_163_cast_fu_6960_p1() {
    tmp_163_cast_fu_6960_p1 = esl_zext<64,15>(tmp_163_fu_6954_p2.read());
}

void gemvm_quant::thread_tmp_163_fu_6954_p2() {
    tmp_163_fu_6954_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_70.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_70));
}

void gemvm_quant::thread_tmp_164_cast_fu_7007_p1() {
    tmp_164_cast_fu_7007_p1 = esl_zext<64,15>(tmp_164_fu_7001_p2.read());
}

void gemvm_quant::thread_tmp_164_fu_7001_p2() {
    tmp_164_fu_7001_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_71.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_71));
}

void gemvm_quant::thread_tmp_165_cast_fu_3419_p1() {
    tmp_165_cast_fu_3419_p1 = esl_zext<64,15>(tmp_165_fu_3413_p2.read());
}

void gemvm_quant::thread_tmp_165_fu_3413_p2() {
    tmp_165_fu_3413_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_72.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_72));
}

void gemvm_quant::thread_tmp_166_cast_fu_3479_p1() {
    tmp_166_cast_fu_3479_p1 = esl_zext<64,15>(tmp_166_fu_3473_p2.read());
}

void gemvm_quant::thread_tmp_166_fu_3473_p2() {
    tmp_166_fu_3473_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_73.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_73));
}

void gemvm_quant::thread_tmp_167_cast_fu_3490_p1() {
    tmp_167_cast_fu_3490_p1 = esl_zext<64,15>(tmp_167_fu_3484_p2.read());
}

void gemvm_quant::thread_tmp_167_fu_3484_p2() {
    tmp_167_fu_3484_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_74.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_74));
}

void gemvm_quant::thread_tmp_168_cast_fu_7018_p1() {
    tmp_168_cast_fu_7018_p1 = esl_zext<64,15>(tmp_168_fu_7012_p2.read());
}

void gemvm_quant::thread_tmp_168_fu_7012_p2() {
    tmp_168_fu_7012_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_75.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_75));
}

void gemvm_quant::thread_tmp_169_cast_fu_7045_p1() {
    tmp_169_cast_fu_7045_p1 = esl_zext<64,15>(tmp_169_fu_7039_p2.read());
}

void gemvm_quant::thread_tmp_169_fu_7039_p2() {
    tmp_169_fu_7039_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_76.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_76));
}

void gemvm_quant::thread_tmp_170_cast_fu_7056_p1() {
    tmp_170_cast_fu_7056_p1 = esl_zext<64,15>(tmp_170_fu_7050_p2.read());
}

void gemvm_quant::thread_tmp_170_fu_7050_p2() {
    tmp_170_fu_7050_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_77.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_77));
}

void gemvm_quant::thread_tmp_171_cast_fu_7116_p1() {
    tmp_171_cast_fu_7116_p1 = esl_zext<64,15>(tmp_171_fu_7110_p2.read());
}

void gemvm_quant::thread_tmp_171_fu_7110_p2() {
    tmp_171_fu_7110_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_78.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_78));
}

void gemvm_quant::thread_tmp_172_cast_fu_7127_p1() {
    tmp_172_cast_fu_7127_p1 = esl_zext<64,15>(tmp_172_fu_7121_p2.read());
}

void gemvm_quant::thread_tmp_172_fu_7121_p2() {
    tmp_172_fu_7121_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_79.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_79));
}

void gemvm_quant::thread_tmp_173_cast_fu_7189_p1() {
    tmp_173_cast_fu_7189_p1 = esl_zext<64,15>(tmp_173_fu_7183_p2.read());
}

void gemvm_quant::thread_tmp_173_fu_7183_p2() {
    tmp_173_fu_7183_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_7A.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_7A));
}

void gemvm_quant::thread_tmp_174_cast_fu_3517_p1() {
    tmp_174_cast_fu_3517_p1 = esl_zext<64,15>(tmp_174_fu_3511_p2.read());
}

void gemvm_quant::thread_tmp_174_fu_3511_p2() {
    tmp_174_fu_3511_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_7B.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_7B));
}

void gemvm_quant::thread_tmp_175_cast_fu_3528_p1() {
    tmp_175_cast_fu_3528_p1 = esl_zext<64,15>(tmp_175_fu_3522_p2.read());
}

void gemvm_quant::thread_tmp_175_fu_3522_p2() {
    tmp_175_fu_3522_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_7C.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_7C));
}

void gemvm_quant::thread_tmp_176_cast_fu_3588_p1() {
    tmp_176_cast_fu_3588_p1 = esl_zext<64,15>(tmp_176_fu_3582_p2.read());
}

void gemvm_quant::thread_tmp_176_fu_3582_p2() {
    tmp_176_fu_3582_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_7D.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_7D));
}

void gemvm_quant::thread_tmp_177_cast_fu_7200_p1() {
    tmp_177_cast_fu_7200_p1 = esl_zext<64,15>(tmp_177_fu_7194_p2.read());
}

void gemvm_quant::thread_tmp_177_fu_7194_p2() {
    tmp_177_fu_7194_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_7E.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_7E));
}

void gemvm_quant::thread_tmp_178_cast_fu_7256_p1() {
    tmp_178_cast_fu_7256_p1 = esl_zext<64,15>(tmp_178_fu_7250_p2.read());
}

void gemvm_quant::thread_tmp_178_fu_7250_p2() {
    tmp_178_fu_7250_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_7F.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_7F));
}

void gemvm_quant::thread_tmp_179_cast_fu_7267_p1() {
    tmp_179_cast_fu_7267_p1 = esl_zext<64,15>(tmp_179_fu_7261_p2.read());
}

void gemvm_quant::thread_tmp_179_fu_7261_p2() {
    tmp_179_fu_7261_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_80.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_80));
}

void gemvm_quant::thread_tmp_180_cast_fu_7314_p1() {
    tmp_180_cast_fu_7314_p1 = esl_zext<64,15>(tmp_180_fu_7308_p2.read());
}

void gemvm_quant::thread_tmp_180_fu_7308_p2() {
    tmp_180_fu_7308_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_81.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_81));
}

void gemvm_quant::thread_tmp_181_cast_fu_7325_p1() {
    tmp_181_cast_fu_7325_p1 = esl_zext<64,15>(tmp_181_fu_7319_p2.read());
}

void gemvm_quant::thread_tmp_181_fu_7319_p2() {
    tmp_181_fu_7319_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_82.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_82));
}

void gemvm_quant::thread_tmp_182_cast_fu_7387_p1() {
    tmp_182_cast_fu_7387_p1 = esl_zext<64,15>(tmp_182_fu_7381_p2.read());
}

void gemvm_quant::thread_tmp_182_fu_7381_p2() {
    tmp_182_fu_7381_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_83.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_83));
}

void gemvm_quant::thread_tmp_183_cast_fu_7398_p1() {
    tmp_183_cast_fu_7398_p1 = esl_zext<64,15>(tmp_183_fu_7392_p2.read());
}

void gemvm_quant::thread_tmp_183_fu_7392_p2() {
    tmp_183_fu_7392_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_84.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_84));
}

void gemvm_quant::thread_tmp_184_cast_fu_3599_p1() {
    tmp_184_cast_fu_3599_p1 = esl_zext<64,15>(tmp_184_fu_3593_p2.read());
}

void gemvm_quant::thread_tmp_184_fu_3593_p2() {
    tmp_184_fu_3593_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_85.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_85));
}

void gemvm_quant::thread_tmp_185_cast_fu_3659_p1() {
    tmp_185_cast_fu_3659_p1 = esl_zext<64,15>(tmp_185_fu_3653_p2.read());
}

void gemvm_quant::thread_tmp_185_fu_3653_p2() {
    tmp_185_fu_3653_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_86.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_86));
}

void gemvm_quant::thread_tmp_186_cast_fu_3670_p1() {
    tmp_186_cast_fu_3670_p1 = esl_zext<64,15>(tmp_186_fu_3664_p2.read());
}

void gemvm_quant::thread_tmp_186_fu_3664_p2() {
    tmp_186_fu_3664_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_87.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_87));
}

void gemvm_quant::thread_tmp_187_cast_fu_7445_p1() {
    tmp_187_cast_fu_7445_p1 = esl_zext<64,15>(tmp_187_fu_7439_p2.read());
}

void gemvm_quant::thread_tmp_187_fu_7439_p2() {
    tmp_187_fu_7439_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_88.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_88));
}

void gemvm_quant::thread_tmp_188_cast_fu_7456_p1() {
    tmp_188_cast_fu_7456_p1 = esl_zext<64,15>(tmp_188_fu_7450_p2.read());
}

void gemvm_quant::thread_tmp_188_fu_7450_p2() {
    tmp_188_fu_7450_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_89.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_89));
}

void gemvm_quant::thread_tmp_189_cast_fu_3697_p1() {
    tmp_189_cast_fu_3697_p1 = esl_zext<64,15>(tmp_189_fu_3691_p2.read());
}

void gemvm_quant::thread_tmp_189_fu_3691_p2() {
    tmp_189_fu_3691_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_8A.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_8A));
}

void gemvm_quant::thread_tmp_190_cast_fu_3708_p1() {
    tmp_190_cast_fu_3708_p1 = esl_zext<64,15>(tmp_190_fu_3702_p2.read());
}

void gemvm_quant::thread_tmp_190_fu_3702_p2() {
    tmp_190_fu_3702_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_8B.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_8B));
}

void gemvm_quant::thread_tmp_191_cast_fu_3768_p1() {
    tmp_191_cast_fu_3768_p1 = esl_zext<64,15>(tmp_191_fu_3762_p2.read());
}

void gemvm_quant::thread_tmp_191_fu_3762_p2() {
    tmp_191_fu_3762_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_8C.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_8C));
}

void gemvm_quant::thread_tmp_192_cast_fu_7516_p1() {
    tmp_192_cast_fu_7516_p1 = esl_zext<64,15>(tmp_192_fu_7510_p2.read());
}

void gemvm_quant::thread_tmp_192_fu_7510_p2() {
    tmp_192_fu_7510_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_8D.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_8D));
}

void gemvm_quant::thread_tmp_193_cast_fu_7527_p1() {
    tmp_193_cast_fu_7527_p1 = esl_zext<64,15>(tmp_193_fu_7521_p2.read());
}

void gemvm_quant::thread_tmp_193_fu_7521_p2() {
    tmp_193_fu_7521_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_8E.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_8E));
}

void gemvm_quant::thread_tmp_194_cast_fu_3779_p1() {
    tmp_194_cast_fu_3779_p1 = esl_zext<64,15>(tmp_194_fu_3773_p2.read());
}

void gemvm_quant::thread_tmp_194_fu_3773_p2() {
    tmp_194_fu_3773_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_8F.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_8F));
}

void gemvm_quant::thread_tmp_195_cast_fu_3839_p1() {
    tmp_195_cast_fu_3839_p1 = esl_zext<64,15>(tmp_195_fu_3833_p2.read());
}

void gemvm_quant::thread_tmp_195_fu_3833_p2() {
    tmp_195_fu_3833_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_90.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_90));
}

void gemvm_quant::thread_tmp_196_cast_fu_3850_p1() {
    tmp_196_cast_fu_3850_p1 = esl_zext<64,15>(tmp_196_fu_3844_p2.read());
}

void gemvm_quant::thread_tmp_196_fu_3844_p2() {
    tmp_196_fu_3844_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_91.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_91));
}

void gemvm_quant::thread_tmp_197_cast_fu_7589_p1() {
    tmp_197_cast_fu_7589_p1 = esl_zext<64,15>(tmp_197_fu_7583_p2.read());
}

void gemvm_quant::thread_tmp_197_fu_7583_p2() {
    tmp_197_fu_7583_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_92.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_92));
}

void gemvm_quant::thread_tmp_198_cast_fu_7600_p1() {
    tmp_198_cast_fu_7600_p1 = esl_zext<64,15>(tmp_198_fu_7594_p2.read());
}

void gemvm_quant::thread_tmp_198_fu_7594_p2() {
    tmp_198_fu_7594_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_93.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_93));
}

void gemvm_quant::thread_tmp_199_cast_fu_3877_p1() {
    tmp_199_cast_fu_3877_p1 = esl_zext<64,15>(tmp_199_fu_3871_p2.read());
}

void gemvm_quant::thread_tmp_199_fu_3871_p2() {
    tmp_199_fu_3871_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_94.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_94));
}

void gemvm_quant::thread_tmp_200_cast_fu_3888_p1() {
    tmp_200_cast_fu_3888_p1 = esl_zext<64,15>(tmp_200_fu_3882_p2.read());
}

void gemvm_quant::thread_tmp_200_fu_3882_p2() {
    tmp_200_fu_3882_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_95.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_95));
}

void gemvm_quant::thread_tmp_201_cast_fu_3948_p1() {
    tmp_201_cast_fu_3948_p1 = esl_zext<64,15>(tmp_201_fu_3942_p2.read());
}

void gemvm_quant::thread_tmp_201_fu_3942_p2() {
    tmp_201_fu_3942_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_96.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_96));
}

void gemvm_quant::thread_tmp_202_cast_fu_3959_p1() {
    tmp_202_cast_fu_3959_p1 = esl_zext<64,15>(tmp_202_fu_3953_p2.read());
}

void gemvm_quant::thread_tmp_202_fu_3953_p2() {
    tmp_202_fu_3953_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_97.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_97));
}

void gemvm_quant::thread_tmp_203_cast_fu_4019_p1() {
    tmp_203_cast_fu_4019_p1 = esl_zext<64,15>(tmp_203_fu_4013_p2.read());
}

void gemvm_quant::thread_tmp_203_fu_4013_p2() {
    tmp_203_fu_4013_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_98.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_98));
}

void gemvm_quant::thread_tmp_204_cast_fu_4030_p1() {
    tmp_204_cast_fu_4030_p1 = esl_zext<64,15>(tmp_204_fu_4024_p2.read());
}

void gemvm_quant::thread_tmp_204_fu_4024_p2() {
    tmp_204_fu_4024_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_99.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_99));
}

void gemvm_quant::thread_tmp_205_cast_fu_4057_p1() {
    tmp_205_cast_fu_4057_p1 = esl_zext<64,15>(tmp_205_fu_4051_p2.read());
}

void gemvm_quant::thread_tmp_205_fu_4051_p2() {
    tmp_205_fu_4051_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_9A.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_9A));
}

void gemvm_quant::thread_tmp_206_cast_fu_4068_p1() {
    tmp_206_cast_fu_4068_p1 = esl_zext<64,15>(tmp_206_fu_4062_p2.read());
}

void gemvm_quant::thread_tmp_206_fu_4062_p2() {
    tmp_206_fu_4062_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_9B.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_9B));
}

void gemvm_quant::thread_tmp_215_100_fu_6761_p3() {
    tmp_215_100_fu_6761_p3 = esl_concat<23,4>(r_V_10_100_reg_11214.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_101_fu_6868_p3() {
    tmp_215_101_fu_6868_p3 = esl_concat<23,4>(r_V_10_101_reg_11219.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_102_fu_6875_p3() {
    tmp_215_102_fu_6875_p3 = esl_concat<23,4>(r_V_10_102_reg_11234.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_103_fu_6882_p3() {
    tmp_215_103_fu_6882_p3 = esl_concat<23,4>(r_V_10_103_reg_11239.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_104_fu_6889_p3() {
    tmp_215_104_fu_6889_p3 = esl_concat<23,4>(r_V_10_104_reg_11259.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_105_fu_6896_p3() {
    tmp_215_105_fu_6896_p3 = esl_concat<23,4>(r_V_10_105_reg_11264.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_106_fu_6965_p3() {
    tmp_215_106_fu_6965_p3 = esl_concat<23,4>(r_V_10_106_reg_11279.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_107_fu_6972_p3() {
    tmp_215_107_fu_6972_p3 = esl_concat<23,4>(r_V_10_107_reg_11284.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_108_fu_7061_p3() {
    tmp_215_108_fu_7061_p3 = esl_concat<23,4>(r_V_10_108_reg_11304.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_109_fu_7068_p3() {
    tmp_215_109_fu_7068_p3 = esl_concat<23,4>(r_V_10_109_reg_11309.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_10_fu_4452_p3() {
    tmp_215_10_fu_4452_p3 = esl_concat<23,4>(r_V_10_10_reg_10339.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_110_fu_7075_p3() {
    tmp_215_110_fu_7075_p3 = esl_concat<23,4>(r_V_10_110_reg_11329.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_111_fu_7132_p3() {
    tmp_215_111_fu_7132_p3 = esl_concat<23,4>(r_V_10_111_reg_11334.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_112_fu_7139_p3() {
    tmp_215_112_fu_7139_p3 = esl_concat<23,4>(r_V_10_112_reg_11349.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_113_fu_3604_p3() {
    tmp_215_113_fu_3604_p3 = esl_concat<23,4>(r_V_10_113_reg_10019.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_114_fu_3611_p3() {
    tmp_215_114_fu_3611_p3 = esl_concat<23,4>(r_V_10_114_reg_10034.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_115_fu_3618_p3() {
    tmp_215_115_fu_3618_p3 = esl_concat<23,4>(r_V_10_115_reg_10039.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_116_fu_7205_p3() {
    tmp_215_116_fu_7205_p3 = esl_concat<23,4>(r_V_10_116_reg_11354.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_117_fu_7212_p3() {
    tmp_215_117_fu_7212_p3 = esl_concat<23,4>(r_V_10_117_reg_11374.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_118_fu_7272_p3() {
    tmp_215_118_fu_7272_p3 = esl_concat<23,4>(r_V_10_118_reg_11379.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_119_fu_7279_p3() {
    tmp_215_119_fu_7279_p3 = esl_concat<23,4>(r_V_10_119_reg_11399.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_11_fu_4459_p3() {
    tmp_215_11_fu_4459_p3 = esl_concat<23,4>(r_V_10_11_reg_10354.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_120_fu_7330_p3() {
    tmp_215_120_fu_7330_p3 = esl_concat<23,4>(r_V_10_120_reg_11404.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_121_fu_7337_p3() {
    tmp_215_121_fu_7337_p3 = esl_concat<23,4>(r_V_10_121_reg_11429.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_122_fu_3713_p3() {
    tmp_215_122_fu_3713_p3 = esl_concat<23,4>(r_V_10_122_reg_10059.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_123_fu_3720_p3() {
    tmp_215_123_fu_3720_p3 = esl_concat<23,4>(r_V_10_123_reg_10064.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_124_fu_3727_p3() {
    tmp_215_124_fu_3727_p3 = esl_concat<23,4>(r_V_10_124_reg_10084.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_125_fu_7403_p3() {
    tmp_215_125_fu_7403_p3 = esl_concat<23,4>(r_V_10_125_reg_11434.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_126_fu_7410_p3() {
    tmp_215_126_fu_7410_p3 = esl_concat<23,4>(r_V_10_126_reg_11454.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_127_fu_7461_p3() {
    tmp_215_127_fu_7461_p3 = esl_concat<23,4>(r_V_10_127_reg_11459.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_128_fu_7468_p3() {
    tmp_215_128_fu_7468_p3 = esl_concat<23,4>(r_V_10_128_reg_11479.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_129_fu_7475_p3() {
    tmp_215_129_fu_7475_p3 = esl_concat<23,4>(r_V_10_129_reg_11484.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_12_fu_4466_p3() {
    tmp_215_12_fu_4466_p3 = esl_concat<23,4>(r_V_10_12_reg_10359.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_130_fu_7532_p3() {
    tmp_215_130_fu_7532_p3 = esl_concat<23,4>(r_V_10_130_reg_11504.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_131_fu_7539_p3() {
    tmp_215_131_fu_7539_p3 = esl_concat<23,4>(r_V_10_131_reg_11509.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_132_fu_3784_p3() {
    tmp_215_132_fu_3784_p3 = esl_concat<23,4>(r_V_10_132_reg_10089.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_133_fu_3791_p3() {
    tmp_215_133_fu_3791_p3 = esl_concat<23,4>(r_V_10_133_reg_10104.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_134_fu_3798_p3() {
    tmp_215_134_fu_3798_p3 = esl_concat<23,4>(r_V_10_134_reg_10109.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_135_fu_7605_p3() {
    tmp_215_135_fu_7605_p3 = esl_concat<23,4>(r_V_10_135_reg_11529.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_136_fu_7612_p3() {
    tmp_215_136_fu_7612_p3 = esl_concat<23,4>(r_V_10_136_reg_11534.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_137_fu_3893_p3() {
    tmp_215_137_fu_3893_p3 = esl_concat<23,4>(r_V_10_137_reg_10129.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_138_fu_3900_p3() {
    tmp_215_138_fu_3900_p3 = esl_concat<23,4>(r_V_10_138_reg_10134.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_139_fu_3907_p3() {
    tmp_215_139_fu_3907_p3 = esl_concat<23,4>(r_V_10_139_reg_10154.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_13_fu_4599_p3() {
    tmp_215_13_fu_4599_p3 = esl_concat<23,4>(r_V_10_13_reg_10379.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_140_fu_7657_p3() {
    tmp_215_140_fu_7657_p3 = esl_concat<23,4>(r_V_10_140_reg_11554.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_141_fu_7664_p3() {
    tmp_215_141_fu_7664_p3 = esl_concat<23,4>(r_V_10_141_reg_11559.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_142_fu_3964_p3() {
    tmp_215_142_fu_3964_p3 = esl_concat<23,4>(r_V_10_142_reg_10159.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_143_fu_3971_p3() {
    tmp_215_143_fu_3971_p3 = esl_concat<23,4>(r_V_10_143_reg_10174.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_144_fu_3978_p3() {
    tmp_215_144_fu_3978_p3 = esl_concat<23,4>(r_V_10_144_reg_10179.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_145_fu_7736_p3() {
    tmp_215_145_fu_7736_p3 = esl_concat<23,4>(r_V_10_145_reg_11579.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_146_fu_7743_p3() {
    tmp_215_146_fu_7743_p3 = esl_concat<23,4>(r_V_10_146_reg_11584.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_147_fu_4073_p3() {
    tmp_215_147_fu_4073_p3 = esl_concat<23,4>(r_V_10_147_reg_10199.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_148_fu_4080_p3() {
    tmp_215_148_fu_4080_p3 = esl_concat<23,4>(r_V_10_148_reg_10204.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_149_fu_4087_p3() {
    tmp_215_149_fu_4087_p3 = esl_concat<23,4>(r_V_10_149_reg_10224.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_14_fu_4606_p3() {
    tmp_215_14_fu_4606_p3 = esl_concat<23,4>(r_V_10_14_reg_10384.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_150_fu_4198_p3() {
    tmp_215_150_fu_4198_p3 = esl_concat<23,4>(r_V_10_150_reg_10229.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_151_fu_4205_p3() {
    tmp_215_151_fu_4205_p3 = esl_concat<23,4>(r_V_10_151_reg_10244.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_152_fu_4212_p3() {
    tmp_215_152_fu_4212_p3 = esl_concat<23,4>(r_V_10_152_reg_10249.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_153_fu_4219_p3() {
    tmp_215_153_fu_4219_p3 = esl_concat<23,4>(r_V_10_153_reg_10269.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_154_fu_4226_p3() {
    tmp_215_154_fu_4226_p3 = esl_concat<23,4>(r_V_10_154_reg_10274.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_15_fu_4613_p3() {
    tmp_215_15_fu_4613_p3 = esl_concat<23,4>(r_V_10_15_reg_10404.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_16_fu_4620_p3() {
    tmp_215_16_fu_4620_p3 = esl_concat<23,4>(r_V_10_16_reg_10409.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_17_fu_4627_p3() {
    tmp_215_17_fu_4627_p3 = esl_concat<23,4>(r_V_10_17_reg_10424.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_18_fu_4734_p3() {
    tmp_215_18_fu_4734_p3 = esl_concat<23,4>(r_V_10_18_reg_10429.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_19_fu_4741_p3() {
    tmp_215_19_fu_4741_p3 = esl_concat<23,4>(r_V_10_19_reg_10444.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_1_fu_7805_p3() {
    tmp_215_1_fu_7805_p3 = esl_concat<23,4>(r_V_10_1_reg_11609.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_20_fu_4748_p3() {
    tmp_215_20_fu_4748_p3 = esl_concat<23,4>(r_V_10_20_reg_10449.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_21_fu_4755_p3() {
    tmp_215_21_fu_4755_p3 = esl_concat<23,4>(r_V_10_21_reg_10469.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_22_fu_4762_p3() {
    tmp_215_22_fu_4762_p3 = esl_concat<23,4>(r_V_10_22_reg_10474.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_23_fu_4907_p3() {
    tmp_215_23_fu_4907_p3 = esl_concat<23,4>(r_V_10_23_reg_10489.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_24_fu_4914_p3() {
    tmp_215_24_fu_4914_p3 = esl_concat<23,4>(r_V_10_24_reg_10494.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_25_fu_4921_p3() {
    tmp_215_25_fu_4921_p3 = esl_concat<23,4>(r_V_10_25_reg_10514.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_26_fu_4928_p3() {
    tmp_215_26_fu_4928_p3 = esl_concat<23,4>(r_V_10_26_reg_10519.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_27_fu_4935_p3() {
    tmp_215_27_fu_4935_p3 = esl_concat<23,4>(r_V_10_27_reg_10534.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_28_fu_5004_p3() {
    tmp_215_28_fu_5004_p3 = esl_concat<23,4>(r_V_10_28_reg_10539.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_29_fu_5011_p3() {
    tmp_215_29_fu_5011_p3 = esl_concat<23,4>(r_V_10_29_reg_10554.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_2_fu_7875_p3() {
    tmp_215_2_fu_7875_p3 = esl_concat<23,4>(r_V_10_2_reg_11629.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_30_fu_5062_p3() {
    tmp_215_30_fu_5062_p3 = esl_concat<23,4>(r_V_10_30_reg_10559.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_31_fu_5069_p3() {
    tmp_215_31_fu_5069_p3 = esl_concat<23,4>(r_V_10_31_reg_10579.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_32_fu_5076_p3() {
    tmp_215_32_fu_5076_p3 = esl_concat<23,4>(r_V_10_32_reg_10584.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_33_fu_5133_p3() {
    tmp_215_33_fu_5133_p3 = esl_concat<23,4>(r_V_10_33_reg_10604.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_34_fu_5140_p3() {
    tmp_215_34_fu_5140_p3 = esl_concat<23,4>(r_V_10_34_reg_10609.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_35_fu_3353_p3() {
    tmp_215_35_fu_3353_p3 = esl_concat<23,4>(r_V_10_35_reg_9924.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_36_fu_3360_p3() {
    tmp_215_36_fu_3360_p3 = esl_concat<23,4>(r_V_10_36_reg_9929.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_37_fu_3367_p3() {
    tmp_215_37_fu_3367_p3 = esl_concat<23,4>(r_V_10_37_reg_9944.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_38_fu_8027_p3() {
    tmp_215_38_fu_8027_p3 = esl_concat<23,4>(r_V_10_38_reg_11684.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_39_fu_8034_p3() {
    tmp_215_39_fu_8034_p3 = esl_concat<23,4>(r_V_10_39_reg_11689.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_3_fu_7882_p3() {
    tmp_215_3_fu_7882_p3 = esl_concat<23,4>(r_V_10_3_reg_11634.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_40_fu_8063_p3() {
    tmp_215_40_fu_8063_p3 = esl_concat<23,4>(r_V_10_40_reg_11714.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_41_fu_8070_p3() {
    tmp_215_41_fu_8070_p3 = esl_concat<23,4>(r_V_10_41_reg_11719.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_42_fu_5291_p3() {
    tmp_215_42_fu_5291_p3 = esl_concat<23,4>(r_V_10_42_reg_10629.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_43_fu_5298_p3() {
    tmp_215_43_fu_5298_p3 = esl_concat<23,4>(r_V_10_43_reg_10634.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_44_fu_5305_p3() {
    tmp_215_44_fu_5305_p3 = esl_concat<23,4>(r_V_10_44_reg_10654.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_45_fu_5312_p3() {
    tmp_215_45_fu_5312_p3 = esl_concat<23,4>(r_V_10_45_reg_10659.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_46_fu_5319_p3() {
    tmp_215_46_fu_5319_p3 = esl_concat<23,4>(r_V_10_46_reg_10679.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_47_fu_8109_p3() {
    tmp_215_47_fu_8109_p3 = esl_concat<23,4>(r_V_10_47_reg_11729.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_48_fu_8116_p3() {
    tmp_215_48_fu_8116_p3 = esl_concat<23,4>(r_V_10_48_reg_11734.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_49_fu_5388_p3() {
    tmp_215_49_fu_5388_p3 = esl_concat<23,4>(r_V_10_49_reg_10684.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_4_fu_4355_p3() {
    tmp_215_4_fu_4355_p3 = esl_concat<23,4>(r_V_10_4_reg_10289.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_50_fu_5395_p3() {
    tmp_215_50_fu_5395_p3 = esl_concat<23,4>(r_V_10_50_reg_10699.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_51_fu_5402_p3() {
    tmp_215_51_fu_5402_p3 = esl_concat<23,4>(r_V_10_51_reg_10704.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_52_fu_5535_p3() {
    tmp_215_52_fu_5535_p3 = esl_concat<23,4>(r_V_10_52_reg_10724.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_53_fu_5542_p3() {
    tmp_215_53_fu_5542_p3 = esl_concat<23,4>(r_V_10_53_reg_10729.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_54_fu_5549_p3() {
    tmp_215_54_fu_5549_p3 = esl_concat<23,4>(r_V_10_54_reg_10749.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_55_fu_5556_p3() {
    tmp_215_55_fu_5556_p3 = esl_concat<23,4>(r_V_10_55_reg_10754.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_56_fu_5563_p3() {
    tmp_215_56_fu_5563_p3 = esl_concat<23,4>(r_V_10_56_reg_10769.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_57_fu_5670_p3() {
    tmp_215_57_fu_5670_p3 = esl_concat<23,4>(r_V_10_57_reg_10774.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_58_fu_5677_p3() {
    tmp_215_58_fu_5677_p3 = esl_concat<23,4>(r_V_10_58_reg_10789.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_59_fu_5684_p3() {
    tmp_215_59_fu_5684_p3 = esl_concat<23,4>(r_V_10_59_reg_10794.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_5_fu_4362_p3() {
    tmp_215_5_fu_4362_p3 = esl_concat<23,4>(r_V_10_5_reg_10294.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_60_fu_5691_p3() {
    tmp_215_60_fu_5691_p3 = esl_concat<23,4>(r_V_10_60_reg_10814.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_61_fu_5698_p3() {
    tmp_215_61_fu_5698_p3 = esl_concat<23,4>(r_V_10_61_reg_10819.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_62_fu_5843_p3() {
    tmp_215_62_fu_5843_p3 = esl_concat<23,4>(r_V_10_62_reg_10834.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_63_fu_5850_p3() {
    tmp_215_63_fu_5850_p3 = esl_concat<23,4>(r_V_10_63_reg_10839.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_64_fu_5857_p3() {
    tmp_215_64_fu_5857_p3 = esl_concat<23,4>(r_V_10_64_reg_10859.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_65_fu_5864_p3() {
    tmp_215_65_fu_5864_p3 = esl_concat<23,4>(r_V_10_65_reg_10864.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_66_fu_5871_p3() {
    tmp_215_66_fu_5871_p3 = esl_concat<23,4>(r_V_10_66_reg_10879.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_67_fu_5940_p3() {
    tmp_215_67_fu_5940_p3 = esl_concat<23,4>(r_V_10_67_reg_10884.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_68_fu_5947_p3() {
    tmp_215_68_fu_5947_p3 = esl_concat<23,4>(r_V_10_68_reg_10899.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_69_fu_5998_p3() {
    tmp_215_69_fu_5998_p3 = esl_concat<23,4>(r_V_10_69_reg_10904.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_6_fu_4369_p3() {
    tmp_215_6_fu_4369_p3 = esl_concat<23,4>(r_V_10_6_reg_10314.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_70_fu_6005_p3() {
    tmp_215_70_fu_6005_p3 = esl_concat<23,4>(r_V_10_70_reg_10924.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_71_fu_6012_p3() {
    tmp_215_71_fu_6012_p3 = esl_concat<23,4>(r_V_10_71_reg_10929.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_72_fu_6069_p3() {
    tmp_215_72_fu_6069_p3 = esl_concat<23,4>(r_V_10_72_reg_10949.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_73_fu_6076_p3() {
    tmp_215_73_fu_6076_p3 = esl_concat<23,4>(r_V_10_73_reg_10954.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_74_fu_3424_p3() {
    tmp_215_74_fu_3424_p3 = esl_concat<23,4>(r_V_10_74_reg_9949.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_75_fu_3431_p3() {
    tmp_215_75_fu_3431_p3 = esl_concat<23,4>(r_V_10_75_reg_9964.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_76_fu_3438_p3() {
    tmp_215_76_fu_3438_p3 = esl_concat<23,4>(r_V_10_76_reg_9969.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_77_fu_6189_p3() {
    tmp_215_77_fu_6189_p3 = esl_concat<23,4>(r_V_10_77_reg_10974.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_78_fu_6196_p3() {
    tmp_215_78_fu_6196_p3 = esl_concat<23,4>(r_V_10_78_reg_10979.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_79_fu_6203_p3() {
    tmp_215_79_fu_6203_p3 = esl_concat<23,4>(r_V_10_79_reg_10999.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_7_fu_4376_p3() {
    tmp_215_7_fu_4376_p3 = esl_concat<23,4>(r_V_10_7_reg_10319.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_80_fu_6210_p3() {
    tmp_215_80_fu_6210_p3 = esl_concat<23,4>(r_V_10_80_reg_11004.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_81_fu_6349_p3() {
    tmp_215_81_fu_6349_p3 = esl_concat<23,4>(r_V_10_81_reg_11024.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_82_fu_6356_p3() {
    tmp_215_82_fu_6356_p3 = esl_concat<23,4>(r_V_10_82_reg_11029.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_83_fu_6363_p3() {
    tmp_215_83_fu_6363_p3 = esl_concat<23,4>(r_V_10_83_reg_11049.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_84_fu_6370_p3() {
    tmp_215_84_fu_6370_p3 = esl_concat<23,4>(r_V_10_84_reg_11054.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_85_fu_6377_p3() {
    tmp_215_85_fu_6377_p3 = esl_concat<23,4>(r_V_10_85_reg_11069.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_86_fu_6446_p3() {
    tmp_215_86_fu_6446_p3 = esl_concat<23,4>(r_V_10_86_reg_11074.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_87_fu_6453_p3() {
    tmp_215_87_fu_6453_p3 = esl_concat<23,4>(r_V_10_87_reg_11089.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_88_fu_6504_p3() {
    tmp_215_88_fu_6504_p3 = esl_concat<23,4>(r_V_10_88_reg_11094.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_89_fu_6511_p3() {
    tmp_215_89_fu_6511_p3 = esl_concat<23,4>(r_V_10_89_reg_11114.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_8_fu_4383_p3() {
    tmp_215_8_fu_4383_p3 = esl_concat<23,4>(r_V_10_8_reg_10334.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_90_fu_6518_p3() {
    tmp_215_90_fu_6518_p3 = esl_concat<23,4>(r_V_10_90_reg_11119.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_91_fu_6575_p3() {
    tmp_215_91_fu_6575_p3 = esl_concat<23,4>(r_V_10_91_reg_11139.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_92_fu_6582_p3() {
    tmp_215_92_fu_6582_p3 = esl_concat<23,4>(r_V_10_92_reg_11144.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_93_fu_3533_p3() {
    tmp_215_93_fu_3533_p3 = esl_concat<23,4>(r_V_10_93_reg_9989.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_94_fu_3540_p3() {
    tmp_215_94_fu_3540_p3 = esl_concat<23,4>(r_V_10_94_reg_9994.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_95_fu_3547_p3() {
    tmp_215_95_fu_3547_p3 = esl_concat<23,4>(r_V_10_95_reg_10014.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_96_fu_6733_p3() {
    tmp_215_96_fu_6733_p3 = esl_concat<23,4>(r_V_10_96_reg_11164.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_97_fu_6740_p3() {
    tmp_215_97_fu_6740_p3 = esl_concat<23,4>(r_V_10_97_reg_11169.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_98_fu_6747_p3() {
    tmp_215_98_fu_6747_p3 = esl_concat<23,4>(r_V_10_98_reg_11189.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_99_fu_6754_p3() {
    tmp_215_99_fu_6754_p3 = esl_concat<23,4>(r_V_10_99_reg_11194.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_9_fu_7943_p3() {
    tmp_215_9_fu_7943_p3 = esl_concat<23,4>(r_V_10_9_reg_11659.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_fu_7798_p3() {
    tmp_215_fu_7798_p3 = esl_concat<23,4>(r_V_10_reg_11604.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_215_s_fu_7950_p3() {
    tmp_215_s_fu_7950_p3 = esl_concat<23,4>(r_V_10_s_reg_11664.read(), ap_const_lv4_0);
}

void gemvm_quant::thread_tmp_51_cast_fu_7652_p1() {
    tmp_51_cast_fu_7652_p1 = esl_zext<64,15>(tmp_51_fu_7646_p2.read());
}

void gemvm_quant::thread_tmp_51_fu_7646_p2() {
    tmp_51_fu_7646_p2 = (phi_mul_reg_3205.read() | ap_const_lv15_1);
}

void gemvm_quant::thread_tmp_52_cast_fu_7704_p1() {
    tmp_52_cast_fu_7704_p1 = esl_zext<64,15>(tmp_52_fu_7698_p2.read());
}

void gemvm_quant::thread_tmp_52_fu_7698_p2() {
    tmp_52_fu_7698_p2 = (phi_mul_reg_3205.read() | ap_const_lv15_2);
}

void gemvm_quant::thread_tmp_53_cast_fu_7715_p1() {
    tmp_53_cast_fu_7715_p1 = esl_zext<64,15>(tmp_53_fu_7709_p2.read());
}

void gemvm_quant::thread_tmp_53_fu_7709_p2() {
    tmp_53_fu_7709_p2 = (phi_mul_reg_3205.read() | ap_const_lv15_3);
}

void gemvm_quant::thread_tmp_54_cast_fu_4128_p1() {
    tmp_54_cast_fu_4128_p1 = esl_zext<64,15>(tmp_54_fu_4122_p2.read());
}

void gemvm_quant::thread_tmp_54_fu_4122_p2() {
    tmp_54_fu_4122_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_4.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_4));
}

void gemvm_quant::thread_tmp_55_cast_fu_4139_p1() {
    tmp_55_cast_fu_4139_p1 = esl_zext<64,15>(tmp_55_fu_4133_p2.read());
}

void gemvm_quant::thread_tmp_55_fu_4133_p2() {
    tmp_55_fu_4133_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_5.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_5));
}

void gemvm_quant::thread_tmp_56_cast_fu_4166_p1() {
    tmp_56_cast_fu_4166_p1 = esl_zext<64,15>(tmp_56_fu_4160_p2.read());
}

void gemvm_quant::thread_tmp_56_fu_4160_p2() {
    tmp_56_fu_4160_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_6.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_6));
}

void gemvm_quant::thread_tmp_57_cast_fu_4177_p1() {
    tmp_57_cast_fu_4177_p1 = esl_zext<64,15>(tmp_57_fu_4171_p2.read());
}

void gemvm_quant::thread_tmp_57_fu_4171_p2() {
    tmp_57_fu_4171_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_7.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_7));
}

void gemvm_quant::thread_tmp_58_cast_fu_4263_p1() {
    tmp_58_cast_fu_4263_p1 = esl_zext<64,15>(tmp_58_fu_4257_p2.read());
}

void gemvm_quant::thread_tmp_58_fu_4257_p2() {
    tmp_58_fu_4257_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_8.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_8));
}

void gemvm_quant::thread_tmp_59_cast_fu_7782_p1() {
    tmp_59_cast_fu_7782_p1 = esl_zext<64,15>(tmp_59_fu_7776_p2.read());
}

void gemvm_quant::thread_tmp_59_fu_7776_p2() {
    tmp_59_fu_7776_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_9.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_9));
}

void gemvm_quant::thread_tmp_60_cast_fu_7793_p1() {
    tmp_60_cast_fu_7793_p1 = esl_zext<64,15>(tmp_60_fu_7787_p2.read());
}

void gemvm_quant::thread_tmp_60_fu_7787_p2() {
    tmp_60_fu_7787_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_A.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_A));
}

void gemvm_quant::thread_tmp_61_cast_fu_4274_p1() {
    tmp_61_cast_fu_4274_p1 = esl_zext<64,15>(tmp_61_fu_4268_p2.read());
}

void gemvm_quant::thread_tmp_61_fu_4268_p2() {
    tmp_61_fu_4268_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_B.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_B));
}

void gemvm_quant::thread_tmp_62_cast_fu_4301_p1() {
    tmp_62_cast_fu_4301_p1 = esl_zext<64,15>(tmp_62_fu_4295_p2.read());
}

void gemvm_quant::thread_tmp_62_fu_4295_p2() {
    tmp_62_fu_4295_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_C.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_C));
}

void gemvm_quant::thread_tmp_63_cast_fu_4312_p1() {
    tmp_63_cast_fu_4312_p1 = esl_zext<64,15>(tmp_63_fu_4306_p2.read());
}

void gemvm_quant::thread_tmp_63_fu_4306_p2() {
    tmp_63_fu_4306_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_D.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_D));
}

void gemvm_quant::thread_tmp_64_cast_fu_4339_p1() {
    tmp_64_cast_fu_4339_p1 = esl_zext<64,15>(tmp_64_fu_4333_p2.read());
}

void gemvm_quant::thread_tmp_64_fu_4333_p2() {
    tmp_64_fu_4333_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_E.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_E));
}

void gemvm_quant::thread_tmp_65_cast_fu_4350_p1() {
    tmp_65_cast_fu_4350_p1 = esl_zext<64,15>(tmp_65_fu_4344_p2.read());
}

void gemvm_quant::thread_tmp_65_fu_4344_p2() {
    tmp_65_fu_4344_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_F.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_F));
}

void gemvm_quant::thread_tmp_66_cast_fu_4436_p1() {
    tmp_66_cast_fu_4436_p1 = esl_zext<64,15>(tmp_66_fu_4430_p2.read());
}

void gemvm_quant::thread_tmp_66_fu_4430_p2() {
    tmp_66_fu_4430_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_10.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_10));
}

void gemvm_quant::thread_tmp_67_cast_fu_4447_p1() {
    tmp_67_cast_fu_4447_p1 = esl_zext<64,15>(tmp_67_fu_4441_p2.read());
}

void gemvm_quant::thread_tmp_67_fu_4441_p2() {
    tmp_67_fu_4441_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_11.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_11));
}

void gemvm_quant::thread_tmp_68_cast_fu_4507_p1() {
    tmp_68_cast_fu_4507_p1 = esl_zext<64,15>(tmp_68_fu_4501_p2.read());
}

void gemvm_quant::thread_tmp_68_fu_4501_p2() {
    tmp_68_fu_4501_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_12.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_12));
}

void gemvm_quant::thread_tmp_69_cast_fu_4518_p1() {
    tmp_69_cast_fu_4518_p1 = esl_zext<64,15>(tmp_69_fu_4512_p2.read());
}

void gemvm_quant::thread_tmp_69_fu_4512_p2() {
    tmp_69_fu_4512_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_13.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_13));
}

void gemvm_quant::thread_tmp_70_cast_fu_4545_p1() {
    tmp_70_cast_fu_4545_p1 = esl_zext<64,15>(tmp_70_fu_4539_p2.read());
}

void gemvm_quant::thread_tmp_70_fu_4539_p2() {
    tmp_70_fu_4539_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_14.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_14));
}

void gemvm_quant::thread_tmp_71_cast_fu_4556_p1() {
    tmp_71_cast_fu_4556_p1 = esl_zext<64,15>(tmp_71_fu_4550_p2.read());
}

void gemvm_quant::thread_tmp_71_fu_4550_p2() {
    tmp_71_fu_4550_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_15.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_15));
}

void gemvm_quant::thread_tmp_72_cast_fu_4583_p1() {
    tmp_72_cast_fu_4583_p1 = esl_zext<64,15>(tmp_72_fu_4577_p2.read());
}

void gemvm_quant::thread_tmp_72_fu_4577_p2() {
    tmp_72_fu_4577_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_16.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_16));
}

void gemvm_quant::thread_tmp_73_cast_fu_4594_p1() {
    tmp_73_cast_fu_4594_p1 = esl_zext<64,15>(tmp_73_fu_4588_p2.read());
}

void gemvm_quant::thread_tmp_73_fu_4588_p2() {
    tmp_73_fu_4588_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_17.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_17));
}

void gemvm_quant::thread_tmp_74_cast_fu_4680_p1() {
    tmp_74_cast_fu_4680_p1 = esl_zext<64,15>(tmp_74_fu_4674_p2.read());
}

void gemvm_quant::thread_tmp_74_fu_4674_p2() {
    tmp_74_fu_4674_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_18.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_18));
}

void gemvm_quant::thread_tmp_75_cast_fu_4691_p1() {
    tmp_75_cast_fu_4691_p1 = esl_zext<64,15>(tmp_75_fu_4685_p2.read());
}

void gemvm_quant::thread_tmp_75_fu_4685_p2() {
    tmp_75_fu_4685_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_19.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_19));
}

void gemvm_quant::thread_tmp_76_cast_fu_4718_p1() {
    tmp_76_cast_fu_4718_p1 = esl_zext<64,15>(tmp_76_fu_4712_p2.read());
}

void gemvm_quant::thread_tmp_76_fu_4712_p2() {
    tmp_76_fu_4712_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_1A.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_1A));
}

void gemvm_quant::thread_tmp_77_cast_fu_4729_p1() {
    tmp_77_cast_fu_4729_p1 = esl_zext<64,15>(tmp_77_fu_4723_p2.read());
}

void gemvm_quant::thread_tmp_77_fu_4723_p2() {
    tmp_77_fu_4723_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_1B.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_1B));
}

void gemvm_quant::thread_tmp_78_cast_fu_4815_p1() {
    tmp_78_cast_fu_4815_p1 = esl_zext<64,15>(tmp_78_fu_4809_p2.read());
}

void gemvm_quant::thread_tmp_78_fu_4809_p2() {
    tmp_78_fu_4809_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_1C.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_1C));
}

void gemvm_quant::thread_tmp_79_cast_fu_4826_p1() {
    tmp_79_cast_fu_4826_p1 = esl_zext<64,15>(tmp_79_fu_4820_p2.read());
}

void gemvm_quant::thread_tmp_79_fu_4820_p2() {
    tmp_79_fu_4820_p2 = (!phi_mul_reg_3205.read().is_01() || !ap_const_lv15_1D.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_3205.read()) + sc_biguint<15>(ap_const_lv15_1D));
}

}

