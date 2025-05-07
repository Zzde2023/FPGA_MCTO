#include "lstm_backward.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void lstm_backward::thread_o_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_3_V_d1 = tmp_171_10_i_reg_19795.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_3_V_d1 = tmp_171_34_i_reg_20015.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_3_V_d1 = tmp_171_3_i_reg_19495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_3_V_d1 = tmp_171_42_i_reg_18690.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_3_V_d1 = ap_const_lv16_140;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_3_V_d1 = ap_const_lv16_E0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_3_V_d1 = ap_const_lv16_F0;
    } else {
        o_3_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_o_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_fu_7207_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_i_reg_17557_pp0_iter1_reg.read())))) {
        o_3_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_3_V_we0 = grp_sigmoid_fu_6989_res_3_V_we0.read();
    } else {
        o_3_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_fu_7207_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_i_reg_17557_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_i_reg_17557_pp0_iter1_reg.read())))) {
        o_3_V_we1 = ap_const_logic_1;
    } else {
        o_3_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        o_4_V_address0 =  (sc_lv<3>) (newIndex11_i_reg_20040.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        o_4_V_address0 =  (sc_lv<3>) (ap_const_lv64_1);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        o_4_V_address0 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_4_V_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        o_4_V_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)))) {
        o_4_V_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_4_V_address0 = grp_sigmoid_fu_6989_res_4_V_address0.read();
    } else {
        o_4_V_address0 = "XXX";
    }
}

void lstm_backward::thread_o_4_V_address1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        o_4_V_address1 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        o_4_V_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)))) {
        o_4_V_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)))) {
        o_4_V_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        o_4_V_address1 = "XXX";
    }
}

void lstm_backward::thread_o_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        o_4_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_4_V_ce0 = grp_sigmoid_fu_6989_res_4_V_ce0.read();
    } else {
        o_4_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_4_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        o_4_V_ce1 = ap_const_logic_1;
    } else {
        o_4_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_4_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_4_V_d0 = tmp_171_4_i_reg_19775.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_4_V_d0 = grp_fu_13956_p3.read().range(22, 7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_4_V_d0 = ap_const_lv16_1A0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_4_V_d0 = ap_const_lv16_220;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_4_V_d0 = ap_const_lv16_D0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_4_V_d0 = grp_sigmoid_fu_6989_res_4_V_d0.read();
    } else {
        o_4_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_o_4_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_4_V_d1 = tmp_171_11_i_reg_19915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        o_4_V_d1 = tmp_171_43_i_reg_19870.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        o_4_V_d1 = tmp_171_27_i_reg_19255.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_4_V_d1 = tmp_171_35_i_reg_19010.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_4_V_d1 = ap_const_lv16_240;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_4_V_d1 = ap_const_lv16_140;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_4_V_d1 = ap_const_lv16_110;
    } else {
        o_4_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_o_4_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_fu_7207_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_i_reg_17557_pp0_iter1_reg.read())))) {
        o_4_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_4_V_we0 = grp_sigmoid_fu_6989_res_4_V_we0.read();
    } else {
        o_4_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_4_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_fu_7207_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_i_reg_17557_pp0_iter1_reg.read())))) {
        o_4_V_we1 = ap_const_logic_1;
    } else {
        o_4_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        o_5_V_address0 =  (sc_lv<3>) (newIndex11_i_reg_20040.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_5_V_address0 =  (sc_lv<3>) (ap_const_lv64_1);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)))) {
        o_5_V_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        o_5_V_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        o_5_V_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_5_V_address0 = grp_sigmoid_fu_6989_res_5_V_address0.read();
    } else {
        o_5_V_address0 = "XXX";
    }
}

void lstm_backward::thread_o_5_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_5_V_address1 =  (sc_lv<3>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        o_5_V_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)))) {
        o_5_V_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        o_5_V_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        o_5_V_address1 = "XXX";
    }
}

void lstm_backward::thread_o_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()))) {
        o_5_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_5_V_ce0 = grp_sigmoid_fu_6989_res_5_V_ce0.read();
    } else {
        o_5_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_5_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        o_5_V_ce1 = ap_const_logic_1;
    } else {
        o_5_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_5_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        o_5_V_d0 = tmp_171_36_i_reg_19275.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_5_V_d0 = grp_fu_14404_p3.read().range(22, 7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_5_V_d0 = ap_const_lv16_D0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_5_V_d0 = ap_const_lv16_260;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_5_V_d0 = ap_const_lv16_150;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_5_V_d0 = grp_sigmoid_fu_6989_res_5_V_d0.read();
    } else {
        o_5_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_o_5_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_5_V_d1 = tmp_171_5_i_reg_19895.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_5_V_d1 = tmp_171_28_i_reg_19595.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_5_V_d1 = tmp_171_44_i_reg_19020.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_5_V_d1 = grp_fu_13892_p3.read().range(22, 7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_5_V_d1 = ap_const_lv16_20;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_5_V_d1 = ap_const_lv16_B0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_5_V_d1 = ap_const_lv16_C0;
    } else {
        o_5_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_o_5_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_fu_7207_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        o_5_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_5_V_we0 = grp_sigmoid_fu_6989_res_5_V_we0.read();
    } else {
        o_5_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_5_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_fu_7207_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_i_reg_17557_pp0_iter1_reg.read())))) {
        o_5_V_we1 = ap_const_logic_1;
    } else {
        o_5_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        o_6_V_address0 =  (sc_lv<3>) (newIndex11_i_reg_20040.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        o_6_V_address0 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_6_V_address0 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_6_V_address0 =  (sc_lv<3>) (ap_const_lv64_1);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        o_6_V_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_6_V_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        o_6_V_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_6_V_address0 = grp_sigmoid_fu_6989_res_6_V_address0.read();
    } else {
        o_6_V_address0 = "XXX";
    }
}

void lstm_backward::thread_o_6_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_6_V_address1 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)))) {
        o_6_V_address1 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        o_6_V_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        o_6_V_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        o_6_V_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        o_6_V_address1 = "XXX";
    }
}

void lstm_backward::thread_o_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()))) {
        o_6_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_6_V_ce0 = grp_sigmoid_fu_6989_res_6_V_ce0.read();
    } else {
        o_6_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_6_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        o_6_V_ce1 = ap_const_logic_1;
    } else {
        o_6_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_6_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        o_6_V_d0 = grp_fu_14772_p3.read().range(22, 7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_6_V_d0 = tmp_171_13_i_reg_18570.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_6_V_d0 = tmp_171_6_i_reg_18230.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        o_6_V_d0 = ap_const_lv16_1D0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_6_V_d0 = ap_const_lv16_1A0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_6_V_d0 = grp_sigmoid_fu_6989_res_6_V_d0.read();
    } else {
        o_6_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_o_6_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_6_V_d1 = tmp_171_29_i_reg_19835.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_6_V_d1 = tmp_171_37_i_reg_19615.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        o_6_V_d1 = tmp_171_21_i_reg_19225.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_6_V_d1 = ap_const_lv16_1B0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        o_6_V_d1 = ap_const_lv16_120;
    } else {
        o_6_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_o_6_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_fu_7207_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        o_6_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_6_V_we0 = grp_sigmoid_fu_6989_res_6_V_we0.read();
    } else {
        o_6_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_6_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_fu_7207_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_i_reg_17557_pp0_iter1_reg.read())))) {
        o_6_V_we1 = ap_const_logic_1;
    } else {
        o_6_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        o_7_V_address0 =  (sc_lv<3>) (newIndex11_i_reg_20040.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_7_V_address0 =  (sc_lv<3>) (ap_const_lv64_1);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        o_7_V_address0 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        o_7_V_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)))) {
        o_7_V_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)))) {
        o_7_V_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_7_V_address0 = grp_sigmoid_fu_6989_res_7_V_address0.read();
    } else {
        o_7_V_address0 = "XXX";
    }
}

void lstm_backward::thread_o_7_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        o_7_V_address1 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_7_V_address1 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)))) {
        o_7_V_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        o_7_V_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        o_7_V_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        o_7_V_address1 = "XXX";
    }
}

void lstm_backward::thread_o_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()))) {
        o_7_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_7_V_ce0 = grp_sigmoid_fu_6989_res_7_V_ce0.read();
    } else {
        o_7_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_7_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        o_7_V_ce1 = ap_const_logic_1;
    } else {
        o_7_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_7_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_7_V_d0 = tmp_171_22_i_reg_19575.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_7_V_d0 = tmp_171_14_i_reg_18970.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_7_V_d0 = grp_fu_14116_p3.read().range(22, 7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_7_V_d0 = ap_const_lv16_1D0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_7_V_d0 = ap_const_lv16_3B0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_7_V_d0 = ap_const_lv16_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_7_V_d0 = grp_sigmoid_fu_6989_res_7_V_d0.read();
    } else {
        o_7_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_o_7_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_7_V_d1 = tmp_171_30_i_reg_19995.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        o_7_V_d1 = tmp_171_38_i_reg_19855.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_7_V_d1 = tmp_171_46_i_reg_19655.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_7_V_d1 = ap_const_lv16_70;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_7_V_d1 = ap_const_lv16_180;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_7_V_d1 = ap_const_lv16_A0;
    } else {
        o_7_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_o_7_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_fu_7207_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        o_7_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        o_7_V_we0 = grp_sigmoid_fu_6989_res_7_V_we0.read();
    } else {
        o_7_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_o_7_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_fu_7207_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(exitcond9_i_reg_17557.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_i_reg_17557_pp0_iter1_reg.read())))) {
        o_7_V_we1 = ap_const_logic_1;
    } else {
        o_7_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_p_1_i_fu_12299_p3() {
    p_1_i_fu_12299_p3 = (!tmp_175_1_i_fu_12287_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_175_1_i_fu_12287_p2.read()[0].to_bool())? p_Result_1_i_cast_fu_12270_p1.read(): ret_V_26_1_i_fu_12293_p2.read());
}

void lstm_backward::thread_p_Result_1_i_cast_fu_12270_p1() {
    p_Result_1_i_cast_fu_12270_p1 = esl_sext<12,11>(tmp_459_fu_12260_p4.read());
}

void lstm_backward::thread_p_Result_i_cast_fu_12102_p1() {
    p_Result_i_cast_fu_12102_p1 = esl_sext<12,11>(tmp_455_fu_12092_p4.read());
}

void lstm_backward::thread_p_Val2_74_2_i_fu_12457_p3() {
    p_Val2_74_2_i_fu_12457_p3 = (!tmp_162_2_i_fu_12418_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_162_2_i_fu_12418_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp2_fu_12451_p2.read());
}

void lstm_backward::thread_p_Val2_74_3_i_fu_12522_p3() {
    p_Val2_74_3_i_fu_12522_p3 = (!tmp_162_3_i_fu_12483_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_162_3_i_fu_12483_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp3_fu_12516_p2.read());
}

void lstm_backward::thread_p_Val2_74_4_i_fu_12587_p3() {
    p_Val2_74_4_i_fu_12587_p3 = (!tmp_162_4_i_fu_12548_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_162_4_i_fu_12548_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp4_fu_12581_p2.read());
}

void lstm_backward::thread_p_Val2_74_5_i_fu_12652_p3() {
    p_Val2_74_5_i_fu_12652_p3 = (!tmp_162_5_i_fu_12613_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_162_5_i_fu_12613_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp5_fu_12646_p2.read());
}

void lstm_backward::thread_p_Val2_74_6_i_fu_12717_p3() {
    p_Val2_74_6_i_fu_12717_p3 = (!tmp_162_6_i_fu_12678_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_162_6_i_fu_12678_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp6_fu_12711_p2.read());
}

void lstm_backward::thread_p_Val2_74_7_i_fu_12782_p3() {
    p_Val2_74_7_i_fu_12782_p3 = (!tmp_162_7_i_fu_12743_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_162_7_i_fu_12743_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp7_fu_12776_p2.read());
}

void lstm_backward::thread_p_i_fu_12131_p3() {
    p_i_fu_12131_p3 = (!tmp_175_i_fu_12119_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_175_i_fu_12119_p2.read()[0].to_bool())? p_Result_i_cast_fu_12102_p1.read(): ret_V_26_i_fu_12125_p2.read());
}

void lstm_backward::thread_p_shl8_1_cast_i_fu_12250_p1() {
    p_shl8_1_cast_i_fu_12250_p1 = esl_sext<25,16>(tmp_476_fu_12242_p3.read());
}

void lstm_backward::thread_p_shl8_2_cast_i_fu_12808_p1() {
    p_shl8_2_cast_i_fu_12808_p1 = esl_sext<25,16>(tmp_485_fu_12801_p3.read());
}

void lstm_backward::thread_p_shl8_3_cast_i_fu_12891_p1() {
    p_shl8_3_cast_i_fu_12891_p1 = esl_sext<25,16>(tmp_494_fu_12884_p3.read());
}

void lstm_backward::thread_p_shl8_4_cast_i_fu_12974_p1() {
    p_shl8_4_cast_i_fu_12974_p1 = esl_sext<25,16>(tmp_503_fu_12967_p3.read());
}

void lstm_backward::thread_p_shl8_5_cast_i_fu_13057_p1() {
    p_shl8_5_cast_i_fu_13057_p1 = esl_sext<25,16>(tmp_512_fu_13050_p3.read());
}

void lstm_backward::thread_p_shl8_6_cast_i_fu_13140_p1() {
    p_shl8_6_cast_i_fu_13140_p1 = esl_sext<25,16>(tmp_517_fu_13133_p3.read());
}

void lstm_backward::thread_p_shl8_7_cast_i_fu_13223_p1() {
    p_shl8_7_cast_i_fu_13223_p1 = esl_sext<25,16>(tmp_521_fu_13216_p3.read());
}

void lstm_backward::thread_p_shl8_cast_i_fu_12082_p1() {
    p_shl8_cast_i_fu_12082_p1 = esl_sext<25,16>(tmp_467_fu_12074_p3.read());
}

void lstm_backward::thread_p_shl_1_i_fu_12238_p1() {
    p_shl_1_i_fu_12238_p1 = esl_sext<25,24>(tmp_472_fu_12230_p3.read());
}

void lstm_backward::thread_p_shl_2_i_fu_12797_p1() {
    p_shl_2_i_fu_12797_p1 = esl_sext<25,24>(tmp_481_fu_12790_p3.read());
}

void lstm_backward::thread_p_shl_3_i_fu_12880_p1() {
    p_shl_3_i_fu_12880_p1 = esl_sext<25,24>(tmp_490_fu_12873_p3.read());
}

void lstm_backward::thread_p_shl_4_i_fu_12963_p1() {
    p_shl_4_i_fu_12963_p1 = esl_sext<25,24>(tmp_499_fu_12956_p3.read());
}

void lstm_backward::thread_p_shl_5_i_fu_13046_p1() {
    p_shl_5_i_fu_13046_p1 = esl_sext<25,24>(tmp_508_fu_13039_p3.read());
}

void lstm_backward::thread_p_shl_6_i_fu_13129_p1() {
    p_shl_6_i_fu_13129_p1 = esl_sext<25,24>(tmp_516_fu_13122_p3.read());
}

void lstm_backward::thread_p_shl_7_i_fu_13212_p1() {
    p_shl_7_i_fu_13212_p1 = esl_sext<25,24>(tmp_520_fu_13205_p3.read());
}

void lstm_backward::thread_p_shl_i_fu_12070_p1() {
    p_shl_i_fu_12070_p1 = esl_sext<25,24>(tmp_463_fu_12062_p3.read());
}

void lstm_backward::thread_phitmp1_fu_12224_p2() {
    phitmp1_fu_12224_p2 = (!tmp_458_fu_12220_p1.read().is_01() || !ap_const_lv12_200.is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_458_fu_12220_p1.read()) + sc_biguint<12>(ap_const_lv12_200));
}

void lstm_backward::thread_phitmp2_fu_12451_p2() {
    phitmp2_fu_12451_p2 = (!ap_const_lv12_200.is_01() || !tmp_462_fu_12447_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_462_fu_12447_p1.read()));
}

void lstm_backward::thread_phitmp3_fu_12516_p2() {
    phitmp3_fu_12516_p2 = (!ap_const_lv12_200.is_01() || !tmp_471_fu_12512_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_471_fu_12512_p1.read()));
}

void lstm_backward::thread_phitmp4_fu_12581_p2() {
    phitmp4_fu_12581_p2 = (!ap_const_lv12_200.is_01() || !tmp_480_fu_12577_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_480_fu_12577_p1.read()));
}

void lstm_backward::thread_phitmp5_fu_12646_p2() {
    phitmp5_fu_12646_p2 = (!ap_const_lv12_200.is_01() || !tmp_489_fu_12642_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_489_fu_12642_p1.read()));
}

void lstm_backward::thread_phitmp6_fu_12711_p2() {
    phitmp6_fu_12711_p2 = (!ap_const_lv12_200.is_01() || !tmp_498_fu_12707_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_498_fu_12707_p1.read()));
}

void lstm_backward::thread_phitmp7_fu_12776_p2() {
    phitmp7_fu_12776_p2 = (!ap_const_lv12_200.is_01() || !tmp_507_fu_12772_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_507_fu_12772_p1.read()));
}

void lstm_backward::thread_phitmp_fu_12056_p2() {
    phitmp_fu_12056_p2 = (!tmp_454_fu_12052_p1.read().is_01() || !ap_const_lv12_200.is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_454_fu_12052_p1.read()) + sc_biguint<12>(ap_const_lv12_200));
}

void lstm_backward::thread_r_V_54_1_i_fu_12254_p2() {
    r_V_54_1_i_fu_12254_p2 = (!p_shl_1_i_fu_12238_p1.read().is_01() || !p_shl8_1_cast_i_fu_12250_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_1_i_fu_12238_p1.read()) - sc_bigint<25>(p_shl8_1_cast_i_fu_12250_p1.read()));
}

void lstm_backward::thread_r_V_54_2_i_fu_12812_p2() {
    r_V_54_2_i_fu_12812_p2 = (!p_shl_2_i_fu_12797_p1.read().is_01() || !p_shl8_2_cast_i_fu_12808_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_2_i_fu_12797_p1.read()) - sc_bigint<25>(p_shl8_2_cast_i_fu_12808_p1.read()));
}

void lstm_backward::thread_r_V_54_3_i_fu_12895_p2() {
    r_V_54_3_i_fu_12895_p2 = (!p_shl_3_i_fu_12880_p1.read().is_01() || !p_shl8_3_cast_i_fu_12891_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_3_i_fu_12880_p1.read()) - sc_bigint<25>(p_shl8_3_cast_i_fu_12891_p1.read()));
}

void lstm_backward::thread_r_V_54_4_i_fu_12978_p2() {
    r_V_54_4_i_fu_12978_p2 = (!p_shl_4_i_fu_12963_p1.read().is_01() || !p_shl8_4_cast_i_fu_12974_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_4_i_fu_12963_p1.read()) - sc_bigint<25>(p_shl8_4_cast_i_fu_12974_p1.read()));
}

void lstm_backward::thread_r_V_54_5_i_fu_13061_p2() {
    r_V_54_5_i_fu_13061_p2 = (!p_shl_5_i_fu_13046_p1.read().is_01() || !p_shl8_5_cast_i_fu_13057_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_5_i_fu_13046_p1.read()) - sc_bigint<25>(p_shl8_5_cast_i_fu_13057_p1.read()));
}

void lstm_backward::thread_r_V_54_6_i_fu_13144_p2() {
    r_V_54_6_i_fu_13144_p2 = (!p_shl_6_i_fu_13129_p1.read().is_01() || !p_shl8_6_cast_i_fu_13140_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_6_i_fu_13129_p1.read()) - sc_bigint<25>(p_shl8_6_cast_i_fu_13140_p1.read()));
}

void lstm_backward::thread_r_V_54_7_i_fu_13227_p2() {
    r_V_54_7_i_fu_13227_p2 = (!p_shl_7_i_fu_13212_p1.read().is_01() || !p_shl8_7_cast_i_fu_13223_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_7_i_fu_13212_p1.read()) - sc_bigint<25>(p_shl8_7_cast_i_fu_13223_p1.read()));
}

void lstm_backward::thread_r_V_54_i_fu_12086_p2() {
    r_V_54_i_fu_12086_p2 = (!p_shl_i_fu_12070_p1.read().is_01() || !p_shl8_cast_i_fu_12082_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_i_fu_12070_p1.read()) - sc_bigint<25>(p_shl8_cast_i_fu_12082_p1.read()));
}

void lstm_backward::thread_ret_V_26_1_i_fu_12293_p2() {
    ret_V_26_1_i_fu_12293_p2 = (!ap_const_lv12_1.is_01() || !p_Result_1_i_cast_fu_12270_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1) + sc_bigint<12>(p_Result_1_i_cast_fu_12270_p1.read()));
}

void lstm_backward::thread_ret_V_26_i_fu_12125_p2() {
    ret_V_26_i_fu_12125_p2 = (!ap_const_lv12_1.is_01() || !p_Result_i_cast_fu_12102_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1) + sc_bigint<12>(p_Result_i_cast_fu_12102_p1.read()));
}

void lstm_backward::thread_t_fu_7213_p2() {
    t_fu_7213_p2 = (!t_0_in_i_reg_6844.read().is_01() || !ap_const_lv31_7FFFFFFF.is_01())? sc_lv<31>(): (sc_biguint<31>(t_0_in_i_reg_6844.read()) + sc_bigint<31>(ap_const_lv31_7FFFFFFF));
}

void lstm_backward::thread_tanh_lut_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        tanh_lut_V_address0 =  (sc_lv<8>) (tmp_176_2_i_fu_12868_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        tanh_lut_V_address0 =  (sc_lv<8>) (tmp_176_1_i_fu_12312_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        tanh_lut_V_address0 =  (sc_lv<8>) (tmp_176_i_fu_12144_p1.read());
    } else {
        tanh_lut_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void lstm_backward::thread_tanh_lut_V_address1() {
    tanh_lut_V_address1 =  (sc_lv<8>) (tmp_176_3_i_fu_12951_p1.read());
}

void lstm_backward::thread_tanh_lut_V_address2() {
    tanh_lut_V_address2 =  (sc_lv<8>) (tmp_176_4_i_fu_13034_p1.read());
}

void lstm_backward::thread_tanh_lut_V_address3() {
    tanh_lut_V_address3 =  (sc_lv<8>) (tmp_176_5_i_fu_13117_p1.read());
}

void lstm_backward::thread_tanh_lut_V_address4() {
    tanh_lut_V_address4 =  (sc_lv<8>) (tmp_176_6_i_fu_13200_p1.read());
}

void lstm_backward::thread_tanh_lut_V_address5() {
    tanh_lut_V_address5 =  (sc_lv<8>) (tmp_176_7_i_fu_13283_p1.read());
}

void lstm_backward::thread_tanh_lut_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()))) {
        tanh_lut_V_ce0 = ap_const_logic_1;
    } else {
        tanh_lut_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_tanh_lut_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        tanh_lut_V_ce1 = ap_const_logic_1;
    } else {
        tanh_lut_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_tanh_lut_V_ce2() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        tanh_lut_V_ce2 = ap_const_logic_1;
    } else {
        tanh_lut_V_ce2 = ap_const_logic_0;
    }
}

void lstm_backward::thread_tanh_lut_V_ce3() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        tanh_lut_V_ce3 = ap_const_logic_1;
    } else {
        tanh_lut_V_ce3 = ap_const_logic_0;
    }
}

void lstm_backward::thread_tanh_lut_V_ce4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        tanh_lut_V_ce4 = ap_const_logic_1;
    } else {
        tanh_lut_V_ce4 = ap_const_logic_0;
    }
}

void lstm_backward::thread_tanh_lut_V_ce5() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        tanh_lut_V_ce5 = ap_const_logic_1;
    } else {
        tanh_lut_V_ce5 = ap_const_logic_0;
    }
}

void lstm_backward::thread_tmp_138_10_i_fu_7333_p2() {
    tmp_138_10_i_fu_7333_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_B.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_B));
}

void lstm_backward::thread_tmp_138_11_i_fu_7343_p2() {
    tmp_138_11_i_fu_7343_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_C.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_C));
}

void lstm_backward::thread_tmp_138_12_i_fu_7353_p2() {
    tmp_138_12_i_fu_7353_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_D.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_D));
}

void lstm_backward::thread_tmp_138_13_i_fu_7363_p2() {
    tmp_138_13_i_fu_7363_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_E.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_E));
}

void lstm_backward::thread_tmp_138_14_i_fu_7373_p2() {
    tmp_138_14_i_fu_7373_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_F.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_F));
}

void lstm_backward::thread_tmp_138_15_i_fu_7383_p2() {
    tmp_138_15_i_fu_7383_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_10.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_10));
}

void lstm_backward::thread_tmp_138_16_i_fu_7393_p2() {
    tmp_138_16_i_fu_7393_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_11.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_11));
}

void lstm_backward::thread_tmp_138_17_i_fu_7403_p2() {
    tmp_138_17_i_fu_7403_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_12.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_12));
}

void lstm_backward::thread_tmp_138_18_i_fu_7413_p2() {
    tmp_138_18_i_fu_7413_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_13.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_13));
}

void lstm_backward::thread_tmp_138_19_i_fu_7423_p2() {
    tmp_138_19_i_fu_7423_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_14.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_14));
}

void lstm_backward::thread_tmp_138_1_i_fu_7233_p2() {
    tmp_138_1_i_fu_7233_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void lstm_backward::thread_tmp_138_20_i_fu_7433_p2() {
    tmp_138_20_i_fu_7433_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_15.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_15));
}

void lstm_backward::thread_tmp_138_21_i_fu_7443_p2() {
    tmp_138_21_i_fu_7443_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_16.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_16));
}

void lstm_backward::thread_tmp_138_22_i_fu_7453_p2() {
    tmp_138_22_i_fu_7453_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_17.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_17));
}

void lstm_backward::thread_tmp_138_23_i_fu_7463_p2() {
    tmp_138_23_i_fu_7463_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_18.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_18));
}

void lstm_backward::thread_tmp_138_24_i_fu_7473_p2() {
    tmp_138_24_i_fu_7473_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_19.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_19));
}

void lstm_backward::thread_tmp_138_25_i_fu_7483_p2() {
    tmp_138_25_i_fu_7483_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_1A.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_1A));
}

void lstm_backward::thread_tmp_138_26_i_fu_7493_p2() {
    tmp_138_26_i_fu_7493_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_1B.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_1B));
}

void lstm_backward::thread_tmp_138_27_i_fu_7503_p2() {
    tmp_138_27_i_fu_7503_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_1C.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_1C));
}

void lstm_backward::thread_tmp_138_28_i_fu_7513_p2() {
    tmp_138_28_i_fu_7513_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_1D.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_1D));
}

void lstm_backward::thread_tmp_138_29_i_fu_7523_p2() {
    tmp_138_29_i_fu_7523_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_1E.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_1E));
}

void lstm_backward::thread_tmp_138_2_i_fu_7243_p2() {
    tmp_138_2_i_fu_7243_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_2.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_2));
}

void lstm_backward::thread_tmp_138_30_i_fu_7533_p2() {
    tmp_138_30_i_fu_7533_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_1F.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_1F));
}

void lstm_backward::thread_tmp_138_31_i_fu_7543_p2() {
    tmp_138_31_i_fu_7543_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_20.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_20));
}

void lstm_backward::thread_tmp_138_32_i_fu_7553_p2() {
    tmp_138_32_i_fu_7553_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_21.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_21));
}

void lstm_backward::thread_tmp_138_33_i_fu_7563_p2() {
    tmp_138_33_i_fu_7563_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_22.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_22));
}

void lstm_backward::thread_tmp_138_34_i_fu_7573_p2() {
    tmp_138_34_i_fu_7573_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_23.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_23));
}

void lstm_backward::thread_tmp_138_35_i_fu_7583_p2() {
    tmp_138_35_i_fu_7583_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_24.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_24));
}

void lstm_backward::thread_tmp_138_36_i_fu_7593_p2() {
    tmp_138_36_i_fu_7593_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_25.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_25));
}

void lstm_backward::thread_tmp_138_37_i_fu_7603_p2() {
    tmp_138_37_i_fu_7603_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_26.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_26));
}

void lstm_backward::thread_tmp_138_3_i_fu_7253_p2() {
    tmp_138_3_i_fu_7253_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_3));
}

void lstm_backward::thread_tmp_138_4_i_fu_7263_p2() {
    tmp_138_4_i_fu_7263_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_4));
}

void lstm_backward::thread_tmp_138_5_i_fu_7273_p2() {
    tmp_138_5_i_fu_7273_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_5.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_5));
}

void lstm_backward::thread_tmp_138_6_i_fu_7283_p2() {
    tmp_138_6_i_fu_7283_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_6.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_6));
}

void lstm_backward::thread_tmp_138_7_i_fu_7293_p2() {
    tmp_138_7_i_fu_7293_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_7.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_7));
}

void lstm_backward::thread_tmp_138_8_i_fu_7303_p2() {
    tmp_138_8_i_fu_7303_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_8.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_8));
}

void lstm_backward::thread_tmp_138_9_i_fu_7313_p2() {
    tmp_138_9_i_fu_7313_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_9.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_9));
}

void lstm_backward::thread_tmp_138_i_fu_7323_p2() {
    tmp_138_i_fu_7323_p2 = (!tmp_41_i_reg_17319.read().is_01() || !ap_const_lv32_A.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_i_reg_17319.read()) + sc_biguint<32>(ap_const_lv32_A));
}

void lstm_backward::thread_tmp_139_10_i_fu_7338_p1() {
    tmp_139_10_i_fu_7338_p1 = esl_sext<64,32>(tmp_138_10_i_fu_7333_p2.read());
}

void lstm_backward::thread_tmp_139_11_i_fu_7348_p1() {
    tmp_139_11_i_fu_7348_p1 = esl_sext<64,32>(tmp_138_11_i_fu_7343_p2.read());
}

void lstm_backward::thread_tmp_139_12_i_fu_7358_p1() {
    tmp_139_12_i_fu_7358_p1 = esl_sext<64,32>(tmp_138_12_i_fu_7353_p2.read());
}

void lstm_backward::thread_tmp_139_13_i_fu_7368_p1() {
    tmp_139_13_i_fu_7368_p1 = esl_sext<64,32>(tmp_138_13_i_fu_7363_p2.read());
}

void lstm_backward::thread_tmp_139_14_i_fu_7378_p1() {
    tmp_139_14_i_fu_7378_p1 = esl_sext<64,32>(tmp_138_14_i_fu_7373_p2.read());
}

void lstm_backward::thread_tmp_139_15_i_fu_7388_p1() {
    tmp_139_15_i_fu_7388_p1 = esl_sext<64,32>(tmp_138_15_i_fu_7383_p2.read());
}

void lstm_backward::thread_tmp_139_16_i_fu_7398_p1() {
    tmp_139_16_i_fu_7398_p1 = esl_sext<64,32>(tmp_138_16_i_fu_7393_p2.read());
}

void lstm_backward::thread_tmp_139_17_i_fu_7408_p1() {
    tmp_139_17_i_fu_7408_p1 = esl_sext<64,32>(tmp_138_17_i_fu_7403_p2.read());
}

void lstm_backward::thread_tmp_139_18_i_fu_7418_p1() {
    tmp_139_18_i_fu_7418_p1 = esl_sext<64,32>(tmp_138_18_i_fu_7413_p2.read());
}

void lstm_backward::thread_tmp_139_19_i_fu_7428_p1() {
    tmp_139_19_i_fu_7428_p1 = esl_sext<64,32>(tmp_138_19_i_fu_7423_p2.read());
}

void lstm_backward::thread_tmp_139_1_i_fu_7238_p1() {
    tmp_139_1_i_fu_7238_p1 = esl_sext<64,32>(tmp_138_1_i_fu_7233_p2.read());
}

void lstm_backward::thread_tmp_139_20_i_fu_7438_p1() {
    tmp_139_20_i_fu_7438_p1 = esl_sext<64,32>(tmp_138_20_i_fu_7433_p2.read());
}

void lstm_backward::thread_tmp_139_21_i_fu_7448_p1() {
    tmp_139_21_i_fu_7448_p1 = esl_sext<64,32>(tmp_138_21_i_fu_7443_p2.read());
}

void lstm_backward::thread_tmp_139_22_i_fu_7458_p1() {
    tmp_139_22_i_fu_7458_p1 = esl_sext<64,32>(tmp_138_22_i_fu_7453_p2.read());
}

void lstm_backward::thread_tmp_139_23_i_fu_7468_p1() {
    tmp_139_23_i_fu_7468_p1 = esl_sext<64,32>(tmp_138_23_i_fu_7463_p2.read());
}

void lstm_backward::thread_tmp_139_24_i_fu_7478_p1() {
    tmp_139_24_i_fu_7478_p1 = esl_sext<64,32>(tmp_138_24_i_fu_7473_p2.read());
}

void lstm_backward::thread_tmp_139_25_i_fu_7488_p1() {
    tmp_139_25_i_fu_7488_p1 = esl_sext<64,32>(tmp_138_25_i_fu_7483_p2.read());
}

void lstm_backward::thread_tmp_139_26_i_fu_7498_p1() {
    tmp_139_26_i_fu_7498_p1 = esl_sext<64,32>(tmp_138_26_i_fu_7493_p2.read());
}

void lstm_backward::thread_tmp_139_27_i_fu_7508_p1() {
    tmp_139_27_i_fu_7508_p1 = esl_sext<64,32>(tmp_138_27_i_fu_7503_p2.read());
}

void lstm_backward::thread_tmp_139_28_i_fu_7518_p1() {
    tmp_139_28_i_fu_7518_p1 = esl_sext<64,32>(tmp_138_28_i_fu_7513_p2.read());
}

void lstm_backward::thread_tmp_139_29_i_fu_7528_p1() {
    tmp_139_29_i_fu_7528_p1 = esl_sext<64,32>(tmp_138_29_i_fu_7523_p2.read());
}

void lstm_backward::thread_tmp_139_2_i_fu_7248_p1() {
    tmp_139_2_i_fu_7248_p1 = esl_sext<64,32>(tmp_138_2_i_fu_7243_p2.read());
}

void lstm_backward::thread_tmp_139_30_i_fu_7538_p1() {
    tmp_139_30_i_fu_7538_p1 = esl_sext<64,32>(tmp_138_30_i_fu_7533_p2.read());
}

void lstm_backward::thread_tmp_139_31_i_fu_7548_p1() {
    tmp_139_31_i_fu_7548_p1 = esl_sext<64,32>(tmp_138_31_i_fu_7543_p2.read());
}

void lstm_backward::thread_tmp_139_32_i_fu_7558_p1() {
    tmp_139_32_i_fu_7558_p1 = esl_sext<64,32>(tmp_138_32_i_fu_7553_p2.read());
}

void lstm_backward::thread_tmp_139_33_i_fu_7568_p1() {
    tmp_139_33_i_fu_7568_p1 = esl_sext<64,32>(tmp_138_33_i_fu_7563_p2.read());
}

void lstm_backward::thread_tmp_139_34_i_fu_7578_p1() {
    tmp_139_34_i_fu_7578_p1 = esl_sext<64,32>(tmp_138_34_i_fu_7573_p2.read());
}

void lstm_backward::thread_tmp_139_35_i_fu_7588_p1() {
    tmp_139_35_i_fu_7588_p1 = esl_sext<64,32>(tmp_138_35_i_fu_7583_p2.read());
}

void lstm_backward::thread_tmp_139_36_i_fu_7598_p1() {
    tmp_139_36_i_fu_7598_p1 = esl_sext<64,32>(tmp_138_36_i_fu_7593_p2.read());
}

void lstm_backward::thread_tmp_139_37_i_fu_7608_p1() {
    tmp_139_37_i_fu_7608_p1 = esl_sext<64,32>(tmp_138_37_i_fu_7603_p2.read());
}

void lstm_backward::thread_tmp_139_3_i_fu_7258_p1() {
    tmp_139_3_i_fu_7258_p1 = esl_sext<64,32>(tmp_138_3_i_fu_7253_p2.read());
}

void lstm_backward::thread_tmp_139_4_i_fu_7268_p1() {
    tmp_139_4_i_fu_7268_p1 = esl_sext<64,32>(tmp_138_4_i_fu_7263_p2.read());
}

void lstm_backward::thread_tmp_139_5_i_fu_7278_p1() {
    tmp_139_5_i_fu_7278_p1 = esl_sext<64,32>(tmp_138_5_i_fu_7273_p2.read());
}

void lstm_backward::thread_tmp_139_6_i_fu_7288_p1() {
    tmp_139_6_i_fu_7288_p1 = esl_sext<64,32>(tmp_138_6_i_fu_7283_p2.read());
}

void lstm_backward::thread_tmp_139_7_i_fu_7298_p1() {
    tmp_139_7_i_fu_7298_p1 = esl_sext<64,32>(tmp_138_7_i_fu_7293_p2.read());
}

void lstm_backward::thread_tmp_139_8_i_fu_7308_p1() {
    tmp_139_8_i_fu_7308_p1 = esl_sext<64,32>(tmp_138_8_i_fu_7303_p2.read());
}

void lstm_backward::thread_tmp_139_9_i_fu_7318_p1() {
    tmp_139_9_i_fu_7318_p1 = esl_sext<64,32>(tmp_138_9_i_fu_7313_p2.read());
}

void lstm_backward::thread_tmp_139_i_77_fu_7328_p1() {
    tmp_139_i_77_fu_7328_p1 = esl_sext<64,32>(tmp_138_i_fu_7323_p2.read());
}

void lstm_backward::thread_tmp_139_i_fu_7229_p1() {
    tmp_139_i_fu_7229_p1 = esl_zext<64,32>(tmp_41_i_reg_17319.read());
}

void lstm_backward::thread_tmp_161_1_i_fu_12181_p4() {
    tmp_161_1_i_fu_12181_p4 = grp_fu_15305_p3.read().range(26, 11);
}

void lstm_backward::thread_tmp_161_2_i_fu_12408_p4() {
    tmp_161_2_i_fu_12408_p4 = grp_fu_15357_p3.read().range(26, 11);
}

void lstm_backward::thread_tmp_161_3_i_fu_12473_p4() {
    tmp_161_3_i_fu_12473_p4 = grp_fu_15366_p3.read().range(26, 11);
}

void lstm_backward::thread_tmp_161_4_i_fu_12538_p4() {
    tmp_161_4_i_fu_12538_p4 = grp_fu_15375_p3.read().range(26, 11);
}

void lstm_backward::thread_tmp_161_5_i_fu_12603_p4() {
    tmp_161_5_i_fu_12603_p4 = grp_fu_15384_p3.read().range(26, 11);
}

void lstm_backward::thread_tmp_161_6_i_fu_12668_p4() {
    tmp_161_6_i_fu_12668_p4 = grp_fu_15393_p3.read().range(26, 11);
}

void lstm_backward::thread_tmp_161_7_i_fu_12733_p4() {
    tmp_161_7_i_fu_12733_p4 = grp_fu_15402_p3.read().range(26, 11);
}

void lstm_backward::thread_tmp_161_i_fu_12013_p4() {
    tmp_161_i_fu_12013_p4 = grp_fu_15283_p3.read().range(26, 11);
}

void lstm_backward::thread_tmp_162_1_i_fu_12191_p2() {
    tmp_162_1_i_fu_12191_p2 = (!tmp_161_1_i_fu_12181_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_1_i_fu_12181_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_backward::thread_tmp_162_2_i_fu_12418_p2() {
    tmp_162_2_i_fu_12418_p2 = (!tmp_161_2_i_fu_12408_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_2_i_fu_12408_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_backward::thread_tmp_162_3_i_fu_12483_p2() {
    tmp_162_3_i_fu_12483_p2 = (!tmp_161_3_i_fu_12473_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_3_i_fu_12473_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_backward::thread_tmp_162_4_i_fu_12548_p2() {
    tmp_162_4_i_fu_12548_p2 = (!tmp_161_4_i_fu_12538_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_4_i_fu_12538_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_backward::thread_tmp_162_5_i_fu_12613_p2() {
    tmp_162_5_i_fu_12613_p2 = (!tmp_161_5_i_fu_12603_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_5_i_fu_12603_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_backward::thread_tmp_162_6_i_fu_12678_p2() {
    tmp_162_6_i_fu_12678_p2 = (!tmp_161_6_i_fu_12668_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_6_i_fu_12668_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_backward::thread_tmp_162_7_i_fu_12743_p2() {
    tmp_162_7_i_fu_12743_p2 = (!tmp_161_7_i_fu_12733_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_7_i_fu_12733_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_backward::thread_tmp_162_i_fu_12023_p2() {
    tmp_162_i_fu_12023_p2 = (!tmp_161_i_fu_12013_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_i_fu_12013_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_backward::thread_tmp_172_1_i_fu_12197_p2() {
    tmp_172_1_i_fu_12197_p2 = (!tmp_161_1_i_fu_12181_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_1_i_fu_12181_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_backward::thread_tmp_172_2_i_fu_12424_p2() {
    tmp_172_2_i_fu_12424_p2 = (!tmp_161_2_i_fu_12408_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_2_i_fu_12408_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_backward::thread_tmp_172_3_i_fu_12489_p2() {
    tmp_172_3_i_fu_12489_p2 = (!tmp_161_3_i_fu_12473_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_3_i_fu_12473_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_backward::thread_tmp_172_4_i_fu_12554_p2() {
    tmp_172_4_i_fu_12554_p2 = (!tmp_161_4_i_fu_12538_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_4_i_fu_12538_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_backward::thread_tmp_172_5_i_fu_12619_p2() {
    tmp_172_5_i_fu_12619_p2 = (!tmp_161_5_i_fu_12603_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_5_i_fu_12603_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_backward::thread_tmp_172_6_i_fu_12684_p2() {
    tmp_172_6_i_fu_12684_p2 = (!tmp_161_6_i_fu_12668_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_6_i_fu_12668_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_backward::thread_tmp_172_7_i_fu_12749_p2() {
    tmp_172_7_i_fu_12749_p2 = (!tmp_161_7_i_fu_12733_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_7_i_fu_12733_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_backward::thread_tmp_172_i_fu_12029_p2() {
    tmp_172_i_fu_12029_p2 = (!tmp_161_i_fu_12013_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_161_i_fu_12013_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_backward::thread_tmp_175_1_i_fu_12287_p2() {
    tmp_175_1_i_fu_12287_p2 = (!tmp_526_fu_12283_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_526_fu_12283_p1.read() == ap_const_lv14_0);
}

void lstm_backward::thread_tmp_175_2_i_fu_12830_p2() {
    tmp_175_2_i_fu_12830_p2 = (!tmp_529_fu_12826_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_529_fu_12826_p1.read() == ap_const_lv14_0);
}

void lstm_backward::thread_tmp_175_3_i_fu_12913_p2() {
    tmp_175_3_i_fu_12913_p2 = (!tmp_531_fu_12909_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_531_fu_12909_p1.read() == ap_const_lv14_0);
}

void lstm_backward::thread_tmp_175_4_i_fu_12996_p2() {
    tmp_175_4_i_fu_12996_p2 = (!tmp_533_fu_12992_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_533_fu_12992_p1.read() == ap_const_lv14_0);
}

void lstm_backward::thread_tmp_175_5_i_fu_13079_p2() {
    tmp_175_5_i_fu_13079_p2 = (!tmp_535_fu_13075_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_535_fu_13075_p1.read() == ap_const_lv14_0);
}

void lstm_backward::thread_tmp_175_6_i_fu_13162_p2() {
    tmp_175_6_i_fu_13162_p2 = (!tmp_537_fu_13158_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_537_fu_13158_p1.read() == ap_const_lv14_0);
}

void lstm_backward::thread_tmp_175_7_i_fu_13245_p2() {
    tmp_175_7_i_fu_13245_p2 = (!tmp_539_fu_13241_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_539_fu_13241_p1.read() == ap_const_lv14_0);
}

void lstm_backward::thread_tmp_175_i_fu_12119_p2() {
    tmp_175_i_fu_12119_p2 = (!tmp_523_fu_12115_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_523_fu_12115_p1.read() == ap_const_lv14_0);
}

void lstm_backward::thread_tmp_176_1_i_fu_12312_p1() {
    tmp_176_1_i_fu_12312_p1 = esl_zext<64,8>(tmp_527_fu_12308_p1.read());
}

void lstm_backward::thread_tmp_176_2_i_fu_12868_p1() {
    tmp_176_2_i_fu_12868_p1 = esl_zext<64,8>(tmp_468_fu_12860_p3.read());
}

void lstm_backward::thread_tmp_176_3_i_fu_12951_p1() {
    tmp_176_3_i_fu_12951_p1 = esl_zext<64,8>(tmp_477_fu_12943_p3.read());
}

void lstm_backward::thread_tmp_176_4_i_fu_13034_p1() {
    tmp_176_4_i_fu_13034_p1 = esl_zext<64,8>(tmp_486_fu_13026_p3.read());
}

void lstm_backward::thread_tmp_176_5_i_fu_13117_p1() {
    tmp_176_5_i_fu_13117_p1 = esl_zext<64,8>(tmp_495_fu_13109_p3.read());
}

void lstm_backward::thread_tmp_176_6_i_fu_13200_p1() {
    tmp_176_6_i_fu_13200_p1 = esl_zext<64,8>(tmp_504_fu_13192_p3.read());
}

void lstm_backward::thread_tmp_176_7_i_fu_13283_p1() {
    tmp_176_7_i_fu_13283_p1 = esl_zext<64,8>(tmp_513_fu_13275_p3.read());
}

void lstm_backward::thread_tmp_176_i_fu_12144_p1() {
    tmp_176_i_fu_12144_p1 = esl_zext<64,8>(tmp_524_fu_12140_p1.read());
}

void lstm_backward::thread_tmp_41_i_fu_7223_p0() {
    tmp_41_i_fu_7223_p0 =  (sc_lv<31>) (tmp_41_i_fu_7223_p00.read());
}

void lstm_backward::thread_tmp_41_i_fu_7223_p00() {
    tmp_41_i_fu_7223_p00 = esl_zext<32,31>(t_fu_7213_p2.read());
}

void lstm_backward::thread_tmp_41_i_fu_7223_p2() {
    tmp_41_i_fu_7223_p2 = (!tmp_41_i_fu_7223_p0.read().is_01() || !ap_const_lv32_27.is_01())? sc_lv<32>(): sc_biguint<31>(tmp_41_i_fu_7223_p0.read()) * sc_biguint<32>(ap_const_lv32_27);
}

void lstm_backward::thread_tmp_42_i_cast1_fu_7633_p1() {
    tmp_42_i_cast1_fu_7633_p1 = esl_zext<10,7>(ap_phi_mux_j_i_phi_fu_6857_p4.read());
}

void lstm_backward::thread_tmp_42_i_cast2_fu_7715_p1() {
    tmp_42_i_cast2_fu_7715_p1 = esl_zext<9,7>(j_i_reg_6853.read());
}

void lstm_backward::thread_tmp_42_i_cast_fu_7719_p1() {
    tmp_42_i_cast_fu_7719_p1 = esl_zext<8,7>(j_i_reg_6853.read());
}

void lstm_backward::thread_tmp_42_i_fu_7625_p1() {
    tmp_42_i_fu_7625_p1 = esl_zext<64,7>(ap_phi_mux_j_i_phi_fu_6857_p4.read());
}

void lstm_backward::thread_tmp_448_fu_7723_p2() {
    tmp_448_fu_7723_p2 = (!ap_const_lv8_59.is_01() || !tmp_42_i_cast_fu_7719_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_59) + sc_biguint<8>(tmp_42_i_cast_fu_7719_p1.read()));
}

void lstm_backward::thread_tmp_450_cast_fu_7729_p1() {
    tmp_450_cast_fu_7729_p1 = esl_zext<64,8>(tmp_448_fu_7723_p2.read());
}

void lstm_backward::thread_tmp_450_fu_8778_p2() {
    tmp_450_fu_8778_p2 = (!ap_const_lv9_B2.is_01() || !tmp_42_i_cast2_reg_17850.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_B2) + sc_biguint<9>(tmp_42_i_cast2_reg_17850.read()));
}

void lstm_backward::thread_tmp_451_cast_fu_8783_p1() {
    tmp_451_cast_fu_8783_p1 = esl_zext<64,9>(tmp_450_fu_8778_p2.read());
}

void lstm_backward::thread_tmp_451_fu_8175_p2() {
    tmp_451_fu_8175_p2 = (!ap_const_lv9_10B.is_01() || !tmp_42_i_cast2_reg_17850.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_10B) + sc_biguint<9>(tmp_42_i_cast2_reg_17850.read()));
}

void lstm_backward::thread_tmp_452_cast_fu_8180_p1() {
    tmp_452_cast_fu_8180_p1 = esl_zext<64,9>(tmp_451_fu_8175_p2.read());
}

void lstm_backward::thread_tmp_452_fu_7737_p2() {
    tmp_452_fu_7737_p2 = (!ap_const_lv9_164.is_01() || !tmp_42_i_cast2_fu_7715_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_164) + sc_biguint<9>(tmp_42_i_cast2_fu_7715_p1.read()));
}

void lstm_backward::thread_tmp_453_cast_fu_7743_p1() {
    tmp_453_cast_fu_7743_p1 = esl_zext<64,9>(tmp_452_fu_7737_p2.read());
}

void lstm_backward::thread_tmp_453_fu_7637_p2() {
    tmp_453_fu_7637_p2 = (!ap_const_lv10_1BD.is_01() || !tmp_42_i_cast1_fu_7633_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1BD) + sc_biguint<10>(tmp_42_i_cast1_fu_7633_p1.read()));
}

void lstm_backward::thread_tmp_454_fu_12052_p1() {
    tmp_454_fu_12052_p1 = esl_sext<12,11>(tmp_461_fu_12044_p3.read());
}

void lstm_backward::thread_tmp_455_fu_12092_p4() {
    tmp_455_fu_12092_p4 = r_V_54_i_fu_12086_p2.read().range(24, 14);
}

void lstm_backward::thread_tmp_456_cast_fu_7643_p1() {
    tmp_456_cast_fu_7643_p1 = esl_zext<64,10>(tmp_453_fu_7637_p2.read());
}

void lstm_backward::thread_tmp_456_fu_7651_p2() {
    tmp_456_fu_7651_p2 = (!ap_const_lv10_216.is_01() || !tmp_42_i_cast1_fu_7633_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_216) + sc_biguint<10>(tmp_42_i_cast1_fu_7633_p1.read()));
}

void lstm_backward::thread_tmp_457_cast_fu_7657_p1() {
    tmp_457_cast_fu_7657_p1 = esl_zext<64,10>(tmp_456_fu_7651_p2.read());
}

void lstm_backward::thread_tmp_457_fu_7689_p1() {
    tmp_457_fu_7689_p1 = ap_phi_mux_j_i_phi_fu_6857_p4.read().range(3-1, 0);
}

void lstm_backward::thread_tmp_458_fu_12220_p1() {
    tmp_458_fu_12220_p1 = esl_sext<12,11>(tmp_470_fu_12212_p3.read());
}

void lstm_backward::thread_tmp_459_fu_12260_p4() {
    tmp_459_fu_12260_p4 = r_V_54_1_i_fu_12254_p2.read().range(24, 14);
}

void lstm_backward::thread_tmp_460_fu_12035_p4() {
    tmp_460_fu_12035_p4 = grp_fu_15283_p3.read().range(25, 15);
}

void lstm_backward::thread_tmp_461_fu_12044_p3() {
    tmp_461_fu_12044_p3 = (!tmp_172_i_fu_12029_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_172_i_fu_12029_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_460_fu_12035_p4.read());
}

void lstm_backward::thread_tmp_462_fu_12447_p1() {
    tmp_462_fu_12447_p1 = esl_sext<12,11>(tmp_479_fu_12439_p3.read());
}

void lstm_backward::thread_tmp_463_fu_12062_p3() {
    tmp_463_fu_12062_p3 = esl_concat<12,12>(p_Val2_74_i_reg_6907.read(), ap_const_lv12_0);
}

void lstm_backward::thread_tmp_464_fu_12836_p4() {
    tmp_464_fu_12836_p4 = r_V_54_2_i_fu_12812_p2.read().range(21, 14);
}

void lstm_backward::thread_tmp_465_fu_12846_p2() {
    tmp_465_fu_12846_p2 = (!ap_const_lv8_1.is_01() || !tmp_464_fu_12836_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_464_fu_12836_p4.read()));
}

void lstm_backward::thread_tmp_466_fu_12852_p3() {
    tmp_466_fu_12852_p3 = (!tmp_175_2_i_fu_12830_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_175_2_i_fu_12830_p2.read()[0].to_bool())? tmp_464_fu_12836_p4.read(): tmp_465_fu_12846_p2.read());
}

void lstm_backward::thread_tmp_467_fu_12074_p3() {
    tmp_467_fu_12074_p3 = esl_concat<12,4>(p_Val2_74_i_reg_6907.read(), ap_const_lv4_0);
}

void lstm_backward::thread_tmp_468_fu_12860_p3() {
    tmp_468_fu_12860_p3 = (!tmp_528_fu_12818_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_528_fu_12818_p3.read()[0].to_bool())? tmp_466_fu_12852_p3.read(): tmp_464_fu_12836_p4.read());
}

void lstm_backward::thread_tmp_469_fu_12203_p4() {
    tmp_469_fu_12203_p4 = grp_fu_15305_p3.read().range(25, 15);
}

void lstm_backward::thread_tmp_470_fu_12212_p3() {
    tmp_470_fu_12212_p3 = (!tmp_172_1_i_fu_12197_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_172_1_i_fu_12197_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_469_fu_12203_p4.read());
}

void lstm_backward::thread_tmp_471_fu_12512_p1() {
    tmp_471_fu_12512_p1 = esl_sext<12,11>(tmp_488_fu_12504_p3.read());
}

void lstm_backward::thread_tmp_472_fu_12230_p3() {
    tmp_472_fu_12230_p3 = esl_concat<12,12>(p_Val2_74_1_i_reg_6927.read(), ap_const_lv12_0);
}

void lstm_backward::thread_tmp_473_fu_12919_p4() {
    tmp_473_fu_12919_p4 = r_V_54_3_i_fu_12895_p2.read().range(21, 14);
}

void lstm_backward::thread_tmp_474_fu_12929_p2() {
    tmp_474_fu_12929_p2 = (!ap_const_lv8_1.is_01() || !tmp_473_fu_12919_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_473_fu_12919_p4.read()));
}

void lstm_backward::thread_tmp_475_fu_12935_p3() {
    tmp_475_fu_12935_p3 = (!tmp_175_3_i_fu_12913_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_175_3_i_fu_12913_p2.read()[0].to_bool())? tmp_473_fu_12919_p4.read(): tmp_474_fu_12929_p2.read());
}

void lstm_backward::thread_tmp_476_fu_12242_p3() {
    tmp_476_fu_12242_p3 = esl_concat<12,4>(p_Val2_74_1_i_reg_6927.read(), ap_const_lv4_0);
}

void lstm_backward::thread_tmp_477_fu_12943_p3() {
    tmp_477_fu_12943_p3 = (!tmp_530_fu_12901_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_530_fu_12901_p3.read()[0].to_bool())? tmp_475_fu_12935_p3.read(): tmp_473_fu_12919_p4.read());
}

void lstm_backward::thread_tmp_478_fu_12430_p4() {
    tmp_478_fu_12430_p4 = grp_fu_15357_p3.read().range(25, 15);
}

void lstm_backward::thread_tmp_479_fu_12439_p3() {
    tmp_479_fu_12439_p3 = (!tmp_172_2_i_fu_12424_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_172_2_i_fu_12424_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_478_fu_12430_p4.read());
}

void lstm_backward::thread_tmp_480_fu_12577_p1() {
    tmp_480_fu_12577_p1 = esl_sext<12,11>(tmp_497_fu_12569_p3.read());
}

void lstm_backward::thread_tmp_481_fu_12790_p3() {
    tmp_481_fu_12790_p3 = esl_concat<12,12>(p_Val2_74_2_i_reg_20366.read(), ap_const_lv12_0);
}

void lstm_backward::thread_tmp_482_fu_13002_p4() {
    tmp_482_fu_13002_p4 = r_V_54_4_i_fu_12978_p2.read().range(21, 14);
}

void lstm_backward::thread_tmp_483_fu_13012_p2() {
    tmp_483_fu_13012_p2 = (!ap_const_lv8_1.is_01() || !tmp_482_fu_13002_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_482_fu_13002_p4.read()));
}

void lstm_backward::thread_tmp_484_fu_13018_p3() {
    tmp_484_fu_13018_p3 = (!tmp_175_4_i_fu_12996_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_175_4_i_fu_12996_p2.read()[0].to_bool())? tmp_482_fu_13002_p4.read(): tmp_483_fu_13012_p2.read());
}

void lstm_backward::thread_tmp_485_fu_12801_p3() {
    tmp_485_fu_12801_p3 = esl_concat<12,4>(p_Val2_74_2_i_reg_20366.read(), ap_const_lv4_0);
}

void lstm_backward::thread_tmp_486_fu_13026_p3() {
    tmp_486_fu_13026_p3 = (!tmp_532_fu_12984_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_532_fu_12984_p3.read()[0].to_bool())? tmp_484_fu_13018_p3.read(): tmp_482_fu_13002_p4.read());
}

void lstm_backward::thread_tmp_487_fu_12495_p4() {
    tmp_487_fu_12495_p4 = grp_fu_15366_p3.read().range(25, 15);
}

void lstm_backward::thread_tmp_488_fu_12504_p3() {
    tmp_488_fu_12504_p3 = (!tmp_172_3_i_fu_12489_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_172_3_i_fu_12489_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_487_fu_12495_p4.read());
}

void lstm_backward::thread_tmp_489_fu_12642_p1() {
    tmp_489_fu_12642_p1 = esl_sext<12,11>(tmp_506_fu_12634_p3.read());
}

void lstm_backward::thread_tmp_490_fu_12873_p3() {
    tmp_490_fu_12873_p3 = esl_concat<12,12>(p_Val2_74_3_i_reg_20372.read(), ap_const_lv12_0);
}

void lstm_backward::thread_tmp_491_fu_13085_p4() {
    tmp_491_fu_13085_p4 = r_V_54_5_i_fu_13061_p2.read().range(21, 14);
}

void lstm_backward::thread_tmp_492_fu_13095_p2() {
    tmp_492_fu_13095_p2 = (!ap_const_lv8_1.is_01() || !tmp_491_fu_13085_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_491_fu_13085_p4.read()));
}

void lstm_backward::thread_tmp_493_fu_13101_p3() {
    tmp_493_fu_13101_p3 = (!tmp_175_5_i_fu_13079_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_175_5_i_fu_13079_p2.read()[0].to_bool())? tmp_491_fu_13085_p4.read(): tmp_492_fu_13095_p2.read());
}

void lstm_backward::thread_tmp_494_fu_12884_p3() {
    tmp_494_fu_12884_p3 = esl_concat<12,4>(p_Val2_74_3_i_reg_20372.read(), ap_const_lv4_0);
}

void lstm_backward::thread_tmp_495_fu_13109_p3() {
    tmp_495_fu_13109_p3 = (!tmp_534_fu_13067_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_534_fu_13067_p3.read()[0].to_bool())? tmp_493_fu_13101_p3.read(): tmp_491_fu_13085_p4.read());
}

void lstm_backward::thread_tmp_496_fu_12560_p4() {
    tmp_496_fu_12560_p4 = grp_fu_15375_p3.read().range(25, 15);
}

void lstm_backward::thread_tmp_497_fu_12569_p3() {
    tmp_497_fu_12569_p3 = (!tmp_172_4_i_fu_12554_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_172_4_i_fu_12554_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_496_fu_12560_p4.read());
}

void lstm_backward::thread_tmp_498_fu_12707_p1() {
    tmp_498_fu_12707_p1 = esl_sext<12,11>(tmp_515_fu_12699_p3.read());
}

void lstm_backward::thread_tmp_499_fu_12956_p3() {
    tmp_499_fu_12956_p3 = esl_concat<12,12>(p_Val2_74_4_i_reg_20378.read(), ap_const_lv12_0);
}

void lstm_backward::thread_tmp_500_fu_13168_p4() {
    tmp_500_fu_13168_p4 = r_V_54_6_i_fu_13144_p2.read().range(21, 14);
}

void lstm_backward::thread_tmp_501_fu_13178_p2() {
    tmp_501_fu_13178_p2 = (!ap_const_lv8_1.is_01() || !tmp_500_fu_13168_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_500_fu_13168_p4.read()));
}

void lstm_backward::thread_tmp_502_fu_13184_p3() {
    tmp_502_fu_13184_p3 = (!tmp_175_6_i_fu_13162_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_175_6_i_fu_13162_p2.read()[0].to_bool())? tmp_500_fu_13168_p4.read(): tmp_501_fu_13178_p2.read());
}

void lstm_backward::thread_tmp_503_fu_12967_p3() {
    tmp_503_fu_12967_p3 = esl_concat<12,4>(p_Val2_74_4_i_reg_20378.read(), ap_const_lv4_0);
}

void lstm_backward::thread_tmp_504_fu_13192_p3() {
    tmp_504_fu_13192_p3 = (!tmp_536_fu_13150_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_536_fu_13150_p3.read()[0].to_bool())? tmp_502_fu_13184_p3.read(): tmp_500_fu_13168_p4.read());
}

void lstm_backward::thread_tmp_505_fu_12625_p4() {
    tmp_505_fu_12625_p4 = grp_fu_15384_p3.read().range(25, 15);
}

void lstm_backward::thread_tmp_506_fu_12634_p3() {
    tmp_506_fu_12634_p3 = (!tmp_172_5_i_fu_12619_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_172_5_i_fu_12619_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_505_fu_12625_p4.read());
}

void lstm_backward::thread_tmp_507_fu_12772_p1() {
    tmp_507_fu_12772_p1 = esl_sext<12,11>(tmp_519_fu_12764_p3.read());
}

void lstm_backward::thread_tmp_508_fu_13039_p3() {
    tmp_508_fu_13039_p3 = esl_concat<12,12>(p_Val2_74_5_i_reg_20384.read(), ap_const_lv12_0);
}

void lstm_backward::thread_tmp_509_fu_13251_p4() {
    tmp_509_fu_13251_p4 = r_V_54_7_i_fu_13227_p2.read().range(21, 14);
}

void lstm_backward::thread_tmp_510_fu_13261_p2() {
    tmp_510_fu_13261_p2 = (!ap_const_lv8_1.is_01() || !tmp_509_fu_13251_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_509_fu_13251_p4.read()));
}

void lstm_backward::thread_tmp_511_fu_13267_p3() {
    tmp_511_fu_13267_p3 = (!tmp_175_7_i_fu_13245_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_175_7_i_fu_13245_p2.read()[0].to_bool())? tmp_509_fu_13251_p4.read(): tmp_510_fu_13261_p2.read());
}

void lstm_backward::thread_tmp_512_fu_13050_p3() {
    tmp_512_fu_13050_p3 = esl_concat<12,4>(p_Val2_74_5_i_reg_20384.read(), ap_const_lv4_0);
}

void lstm_backward::thread_tmp_513_fu_13275_p3() {
    tmp_513_fu_13275_p3 = (!tmp_538_fu_13233_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_538_fu_13233_p3.read()[0].to_bool())? tmp_511_fu_13267_p3.read(): tmp_509_fu_13251_p4.read());
}

void lstm_backward::thread_tmp_514_fu_12690_p4() {
    tmp_514_fu_12690_p4 = grp_fu_15393_p3.read().range(25, 15);
}

void lstm_backward::thread_tmp_515_fu_12699_p3() {
    tmp_515_fu_12699_p3 = (!tmp_172_6_i_fu_12684_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_172_6_i_fu_12684_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_514_fu_12690_p4.read());
}

void lstm_backward::thread_tmp_516_fu_13122_p3() {
    tmp_516_fu_13122_p3 = esl_concat<12,12>(p_Val2_74_6_i_reg_20390.read(), ap_const_lv12_0);
}

void lstm_backward::thread_tmp_517_fu_13133_p3() {
    tmp_517_fu_13133_p3 = esl_concat<12,4>(p_Val2_74_6_i_reg_20390.read(), ap_const_lv4_0);
}

void lstm_backward::thread_tmp_518_fu_12755_p4() {
    tmp_518_fu_12755_p4 = grp_fu_15402_p3.read().range(25, 15);
}

void lstm_backward::thread_tmp_519_fu_12764_p3() {
    tmp_519_fu_12764_p3 = (!tmp_172_7_i_fu_12749_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_172_7_i_fu_12749_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_518_fu_12755_p4.read());
}

void lstm_backward::thread_tmp_520_fu_13205_p3() {
    tmp_520_fu_13205_p3 = esl_concat<12,12>(p_Val2_74_7_i_reg_20396.read(), ap_const_lv12_0);
}

void lstm_backward::thread_tmp_521_fu_13216_p3() {
    tmp_521_fu_13216_p3 = esl_concat<12,4>(p_Val2_74_7_i_reg_20396.read(), ap_const_lv4_0);
}

void lstm_backward::thread_tmp_522_fu_12107_p3() {
    tmp_522_fu_12107_p3 = r_V_54_i_fu_12086_p2.read().range(24, 24);
}

void lstm_backward::thread_tmp_523_fu_12115_p1() {
    tmp_523_fu_12115_p1 = r_V_54_i_fu_12086_p2.read().range(14-1, 0);
}

void lstm_backward::thread_tmp_524_fu_12140_p1() {
    tmp_524_fu_12140_p1 = ap_phi_mux_p_4_i_phi_fu_6921_p4.read().range(8-1, 0);
}

void lstm_backward::thread_tmp_525_fu_12275_p3() {
    tmp_525_fu_12275_p3 = r_V_54_1_i_fu_12254_p2.read().range(24, 24);
}

void lstm_backward::thread_tmp_526_fu_12283_p1() {
    tmp_526_fu_12283_p1 = r_V_54_1_i_fu_12254_p2.read().range(14-1, 0);
}

void lstm_backward::thread_tmp_527_fu_12308_p1() {
    tmp_527_fu_12308_p1 = ap_phi_mux_p_4_1_i_phi_fu_6941_p4.read().range(8-1, 0);
}

void lstm_backward::thread_tmp_528_fu_12818_p3() {
    tmp_528_fu_12818_p3 = r_V_54_2_i_fu_12812_p2.read().range(24, 24);
}

void lstm_backward::thread_tmp_529_fu_12826_p1() {
    tmp_529_fu_12826_p1 = r_V_54_2_i_fu_12812_p2.read().range(14-1, 0);
}

void lstm_backward::thread_tmp_530_fu_12901_p3() {
    tmp_530_fu_12901_p3 = r_V_54_3_i_fu_12895_p2.read().range(24, 24);
}

void lstm_backward::thread_tmp_531_fu_12909_p1() {
    tmp_531_fu_12909_p1 = r_V_54_3_i_fu_12895_p2.read().range(14-1, 0);
}

void lstm_backward::thread_tmp_532_fu_12984_p3() {
    tmp_532_fu_12984_p3 = r_V_54_4_i_fu_12978_p2.read().range(24, 24);
}

void lstm_backward::thread_tmp_533_fu_12992_p1() {
    tmp_533_fu_12992_p1 = r_V_54_4_i_fu_12978_p2.read().range(14-1, 0);
}

void lstm_backward::thread_tmp_534_fu_13067_p3() {
    tmp_534_fu_13067_p3 = r_V_54_5_i_fu_13061_p2.read().range(24, 24);
}

void lstm_backward::thread_tmp_535_fu_13075_p1() {
    tmp_535_fu_13075_p1 = r_V_54_5_i_fu_13061_p2.read().range(14-1, 0);
}

void lstm_backward::thread_tmp_536_fu_13150_p3() {
    tmp_536_fu_13150_p3 = r_V_54_6_i_fu_13144_p2.read().range(24, 24);
}

void lstm_backward::thread_tmp_537_fu_13158_p1() {
    tmp_537_fu_13158_p1 = r_V_54_6_i_fu_13144_p2.read().range(14-1, 0);
}

void lstm_backward::thread_tmp_538_fu_13233_p3() {
    tmp_538_fu_13233_p3 = r_V_54_7_i_fu_13227_p2.read().range(24, 24);
}

void lstm_backward::thread_tmp_539_fu_13241_p1() {
    tmp_539_fu_13241_p1 = r_V_54_7_i_fu_13227_p2.read().range(14-1, 0);
}

void lstm_backward::thread_tmp_i_fu_7207_p2() {
    tmp_i_fu_7207_p2 = (!t_0_in_i_reg_6844.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(t_0_in_i_reg_6844.read() == ap_const_lv31_0);
}

void lstm_backward::thread_tmp_s_fu_7751_p1() {
    tmp_s_fu_7751_p1 = esl_sext<23,16>(ap_phi_mux_xj_V_phi_fu_6868_p16.read());
}

void lstm_backward::thread_valid_len_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        valid_len_blk_n = valid_len_empty_n.read();
    } else {
        valid_len_blk_n = ap_const_logic_1;
    }
}

void lstm_backward::thread_valid_len_cast_i_cas_fu_7203_p1() {
    valid_len_cast_i_cas_fu_7203_p1 = esl_zext<31,7>(valid_len_dout.read());
}

void lstm_backward::thread_valid_len_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(valid_len_empty_n.read(), ap_const_logic_1))) {
        valid_len_read = ap_const_logic_1;
    } else {
        valid_len_read = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_0_V_address0 =  (sc_lv<4>) (newIndex9_i_fu_7703_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else {
        x_h_0_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_0_V_ce0 = ap_const_logic_1;
    } else {
        x_h_0_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_0_V_ce1 = ap_const_logic_1;
    } else {
        x_h_0_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()))) {
        x_h_0_V_d0 = input_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        x_h_0_V_d0 = h_t_1_V_q1.read();
    } else {
        x_h_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_0_V_d1 = input_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        x_h_0_V_d1 = h_t_1_V_q0.read();
    } else {
        x_h_0_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()))) {
        x_h_0_V_we0 = ap_const_logic_1;
    } else {
        x_h_0_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_0_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_0_V_we1 = ap_const_logic_1;
    } else {
        x_h_0_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_1_V_address1 =  (sc_lv<4>) (newIndex9_i_fu_7703_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        x_h_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        x_h_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else {
        x_h_1_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_1_V_ce0 = ap_const_logic_1;
    } else {
        x_h_1_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_1_V_ce1 = ap_const_logic_1;
    } else {
        x_h_1_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        x_h_1_V_d0 = h_t_2_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_1_V_d0 = input_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_1_V_d0 = h_t_2_V_q0.read();
    } else {
        x_h_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()))) {
        x_h_1_V_d1 = input_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        x_h_1_V_d1 = h_t_2_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_1_V_d1 = h_t_2_V_q1.read();
    } else {
        x_h_1_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_1_V_we0 = ap_const_logic_1;
    } else {
        x_h_1_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_1_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()))) {
        x_h_1_V_we1 = ap_const_logic_1;
    } else {
        x_h_1_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_2_V_address1 =  (sc_lv<4>) (newIndex9_i_fu_7703_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        x_h_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        x_h_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else {
        x_h_2_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_2_V_ce0 = ap_const_logic_1;
    } else {
        x_h_2_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_2_V_ce1 = ap_const_logic_1;
    } else {
        x_h_2_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_2_V_d0 = input_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        x_h_2_V_d0 = h_t_3_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        x_h_2_V_d0 = h_t_3_V_q0.read();
    } else {
        x_h_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_2_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_2_V_d1 = h_t_3_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        x_h_2_V_d1 = input_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_2_V_d1 = h_t_3_V_q1.read();
    } else {
        x_h_2_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_2_V_we0 = ap_const_logic_1;
    } else {
        x_h_2_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_2_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        x_h_2_V_we1 = ap_const_logic_1;
    } else {
        x_h_2_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_3_V_address1 =  (sc_lv<4>) (newIndex9_i_fu_7703_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        x_h_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        x_h_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else {
        x_h_3_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_3_V_ce0 = ap_const_logic_1;
    } else {
        x_h_3_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_3_V_ce1 = ap_const_logic_1;
    } else {
        x_h_3_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_3_V_d0 = input_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        x_h_3_V_d0 = h_t_4_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        x_h_3_V_d0 = h_t_4_V_q0.read();
    } else {
        x_h_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_3_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_3_V_d1 = h_t_4_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        x_h_3_V_d1 = input_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_3_V_d1 = h_t_4_V_q1.read();
    } else {
        x_h_3_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_3_V_we0 = ap_const_logic_1;
    } else {
        x_h_3_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_3_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        x_h_3_V_we1 = ap_const_logic_1;
    } else {
        x_h_3_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_4_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_4_V_address1 =  (sc_lv<4>) (newIndex9_i_fu_7703_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        x_h_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        x_h_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else {
        x_h_4_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()))) {
        x_h_4_V_ce0 = ap_const_logic_1;
    } else {
        x_h_4_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_4_V_ce1 = ap_const_logic_1;
    } else {
        x_h_4_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_4_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()))) {
        x_h_4_V_d0 = input_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_4_V_d0 = h_t_5_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_4_V_d0 = h_t_5_V_q0.read();
    } else {
        x_h_4_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_4_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        x_h_4_V_d1 = input_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        x_h_4_V_d1 = h_t_5_V_q1.read();
    } else {
        x_h_4_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()))) {
        x_h_4_V_we0 = ap_const_logic_1;
    } else {
        x_h_4_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_4_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        x_h_4_V_we1 = ap_const_logic_1;
    } else {
        x_h_4_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_5_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_5_V_address1 =  (sc_lv<4>) (newIndex9_i_fu_7703_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        x_h_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        x_h_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else {
        x_h_5_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()))) {
        x_h_5_V_ce0 = ap_const_logic_1;
    } else {
        x_h_5_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_5_V_ce1 = ap_const_logic_1;
    } else {
        x_h_5_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_5_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()))) {
        x_h_5_V_d0 = input_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_5_V_d0 = h_t_6_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_5_V_d0 = h_t_6_V_q0.read();
    } else {
        x_h_5_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_5_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        x_h_5_V_d1 = input_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        x_h_5_V_d1 = h_t_6_V_q1.read();
    } else {
        x_h_5_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()))) {
        x_h_5_V_we0 = ap_const_logic_1;
    } else {
        x_h_5_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_5_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        x_h_5_V_we1 = ap_const_logic_1;
    } else {
        x_h_5_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        x_h_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        x_h_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_6_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_6_V_address1 =  (sc_lv<4>) (newIndex9_i_fu_7703_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        x_h_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        x_h_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else {
        x_h_6_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()))) {
        x_h_6_V_ce0 = ap_const_logic_1;
    } else {
        x_h_6_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_6_V_ce1 = ap_const_logic_1;
    } else {
        x_h_6_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_6_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()))) {
        x_h_6_V_d0 = input_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_6_V_d0 = h_t_7_V_q0.read();
    } else {
        x_h_6_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_6_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        x_h_6_V_d1 = input_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_6_V_d1 = h_t_7_V_q1.read();
    } else {
        x_h_6_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()))) {
        x_h_6_V_we0 = ap_const_logic_1;
    } else {
        x_h_6_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_6_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        x_h_6_V_we1 = ap_const_logic_1;
    } else {
        x_h_6_V_we1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        x_h_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        x_h_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else {
        x_h_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_7_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_7_V_address1 =  (sc_lv<4>) (newIndex9_i_fu_7703_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        x_h_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_7_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_backward::thread_x_h_7_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        x_h_7_V_ce0 = ap_const_logic_1;
    } else {
        x_h_7_V_ce0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_7_V_ce1 = ap_const_logic_1;
    } else {
        x_h_7_V_ce1 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_7_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        x_h_7_V_d0 = input_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        x_h_7_V_d0 = h_t_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_7_V_d0 = h_t_0_V_q1.read();
    } else {
        x_h_7_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_7_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()))) {
        x_h_7_V_d1 = input_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_7_V_d1 = h_t_0_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_7_V_d1 = h_t_0_V_q0.read();
    } else {
        x_h_7_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_backward::thread_x_h_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        x_h_7_V_we0 = ap_const_logic_1;
    } else {
        x_h_7_V_we0 = ap_const_logic_0;
    }
}

void lstm_backward::thread_x_h_7_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()))) {
        x_h_7_V_we1 = ap_const_logic_1;
    } else {
        x_h_7_V_we1 = ap_const_logic_0;
    }
}

}

