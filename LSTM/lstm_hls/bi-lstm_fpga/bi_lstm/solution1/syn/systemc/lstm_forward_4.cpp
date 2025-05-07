#include "lstm_forward.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void lstm_forward::thread_o_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        o_1_V_we1 = ap_const_logic_1;
    } else {
        o_1_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        o_2_V_address0 =  (sc_lv<3>) (newIndex8_i_reg_20043.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_2_V_address0 =  (sc_lv<3>) (ap_const_lv64_1);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        o_2_V_address0 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_2_V_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        o_2_V_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)))) {
        o_2_V_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_2_V_address0 = grp_sigmoid_fu_6997_res_2_V_address0.read();
    } else {
        o_2_V_address0 = "XXX";
    }
}

void lstm_forward::thread_o_2_V_address1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        o_2_V_address1 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        o_2_V_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)))) {
        o_2_V_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)))) {
        o_2_V_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        o_2_V_address1 = "XXX";
    }
}

void lstm_forward::thread_o_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        o_2_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_2_V_ce0 = grp_sigmoid_fu_6997_res_2_V_ce0.read();
    } else {
        o_2_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_2_V_ce1() {
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
        o_2_V_ce1 = ap_const_logic_1;
    } else {
        o_2_V_ce1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_2_V_d0 = tmp_127_17_i_reg_19818.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        o_2_V_d0 = tmp_127_2_i_reg_19173.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_2_V_d0 = ap_const_lv16_180;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_2_V_d0 = ap_const_lv16_40;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_2_V_d0 = ap_const_lv16_FE30;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_2_V_d0 = grp_sigmoid_fu_6997_res_2_V_d0.read();
    } else {
        o_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_2_V_d1 = tmp_127_41_i_reg_20038.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_2_V_d1 = tmp_127_i_73_reg_19518.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_2_V_d1 = tmp_127_25_i_reg_18608.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_2_V_d1 = tmp_127_33_i_reg_18293.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_2_V_d1 = ap_const_lv16_310;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_2_V_d1 = ap_const_lv16_1A0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_2_V_d1 = ap_const_lv16_80;
    } else {
        o_2_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_i_reg_17559_pp0_iter1_reg.read())))) {
        o_2_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_2_V_we0 = grp_sigmoid_fu_6997_res_2_V_we0.read();
    } else {
        o_2_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_i_reg_17559_pp0_iter1_reg.read())))) {
        o_2_V_we1 = ap_const_logic_1;
    } else {
        o_2_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        o_3_V_address0 =  (sc_lv<3>) (newIndex8_i_reg_20043.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_3_V_address0 =  (sc_lv<3>) (ap_const_lv64_1);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        o_3_V_address0 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)))) {
        o_3_V_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        o_3_V_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)))) {
        o_3_V_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_3_V_address0 = grp_sigmoid_fu_6997_res_3_V_address0.read();
    } else {
        o_3_V_address0 = "XXX";
    }
}

void lstm_forward::thread_o_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_3_V_address1 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_3_V_address1 =  (sc_lv<3>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_3_V_address1 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)))) {
        o_3_V_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_3_V_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        o_3_V_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        o_3_V_address1 = "XXX";
    }
}

void lstm_forward::thread_o_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        o_3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_3_V_ce0 = grp_sigmoid_fu_6997_res_3_V_ce0.read();
    } else {
        o_3_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_3_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        o_3_V_ce1 = ap_const_logic_1;
    } else {
        o_3_V_ce1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_3_V_d0 = tmp_127_18_i_reg_19938.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_3_V_d0 = tmp_127_26_i_reg_18273.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_3_V_d0 = ap_const_lv16_D0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_3_V_d0 = ap_const_lv16_1A0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_3_V_d0 = ap_const_lv16_FFB0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_3_V_d0 = grp_sigmoid_fu_6997_res_3_V_d0.read();
    } else {
        o_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_3_V_d1 = tmp_127_10_i_reg_19798.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_3_V_d1 = tmp_127_34_i_reg_20018.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_3_V_d1 = tmp_127_3_i_reg_19498.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_3_V_d1 = tmp_127_42_i_reg_18693.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_3_V_d1 = ap_const_lv16_FE60;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_3_V_d1 = ap_const_lv16_100;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_3_V_d1 = ap_const_lv16_40;
    } else {
        o_3_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_i_reg_17559_pp0_iter1_reg.read())))) {
        o_3_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_3_V_we0 = grp_sigmoid_fu_6997_res_3_V_we0.read();
    } else {
        o_3_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_i_reg_17559_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_i_reg_17559_pp0_iter1_reg.read())))) {
        o_3_V_we1 = ap_const_logic_1;
    } else {
        o_3_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        o_4_V_address0 =  (sc_lv<3>) (newIndex8_i_reg_20043.read());
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_4_V_address0 = grp_sigmoid_fu_6997_res_4_V_address0.read();
    } else {
        o_4_V_address0 = "XXX";
    }
}

void lstm_forward::thread_o_4_V_address1() {
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

void lstm_forward::thread_o_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        o_4_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_4_V_ce0 = grp_sigmoid_fu_6997_res_4_V_ce0.read();
    } else {
        o_4_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_4_V_ce1() {
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

void lstm_forward::thread_o_4_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_4_V_d0 = tmp_127_4_i_reg_19778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_4_V_d0 = grp_fu_13990_p3.read().range(22, 7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_4_V_d0 = ap_const_lv16_340;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_4_V_d0 = ap_const_lv16_E0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_4_V_d0 = ap_const_lv16_50;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_4_V_d0 = grp_sigmoid_fu_6997_res_4_V_d0.read();
    } else {
        o_4_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_4_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_4_V_d1 = tmp_127_11_i_reg_19918.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        o_4_V_d1 = tmp_127_43_i_reg_19873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        o_4_V_d1 = tmp_127_27_i_reg_19258.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_4_V_d1 = tmp_127_35_i_reg_19013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_4_V_d1 = ap_const_lv16_F0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_4_V_d1 = ap_const_lv16_110;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_4_V_d1 = ap_const_lv16_2C0;
    } else {
        o_4_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_4_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_i_reg_17559_pp0_iter1_reg.read())))) {
        o_4_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_4_V_we0 = grp_sigmoid_fu_6997_res_4_V_we0.read();
    } else {
        o_4_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_4_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_i_reg_17559_pp0_iter1_reg.read())))) {
        o_4_V_we1 = ap_const_logic_1;
    } else {
        o_4_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        o_5_V_address0 =  (sc_lv<3>) (newIndex8_i_reg_20043.read());
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_5_V_address0 = grp_sigmoid_fu_6997_res_5_V_address0.read();
    } else {
        o_5_V_address0 = "XXX";
    }
}

void lstm_forward::thread_o_5_V_address1() {
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

void lstm_forward::thread_o_5_V_ce0() {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        o_5_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_5_V_ce0 = grp_sigmoid_fu_6997_res_5_V_ce0.read();
    } else {
        o_5_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_5_V_ce1() {
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

void lstm_forward::thread_o_5_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        o_5_V_d0 = tmp_127_36_i_reg_19278.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_5_V_d0 = grp_fu_14438_p3.read().range(22, 7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_5_V_d0 = ap_const_lv16_E0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        o_5_V_d0 = ap_const_lv16_B0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_5_V_d0 = grp_sigmoid_fu_6997_res_5_V_d0.read();
    } else {
        o_5_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_5_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_5_V_d1 = tmp_127_5_i_reg_19898.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_5_V_d1 = tmp_127_28_i_reg_19598.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_5_V_d1 = tmp_127_44_i_reg_19023.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_5_V_d1 = grp_fu_13926_p3.read().range(22, 7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_5_V_d1 = ap_const_lv16_60;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_5_V_d1 = ap_const_lv16_210;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_5_V_d1 = ap_const_lv16_110;
    } else {
        o_5_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_5_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        o_5_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_5_V_we0 = grp_sigmoid_fu_6997_res_5_V_we0.read();
    } else {
        o_5_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_5_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_i_reg_17559_pp0_iter1_reg.read())))) {
        o_5_V_we1 = ap_const_logic_1;
    } else {
        o_5_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        o_6_V_address0 =  (sc_lv<3>) (newIndex8_i_reg_20043.read());
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_6_V_address0 = grp_sigmoid_fu_6997_res_6_V_address0.read();
    } else {
        o_6_V_address0 = "XXX";
    }
}

void lstm_forward::thread_o_6_V_address1() {
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

void lstm_forward::thread_o_6_V_ce0() {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()))) {
        o_6_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_6_V_ce0 = grp_sigmoid_fu_6997_res_6_V_ce0.read();
    } else {
        o_6_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_6_V_ce1() {
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

void lstm_forward::thread_o_6_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        o_6_V_d0 = grp_fu_14806_p3.read().range(22, 7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_6_V_d0 = tmp_127_13_i_reg_18573.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_6_V_d0 = tmp_127_6_i_reg_18233.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_6_V_d0 = ap_const_lv16_60;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_6_V_d0 = ap_const_lv16_FF80;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_6_V_d0 = ap_const_lv16_FF90;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_6_V_d0 = grp_sigmoid_fu_6997_res_6_V_d0.read();
    } else {
        o_6_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_6_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        o_6_V_d1 = tmp_127_29_i_reg_19838.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_6_V_d1 = tmp_127_37_i_reg_19618.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        o_6_V_d1 = tmp_127_21_i_reg_19228.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_6_V_d1 = ap_const_lv16_A0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_6_V_d1 = ap_const_lv16_150;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_6_V_d1 = ap_const_lv16_160;
    } else {
        o_6_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_6_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        o_6_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_6_V_we0 = grp_sigmoid_fu_6997_res_6_V_we0.read();
    } else {
        o_6_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_6_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_i_reg_17559_pp0_iter1_reg.read())))) {
        o_6_V_we1 = ap_const_logic_1;
    } else {
        o_6_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        o_7_V_address0 =  (sc_lv<3>) (newIndex8_i_reg_20043.read());
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_7_V_address0 = grp_sigmoid_fu_6997_res_7_V_address0.read();
    } else {
        o_7_V_address0 = "XXX";
    }
}

void lstm_forward::thread_o_7_V_address1() {
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

void lstm_forward::thread_o_7_V_ce0() {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        o_7_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_7_V_ce0 = grp_sigmoid_fu_6997_res_7_V_ce0.read();
    } else {
        o_7_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_7_V_ce1() {
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

void lstm_forward::thread_o_7_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_7_V_d0 = tmp_127_22_i_reg_19578.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        o_7_V_d0 = tmp_127_14_i_reg_18973.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        o_7_V_d0 = grp_fu_14150_p3.read().range(22, 7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_7_V_d0 = ap_const_lv16_290;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_7_V_d0 = ap_const_lv16_120;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_7_V_d0 = ap_const_lv16_10;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_7_V_d0 = grp_sigmoid_fu_6997_res_7_V_d0.read();
    } else {
        o_7_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_7_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        o_7_V_d1 = tmp_127_30_i_reg_19998.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        o_7_V_d1 = tmp_127_38_i_reg_19858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        o_7_V_d1 = tmp_127_46_i_reg_19658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o_7_V_d1 = ap_const_lv16_180;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        o_7_V_d1 = ap_const_lv16_FF60;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o_7_V_d1 = ap_const_lv16_250;
    } else {
        o_7_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_o_7_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        o_7_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_7_V_we0 = grp_sigmoid_fu_6997_res_7_V_we0.read();
    } else {
        o_7_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_o_7_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7217_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(exitcond2_i_reg_17559.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_i_reg_17559_pp0_iter1_reg.read())))) {
        o_7_V_we1 = ap_const_logic_1;
    } else {
        o_7_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_p_1_i_fu_12333_p3() {
    p_1_i_fu_12333_p3 = (!tmp_131_1_i_fu_12321_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_131_1_i_fu_12321_p2.read()[0].to_bool())? p_Result_1_i_cast_fu_12304_p1.read(): ret_V_7_1_i_fu_12327_p2.read());
}

void lstm_forward::thread_p_Result_1_i_cast_fu_12304_p1() {
    p_Result_1_i_cast_fu_12304_p1 = esl_sext<12,11>(tmp_259_fu_12294_p4.read());
}

void lstm_forward::thread_p_Result_i_cast_fu_12136_p1() {
    p_Result_i_cast_fu_12136_p1 = esl_sext<12,11>(tmp_255_fu_12126_p4.read());
}

void lstm_forward::thread_p_Val2_50_2_i_fu_12451_p3() {
    p_Val2_50_2_i_fu_12451_p3 = (!tmp_118_2_i_fu_12412_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_118_2_i_fu_12412_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp2_fu_12445_p2.read());
}

void lstm_forward::thread_p_Val2_50_3_i_fu_12607_p3() {
    p_Val2_50_3_i_fu_12607_p3 = (!tmp_118_3_i_fu_12568_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_118_3_i_fu_12568_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp3_fu_12601_p2.read());
}

void lstm_forward::thread_p_Val2_50_4_i_fu_12780_p3() {
    p_Val2_50_4_i_fu_12780_p3 = (!tmp_118_4_i_fu_12741_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_118_4_i_fu_12741_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp4_fu_12774_p2.read());
}

void lstm_forward::thread_p_Val2_50_5_i_fu_12953_p3() {
    p_Val2_50_5_i_fu_12953_p3 = (!tmp_118_5_i_fu_12914_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_118_5_i_fu_12914_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp5_fu_12947_p2.read());
}

void lstm_forward::thread_p_Val2_50_6_i_fu_13126_p3() {
    p_Val2_50_6_i_fu_13126_p3 = (!tmp_118_6_i_fu_13087_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_118_6_i_fu_13087_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp6_fu_13120_p2.read());
}

void lstm_forward::thread_p_Val2_50_7_i_fu_13299_p3() {
    p_Val2_50_7_i_fu_13299_p3 = (!tmp_118_7_i_fu_13260_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_118_7_i_fu_13260_p2.read()[0].to_bool())? ap_const_lv12_0: phitmp7_fu_13293_p2.read());
}

void lstm_forward::thread_p_i_fu_12165_p3() {
    p_i_fu_12165_p3 = (!tmp_131_i_fu_12153_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_131_i_fu_12153_p2.read()[0].to_bool())? p_Result_i_cast_fu_12136_p1.read(): ret_V_7_i_fu_12159_p2.read());
}

void lstm_forward::thread_p_shl8_1_cast_i_fu_12284_p1() {
    p_shl8_1_cast_i_fu_12284_p1 = esl_sext<25,16>(tmp_278_fu_12276_p3.read());
}

void lstm_forward::thread_p_shl8_2_cast_i_fu_12485_p1() {
    p_shl8_2_cast_i_fu_12485_p1 = esl_sext<25,16>(tmp_287_fu_12478_p3.read());
}

void lstm_forward::thread_p_shl8_3_cast_i_fu_12658_p1() {
    p_shl8_3_cast_i_fu_12658_p1 = esl_sext<25,16>(tmp_296_fu_12651_p3.read());
}

void lstm_forward::thread_p_shl8_4_cast_i_fu_12831_p1() {
    p_shl8_4_cast_i_fu_12831_p1 = esl_sext<25,16>(tmp_305_fu_12824_p3.read());
}

void lstm_forward::thread_p_shl8_5_cast_i_fu_13004_p1() {
    p_shl8_5_cast_i_fu_13004_p1 = esl_sext<25,16>(tmp_314_fu_12997_p3.read());
}

void lstm_forward::thread_p_shl8_6_cast_i_fu_13177_p1() {
    p_shl8_6_cast_i_fu_13177_p1 = esl_sext<25,16>(tmp_318_fu_13170_p3.read());
}

void lstm_forward::thread_p_shl8_7_cast_i_fu_13342_p1() {
    p_shl8_7_cast_i_fu_13342_p1 = esl_sext<25,16>(tmp_322_fu_13335_p3.read());
}

void lstm_forward::thread_p_shl8_cast_i_fu_12116_p1() {
    p_shl8_cast_i_fu_12116_p1 = esl_sext<25,16>(tmp_269_fu_12108_p3.read());
}

void lstm_forward::thread_p_shl_1_i_fu_12272_p1() {
    p_shl_1_i_fu_12272_p1 = esl_sext<25,24>(tmp_276_fu_12264_p3.read());
}

void lstm_forward::thread_p_shl_2_i_fu_12474_p1() {
    p_shl_2_i_fu_12474_p1 = esl_sext<25,24>(tmp_285_fu_12467_p3.read());
}

void lstm_forward::thread_p_shl_3_i_fu_12647_p1() {
    p_shl_3_i_fu_12647_p1 = esl_sext<25,24>(tmp_294_fu_12640_p3.read());
}

void lstm_forward::thread_p_shl_4_i_fu_12820_p1() {
    p_shl_4_i_fu_12820_p1 = esl_sext<25,24>(tmp_303_fu_12813_p3.read());
}

void lstm_forward::thread_p_shl_5_i_fu_12993_p1() {
    p_shl_5_i_fu_12993_p1 = esl_sext<25,24>(tmp_312_fu_12986_p3.read());
}

void lstm_forward::thread_p_shl_6_i_fu_13166_p1() {
    p_shl_6_i_fu_13166_p1 = esl_sext<25,24>(tmp_317_fu_13159_p3.read());
}

void lstm_forward::thread_p_shl_7_i_fu_13331_p1() {
    p_shl_7_i_fu_13331_p1 = esl_sext<25,24>(tmp_321_fu_13324_p3.read());
}

void lstm_forward::thread_p_shl_i_fu_12104_p1() {
    p_shl_i_fu_12104_p1 = esl_sext<25,24>(tmp_267_fu_12096_p3.read());
}

void lstm_forward::thread_phitmp1_fu_12258_p2() {
    phitmp1_fu_12258_p2 = (!tmp_258_fu_12254_p1.read().is_01() || !ap_const_lv12_200.is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_258_fu_12254_p1.read()) + sc_biguint<12>(ap_const_lv12_200));
}

void lstm_forward::thread_phitmp2_fu_12445_p2() {
    phitmp2_fu_12445_p2 = (!ap_const_lv12_200.is_01() || !tmp_262_fu_12441_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_262_fu_12441_p1.read()));
}

void lstm_forward::thread_phitmp3_fu_12601_p2() {
    phitmp3_fu_12601_p2 = (!ap_const_lv12_200.is_01() || !tmp_271_fu_12597_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_271_fu_12597_p1.read()));
}

void lstm_forward::thread_phitmp4_fu_12774_p2() {
    phitmp4_fu_12774_p2 = (!ap_const_lv12_200.is_01() || !tmp_280_fu_12770_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_280_fu_12770_p1.read()));
}

void lstm_forward::thread_phitmp5_fu_12947_p2() {
    phitmp5_fu_12947_p2 = (!ap_const_lv12_200.is_01() || !tmp_289_fu_12943_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_289_fu_12943_p1.read()));
}

void lstm_forward::thread_phitmp6_fu_13120_p2() {
    phitmp6_fu_13120_p2 = (!ap_const_lv12_200.is_01() || !tmp_298_fu_13116_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_298_fu_13116_p1.read()));
}

void lstm_forward::thread_phitmp7_fu_13293_p2() {
    phitmp7_fu_13293_p2 = (!ap_const_lv12_200.is_01() || !tmp_307_fu_13289_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_200) + sc_bigint<12>(tmp_307_fu_13289_p1.read()));
}

void lstm_forward::thread_phitmp_fu_12090_p2() {
    phitmp_fu_12090_p2 = (!tmp_254_fu_12086_p1.read().is_01() || !ap_const_lv12_200.is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_254_fu_12086_p1.read()) + sc_biguint<12>(ap_const_lv12_200));
}

void lstm_forward::thread_r_V_31_1_i_fu_12288_p2() {
    r_V_31_1_i_fu_12288_p2 = (!p_shl_1_i_fu_12272_p1.read().is_01() || !p_shl8_1_cast_i_fu_12284_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_1_i_fu_12272_p1.read()) - sc_bigint<25>(p_shl8_1_cast_i_fu_12284_p1.read()));
}

void lstm_forward::thread_r_V_31_2_i_fu_12489_p2() {
    r_V_31_2_i_fu_12489_p2 = (!p_shl_2_i_fu_12474_p1.read().is_01() || !p_shl8_2_cast_i_fu_12485_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_2_i_fu_12474_p1.read()) - sc_bigint<25>(p_shl8_2_cast_i_fu_12485_p1.read()));
}

void lstm_forward::thread_r_V_31_3_i_fu_12662_p2() {
    r_V_31_3_i_fu_12662_p2 = (!p_shl_3_i_fu_12647_p1.read().is_01() || !p_shl8_3_cast_i_fu_12658_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_3_i_fu_12647_p1.read()) - sc_bigint<25>(p_shl8_3_cast_i_fu_12658_p1.read()));
}

void lstm_forward::thread_r_V_31_4_i_fu_12835_p2() {
    r_V_31_4_i_fu_12835_p2 = (!p_shl_4_i_fu_12820_p1.read().is_01() || !p_shl8_4_cast_i_fu_12831_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_4_i_fu_12820_p1.read()) - sc_bigint<25>(p_shl8_4_cast_i_fu_12831_p1.read()));
}

void lstm_forward::thread_r_V_31_5_i_fu_13008_p2() {
    r_V_31_5_i_fu_13008_p2 = (!p_shl_5_i_fu_12993_p1.read().is_01() || !p_shl8_5_cast_i_fu_13004_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_5_i_fu_12993_p1.read()) - sc_bigint<25>(p_shl8_5_cast_i_fu_13004_p1.read()));
}

void lstm_forward::thread_r_V_31_6_i_fu_13181_p2() {
    r_V_31_6_i_fu_13181_p2 = (!p_shl_6_i_fu_13166_p1.read().is_01() || !p_shl8_6_cast_i_fu_13177_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_6_i_fu_13166_p1.read()) - sc_bigint<25>(p_shl8_6_cast_i_fu_13177_p1.read()));
}

void lstm_forward::thread_r_V_31_7_i_fu_13346_p2() {
    r_V_31_7_i_fu_13346_p2 = (!p_shl_7_i_fu_13331_p1.read().is_01() || !p_shl8_7_cast_i_fu_13342_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_7_i_fu_13331_p1.read()) - sc_bigint<25>(p_shl8_7_cast_i_fu_13342_p1.read()));
}

void lstm_forward::thread_r_V_31_i_fu_12120_p2() {
    r_V_31_i_fu_12120_p2 = (!p_shl_i_fu_12104_p1.read().is_01() || !p_shl8_cast_i_fu_12116_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl_i_fu_12104_p1.read()) - sc_bigint<25>(p_shl8_cast_i_fu_12116_p1.read()));
}

void lstm_forward::thread_ret_V_7_1_i_fu_12327_p2() {
    ret_V_7_1_i_fu_12327_p2 = (!ap_const_lv12_1.is_01() || !p_Result_1_i_cast_fu_12304_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1) + sc_bigint<12>(p_Result_1_i_cast_fu_12304_p1.read()));
}

void lstm_forward::thread_ret_V_7_i_fu_12159_p2() {
    ret_V_7_i_fu_12159_p2 = (!ap_const_lv12_1.is_01() || !p_Result_i_cast_fu_12136_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1) + sc_bigint<12>(p_Result_i_cast_fu_12136_p1.read()));
}

void lstm_forward::thread_t_fu_7222_p2() {
    t_fu_7222_p2 = (!t_i_reg_6839.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(t_i_reg_6839.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void lstm_forward::thread_tanh_lut_V162_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        tanh_lut_V162_address0 =  (sc_lv<8>) (tmp_132_7_i_fu_13402_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        tanh_lut_V162_address0 =  (sc_lv<8>) (tmp_132_6_i_fu_13237_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        tanh_lut_V162_address0 =  (sc_lv<8>) (tmp_132_5_i_fu_13064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        tanh_lut_V162_address0 =  (sc_lv<8>) (tmp_132_4_i_fu_12891_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        tanh_lut_V162_address0 =  (sc_lv<8>) (tmp_132_3_i_fu_12718_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        tanh_lut_V162_address0 =  (sc_lv<8>) (tmp_132_2_i_fu_12545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        tanh_lut_V162_address0 =  (sc_lv<8>) (tmp_132_1_i_fu_12346_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        tanh_lut_V162_address0 =  (sc_lv<8>) (tmp_132_i_fu_12178_p1.read());
    } else {
        tanh_lut_V162_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void lstm_forward::thread_tanh_lut_V162_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        tanh_lut_V162_ce0 = ap_const_logic_1;
    } else {
        tanh_lut_V162_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_tmp_117_1_i_fu_12215_p4() {
    tmp_117_1_i_fu_12215_p4 = grp_fu_15338_p3.read().range(26, 11);
}

void lstm_forward::thread_tmp_117_2_i_fu_12402_p4() {
    tmp_117_2_i_fu_12402_p4 = grp_fu_15360_p3.read().range(26, 11);
}

void lstm_forward::thread_tmp_117_3_i_fu_12558_p4() {
    tmp_117_3_i_fu_12558_p4 = grp_fu_15375_p3.read().range(26, 11);
}

void lstm_forward::thread_tmp_117_4_i_fu_12731_p4() {
    tmp_117_4_i_fu_12731_p4 = grp_fu_15397_p3.read().range(26, 11);
}

void lstm_forward::thread_tmp_117_5_i_fu_12904_p4() {
    tmp_117_5_i_fu_12904_p4 = grp_fu_15419_p3.read().range(26, 11);
}

void lstm_forward::thread_tmp_117_6_i_fu_13077_p4() {
    tmp_117_6_i_fu_13077_p4 = grp_fu_15441_p3.read().range(26, 11);
}

void lstm_forward::thread_tmp_117_7_i_fu_13250_p4() {
    tmp_117_7_i_fu_13250_p4 = grp_fu_15463_p3.read().range(26, 11);
}

void lstm_forward::thread_tmp_117_i_fu_12047_p4() {
    tmp_117_i_fu_12047_p4 = grp_fu_15316_p3.read().range(26, 11);
}

void lstm_forward::thread_tmp_118_1_i_fu_12225_p2() {
    tmp_118_1_i_fu_12225_p2 = (!tmp_117_1_i_fu_12215_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_1_i_fu_12215_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_forward::thread_tmp_118_2_i_fu_12412_p2() {
    tmp_118_2_i_fu_12412_p2 = (!tmp_117_2_i_fu_12402_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_2_i_fu_12402_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_forward::thread_tmp_118_3_i_fu_12568_p2() {
    tmp_118_3_i_fu_12568_p2 = (!tmp_117_3_i_fu_12558_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_3_i_fu_12558_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_forward::thread_tmp_118_4_i_fu_12741_p2() {
    tmp_118_4_i_fu_12741_p2 = (!tmp_117_4_i_fu_12731_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_4_i_fu_12731_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_forward::thread_tmp_118_5_i_fu_12914_p2() {
    tmp_118_5_i_fu_12914_p2 = (!tmp_117_5_i_fu_12904_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_5_i_fu_12904_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_forward::thread_tmp_118_6_i_fu_13087_p2() {
    tmp_118_6_i_fu_13087_p2 = (!tmp_117_6_i_fu_13077_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_6_i_fu_13077_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_forward::thread_tmp_118_7_i_fu_13260_p2() {
    tmp_118_7_i_fu_13260_p2 = (!tmp_117_7_i_fu_13250_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_7_i_fu_13250_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_forward::thread_tmp_118_i_fu_12057_p2() {
    tmp_118_i_fu_12057_p2 = (!tmp_117_i_fu_12047_p4.read().is_01() || !ap_const_lv16_E000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_i_fu_12047_p4.read()) < sc_bigint<16>(ap_const_lv16_E000));
}

void lstm_forward::thread_tmp_128_1_i_fu_12231_p2() {
    tmp_128_1_i_fu_12231_p2 = (!tmp_117_1_i_fu_12215_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_1_i_fu_12215_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_forward::thread_tmp_128_2_i_fu_12418_p2() {
    tmp_128_2_i_fu_12418_p2 = (!tmp_117_2_i_fu_12402_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_2_i_fu_12402_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_forward::thread_tmp_128_3_i_fu_12574_p2() {
    tmp_128_3_i_fu_12574_p2 = (!tmp_117_3_i_fu_12558_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_3_i_fu_12558_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_forward::thread_tmp_128_4_i_fu_12747_p2() {
    tmp_128_4_i_fu_12747_p2 = (!tmp_117_4_i_fu_12731_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_4_i_fu_12731_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_forward::thread_tmp_128_5_i_fu_12920_p2() {
    tmp_128_5_i_fu_12920_p2 = (!tmp_117_5_i_fu_12904_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_5_i_fu_12904_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_forward::thread_tmp_128_6_i_fu_13093_p2() {
    tmp_128_6_i_fu_13093_p2 = (!tmp_117_6_i_fu_13077_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_6_i_fu_13077_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_forward::thread_tmp_128_7_i_fu_13266_p2() {
    tmp_128_7_i_fu_13266_p2 = (!tmp_117_7_i_fu_13250_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_7_i_fu_13250_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_forward::thread_tmp_128_i_fu_12063_p2() {
    tmp_128_i_fu_12063_p2 = (!tmp_117_i_fu_12047_p4.read().is_01() || !ap_const_lv16_2000.is_01())? sc_lv<1>(): (sc_bigint<16>(tmp_117_i_fu_12047_p4.read()) > sc_bigint<16>(ap_const_lv16_2000));
}

void lstm_forward::thread_tmp_131_1_i_fu_12321_p2() {
    tmp_131_1_i_fu_12321_p2 = (!tmp_328_fu_12317_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_328_fu_12317_p1.read() == ap_const_lv14_0);
}

void lstm_forward::thread_tmp_131_2_i_fu_12507_p2() {
    tmp_131_2_i_fu_12507_p2 = (!tmp_331_fu_12503_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_331_fu_12503_p1.read() == ap_const_lv14_0);
}

void lstm_forward::thread_tmp_131_3_i_fu_12680_p2() {
    tmp_131_3_i_fu_12680_p2 = (!tmp_333_fu_12676_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_333_fu_12676_p1.read() == ap_const_lv14_0);
}

void lstm_forward::thread_tmp_131_4_i_fu_12853_p2() {
    tmp_131_4_i_fu_12853_p2 = (!tmp_335_fu_12849_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_335_fu_12849_p1.read() == ap_const_lv14_0);
}

void lstm_forward::thread_tmp_131_5_i_fu_13026_p2() {
    tmp_131_5_i_fu_13026_p2 = (!tmp_337_fu_13022_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_337_fu_13022_p1.read() == ap_const_lv14_0);
}

void lstm_forward::thread_tmp_131_6_i_fu_13199_p2() {
    tmp_131_6_i_fu_13199_p2 = (!tmp_339_fu_13195_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_339_fu_13195_p1.read() == ap_const_lv14_0);
}

void lstm_forward::thread_tmp_131_7_i_fu_13364_p2() {
    tmp_131_7_i_fu_13364_p2 = (!tmp_341_fu_13360_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_341_fu_13360_p1.read() == ap_const_lv14_0);
}

void lstm_forward::thread_tmp_131_i_fu_12153_p2() {
    tmp_131_i_fu_12153_p2 = (!tmp_325_fu_12149_p1.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_325_fu_12149_p1.read() == ap_const_lv14_0);
}

void lstm_forward::thread_tmp_132_1_i_fu_12346_p1() {
    tmp_132_1_i_fu_12346_p1 = esl_zext<64,8>(tmp_329_fu_12342_p1.read());
}

void lstm_forward::thread_tmp_132_2_i_fu_12545_p1() {
    tmp_132_2_i_fu_12545_p1 = esl_zext<64,8>(tmp_268_fu_12537_p3.read());
}

void lstm_forward::thread_tmp_132_3_i_fu_12718_p1() {
    tmp_132_3_i_fu_12718_p1 = esl_zext<64,8>(tmp_277_fu_12710_p3.read());
}

void lstm_forward::thread_tmp_132_4_i_fu_12891_p1() {
    tmp_132_4_i_fu_12891_p1 = esl_zext<64,8>(tmp_286_fu_12883_p3.read());
}

void lstm_forward::thread_tmp_132_5_i_fu_13064_p1() {
    tmp_132_5_i_fu_13064_p1 = esl_zext<64,8>(tmp_295_fu_13056_p3.read());
}

void lstm_forward::thread_tmp_132_6_i_fu_13237_p1() {
    tmp_132_6_i_fu_13237_p1 = esl_zext<64,8>(tmp_304_fu_13229_p3.read());
}

void lstm_forward::thread_tmp_132_7_i_fu_13402_p1() {
    tmp_132_7_i_fu_13402_p1 = esl_zext<64,8>(tmp_313_fu_13394_p3.read());
}

void lstm_forward::thread_tmp_132_i_fu_12178_p1() {
    tmp_132_i_fu_12178_p1 = esl_zext<64,8>(tmp_326_fu_12174_p1.read());
}

void lstm_forward::thread_tmp_251_cast_fu_7767_p1() {
    tmp_251_cast_fu_7767_p1 = esl_zext<64,8>(tmp_251_fu_7761_p2.read());
}

void lstm_forward::thread_tmp_251_fu_7761_p2() {
    tmp_251_fu_7761_p2 = (!ap_const_lv8_59.is_01() || !tmp_39_i_cast_fu_7757_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_59) + sc_biguint<8>(tmp_39_i_cast_fu_7757_p1.read()));
}

void lstm_forward::thread_tmp_252_cast_fu_8821_p1() {
    tmp_252_cast_fu_8821_p1 = esl_zext<64,9>(tmp_252_fu_8816_p2.read());
}

void lstm_forward::thread_tmp_252_fu_8816_p2() {
    tmp_252_fu_8816_p2 = (!ap_const_lv9_B2.is_01() || !tmp_39_i_cast2_reg_17852.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_B2) + sc_biguint<9>(tmp_39_i_cast2_reg_17852.read()));
}

void lstm_forward::thread_tmp_253_cast_fu_8218_p1() {
    tmp_253_cast_fu_8218_p1 = esl_zext<64,9>(tmp_253_fu_8213_p2.read());
}

void lstm_forward::thread_tmp_253_fu_8213_p2() {
    tmp_253_fu_8213_p2 = (!ap_const_lv9_10B.is_01() || !tmp_39_i_cast2_reg_17852.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_10B) + sc_biguint<9>(tmp_39_i_cast2_reg_17852.read()));
}

void lstm_forward::thread_tmp_254_fu_12086_p1() {
    tmp_254_fu_12086_p1 = esl_sext<12,11>(tmp_263_fu_12078_p3.read());
}

void lstm_forward::thread_tmp_255_fu_12126_p4() {
    tmp_255_fu_12126_p4 = r_V_31_i_fu_12120_p2.read().range(24, 14);
}

void lstm_forward::thread_tmp_256_cast_fu_7781_p1() {
    tmp_256_cast_fu_7781_p1 = esl_zext<64,9>(tmp_256_fu_7775_p2.read());
}

void lstm_forward::thread_tmp_256_fu_7775_p2() {
    tmp_256_fu_7775_p2 = (!ap_const_lv9_164.is_01() || !tmp_39_i_cast2_fu_7753_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_164) + sc_biguint<9>(tmp_39_i_cast2_fu_7753_p1.read()));
}

void lstm_forward::thread_tmp_257_cast_fu_7681_p1() {
    tmp_257_cast_fu_7681_p1 = esl_zext<64,10>(tmp_257_fu_7675_p2.read());
}

void lstm_forward::thread_tmp_257_fu_7675_p2() {
    tmp_257_fu_7675_p2 = (!ap_const_lv10_1BD.is_01() || !tmp_39_i_cast1_fu_7671_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1BD) + sc_biguint<10>(tmp_39_i_cast1_fu_7671_p1.read()));
}

void lstm_forward::thread_tmp_258_fu_12254_p1() {
    tmp_258_fu_12254_p1 = esl_sext<12,11>(tmp_272_fu_12246_p3.read());
}

void lstm_forward::thread_tmp_259_fu_12294_p4() {
    tmp_259_fu_12294_p4 = r_V_31_1_i_fu_12288_p2.read().range(24, 14);
}

void lstm_forward::thread_tmp_260_cast_fu_7695_p1() {
    tmp_260_cast_fu_7695_p1 = esl_zext<64,10>(tmp_260_fu_7689_p2.read());
}

void lstm_forward::thread_tmp_260_fu_7689_p2() {
    tmp_260_fu_7689_p2 = (!ap_const_lv10_216.is_01() || !tmp_39_i_cast1_fu_7671_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_216) + sc_biguint<10>(tmp_39_i_cast1_fu_7671_p1.read()));
}

void lstm_forward::thread_tmp_261_fu_12069_p4() {
    tmp_261_fu_12069_p4 = grp_fu_15316_p3.read().range(25, 15);
}

void lstm_forward::thread_tmp_262_fu_12441_p1() {
    tmp_262_fu_12441_p1 = esl_sext<12,11>(tmp_281_fu_12433_p3.read());
}

void lstm_forward::thread_tmp_263_fu_12078_p3() {
    tmp_263_fu_12078_p3 = (!tmp_128_i_fu_12063_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_128_i_fu_12063_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_261_fu_12069_p4.read());
}

void lstm_forward::thread_tmp_264_fu_12513_p4() {
    tmp_264_fu_12513_p4 = r_V_31_2_i_fu_12489_p2.read().range(21, 14);
}

void lstm_forward::thread_tmp_265_fu_12523_p2() {
    tmp_265_fu_12523_p2 = (!ap_const_lv8_1.is_01() || !tmp_264_fu_12513_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_264_fu_12513_p4.read()));
}

void lstm_forward::thread_tmp_266_fu_12529_p3() {
    tmp_266_fu_12529_p3 = (!tmp_131_2_i_fu_12507_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_131_2_i_fu_12507_p2.read()[0].to_bool())? tmp_264_fu_12513_p4.read(): tmp_265_fu_12523_p2.read());
}

void lstm_forward::thread_tmp_267_fu_12096_p3() {
    tmp_267_fu_12096_p3 = esl_concat<12,12>(p_Val2_50_i_reg_6915.read(), ap_const_lv12_0);
}

void lstm_forward::thread_tmp_268_fu_12537_p3() {
    tmp_268_fu_12537_p3 = (!tmp_330_fu_12495_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_330_fu_12495_p3.read()[0].to_bool())? tmp_266_fu_12529_p3.read(): tmp_264_fu_12513_p4.read());
}

void lstm_forward::thread_tmp_269_fu_12108_p3() {
    tmp_269_fu_12108_p3 = esl_concat<12,4>(p_Val2_50_i_reg_6915.read(), ap_const_lv4_0);
}

void lstm_forward::thread_tmp_270_fu_12237_p4() {
    tmp_270_fu_12237_p4 = grp_fu_15338_p3.read().range(25, 15);
}

void lstm_forward::thread_tmp_271_fu_12597_p1() {
    tmp_271_fu_12597_p1 = esl_sext<12,11>(tmp_290_fu_12589_p3.read());
}

void lstm_forward::thread_tmp_272_fu_12246_p3() {
    tmp_272_fu_12246_p3 = (!tmp_128_1_i_fu_12231_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_128_1_i_fu_12231_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_270_fu_12237_p4.read());
}

void lstm_forward::thread_tmp_273_fu_12686_p4() {
    tmp_273_fu_12686_p4 = r_V_31_3_i_fu_12662_p2.read().range(21, 14);
}

void lstm_forward::thread_tmp_274_fu_12696_p2() {
    tmp_274_fu_12696_p2 = (!ap_const_lv8_1.is_01() || !tmp_273_fu_12686_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_273_fu_12686_p4.read()));
}

void lstm_forward::thread_tmp_275_fu_12702_p3() {
    tmp_275_fu_12702_p3 = (!tmp_131_3_i_fu_12680_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_131_3_i_fu_12680_p2.read()[0].to_bool())? tmp_273_fu_12686_p4.read(): tmp_274_fu_12696_p2.read());
}

void lstm_forward::thread_tmp_276_fu_12264_p3() {
    tmp_276_fu_12264_p3 = esl_concat<12,12>(p_Val2_50_1_i_reg_6935.read(), ap_const_lv12_0);
}

void lstm_forward::thread_tmp_277_fu_12710_p3() {
    tmp_277_fu_12710_p3 = (!tmp_332_fu_12668_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_332_fu_12668_p3.read()[0].to_bool())? tmp_275_fu_12702_p3.read(): tmp_273_fu_12686_p4.read());
}

void lstm_forward::thread_tmp_278_fu_12276_p3() {
    tmp_278_fu_12276_p3 = esl_concat<12,4>(p_Val2_50_1_i_reg_6935.read(), ap_const_lv4_0);
}

void lstm_forward::thread_tmp_279_fu_12424_p4() {
    tmp_279_fu_12424_p4 = grp_fu_15360_p3.read().range(25, 15);
}

void lstm_forward::thread_tmp_280_fu_12770_p1() {
    tmp_280_fu_12770_p1 = esl_sext<12,11>(tmp_299_fu_12762_p3.read());
}

void lstm_forward::thread_tmp_281_fu_12433_p3() {
    tmp_281_fu_12433_p3 = (!tmp_128_2_i_fu_12418_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_128_2_i_fu_12418_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_279_fu_12424_p4.read());
}

void lstm_forward::thread_tmp_282_fu_12859_p4() {
    tmp_282_fu_12859_p4 = r_V_31_4_i_fu_12835_p2.read().range(21, 14);
}

void lstm_forward::thread_tmp_283_fu_12869_p2() {
    tmp_283_fu_12869_p2 = (!ap_const_lv8_1.is_01() || !tmp_282_fu_12859_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_282_fu_12859_p4.read()));
}

void lstm_forward::thread_tmp_284_fu_12875_p3() {
    tmp_284_fu_12875_p3 = (!tmp_131_4_i_fu_12853_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_131_4_i_fu_12853_p2.read()[0].to_bool())? tmp_282_fu_12859_p4.read(): tmp_283_fu_12869_p2.read());
}

void lstm_forward::thread_tmp_285_fu_12467_p3() {
    tmp_285_fu_12467_p3 = esl_concat<12,12>(p_Val2_50_2_i_reg_20260.read(), ap_const_lv12_0);
}

void lstm_forward::thread_tmp_286_fu_12883_p3() {
    tmp_286_fu_12883_p3 = (!tmp_334_fu_12841_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_334_fu_12841_p3.read()[0].to_bool())? tmp_284_fu_12875_p3.read(): tmp_282_fu_12859_p4.read());
}

void lstm_forward::thread_tmp_287_fu_12478_p3() {
    tmp_287_fu_12478_p3 = esl_concat<12,4>(p_Val2_50_2_i_reg_20260.read(), ap_const_lv4_0);
}

void lstm_forward::thread_tmp_288_fu_12580_p4() {
    tmp_288_fu_12580_p4 = grp_fu_15375_p3.read().range(25, 15);
}

void lstm_forward::thread_tmp_289_fu_12943_p1() {
    tmp_289_fu_12943_p1 = esl_sext<12,11>(tmp_308_fu_12935_p3.read());
}

void lstm_forward::thread_tmp_290_fu_12589_p3() {
    tmp_290_fu_12589_p3 = (!tmp_128_3_i_fu_12574_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_128_3_i_fu_12574_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_288_fu_12580_p4.read());
}

void lstm_forward::thread_tmp_291_fu_13032_p4() {
    tmp_291_fu_13032_p4 = r_V_31_5_i_fu_13008_p2.read().range(21, 14);
}

void lstm_forward::thread_tmp_292_fu_13042_p2() {
    tmp_292_fu_13042_p2 = (!ap_const_lv8_1.is_01() || !tmp_291_fu_13032_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_291_fu_13032_p4.read()));
}

void lstm_forward::thread_tmp_293_fu_13048_p3() {
    tmp_293_fu_13048_p3 = (!tmp_131_5_i_fu_13026_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_131_5_i_fu_13026_p2.read()[0].to_bool())? tmp_291_fu_13032_p4.read(): tmp_292_fu_13042_p2.read());
}

void lstm_forward::thread_tmp_294_fu_12640_p3() {
    tmp_294_fu_12640_p3 = esl_concat<12,12>(p_Val2_50_3_i_reg_20302.read(), ap_const_lv12_0);
}

void lstm_forward::thread_tmp_295_fu_13056_p3() {
    tmp_295_fu_13056_p3 = (!tmp_336_fu_13014_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_336_fu_13014_p3.read()[0].to_bool())? tmp_293_fu_13048_p3.read(): tmp_291_fu_13032_p4.read());
}

void lstm_forward::thread_tmp_296_fu_12651_p3() {
    tmp_296_fu_12651_p3 = esl_concat<12,4>(p_Val2_50_3_i_reg_20302.read(), ap_const_lv4_0);
}

void lstm_forward::thread_tmp_297_fu_12753_p4() {
    tmp_297_fu_12753_p4 = grp_fu_15397_p3.read().range(25, 15);
}

void lstm_forward::thread_tmp_298_fu_13116_p1() {
    tmp_298_fu_13116_p1 = esl_sext<12,11>(tmp_316_fu_13108_p3.read());
}

void lstm_forward::thread_tmp_299_fu_12762_p3() {
    tmp_299_fu_12762_p3 = (!tmp_128_4_i_fu_12747_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_128_4_i_fu_12747_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_297_fu_12753_p4.read());
}

void lstm_forward::thread_tmp_300_fu_13205_p4() {
    tmp_300_fu_13205_p4 = r_V_31_6_i_fu_13181_p2.read().range(21, 14);
}

void lstm_forward::thread_tmp_301_fu_13215_p2() {
    tmp_301_fu_13215_p2 = (!ap_const_lv8_1.is_01() || !tmp_300_fu_13205_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_300_fu_13205_p4.read()));
}

void lstm_forward::thread_tmp_302_fu_13221_p3() {
    tmp_302_fu_13221_p3 = (!tmp_131_6_i_fu_13199_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_131_6_i_fu_13199_p2.read()[0].to_bool())? tmp_300_fu_13205_p4.read(): tmp_301_fu_13215_p2.read());
}

void lstm_forward::thread_tmp_303_fu_12813_p3() {
    tmp_303_fu_12813_p3 = esl_concat<12,12>(p_Val2_50_4_i_reg_20349.read(), ap_const_lv12_0);
}

void lstm_forward::thread_tmp_304_fu_13229_p3() {
    tmp_304_fu_13229_p3 = (!tmp_338_fu_13187_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_338_fu_13187_p3.read()[0].to_bool())? tmp_302_fu_13221_p3.read(): tmp_300_fu_13205_p4.read());
}

void lstm_forward::thread_tmp_305_fu_12824_p3() {
    tmp_305_fu_12824_p3 = esl_concat<12,4>(p_Val2_50_4_i_reg_20349.read(), ap_const_lv4_0);
}

void lstm_forward::thread_tmp_306_fu_12926_p4() {
    tmp_306_fu_12926_p4 = grp_fu_15419_p3.read().range(25, 15);
}

void lstm_forward::thread_tmp_307_fu_13289_p1() {
    tmp_307_fu_13289_p1 = esl_sext<12,11>(tmp_320_fu_13281_p3.read());
}

void lstm_forward::thread_tmp_308_fu_12935_p3() {
    tmp_308_fu_12935_p3 = (!tmp_128_5_i_fu_12920_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_128_5_i_fu_12920_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_306_fu_12926_p4.read());
}

void lstm_forward::thread_tmp_309_fu_13370_p4() {
    tmp_309_fu_13370_p4 = r_V_31_7_i_fu_13346_p2.read().range(21, 14);
}

void lstm_forward::thread_tmp_310_fu_13380_p2() {
    tmp_310_fu_13380_p2 = (!ap_const_lv8_1.is_01() || !tmp_309_fu_13370_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_309_fu_13370_p4.read()));
}

void lstm_forward::thread_tmp_311_fu_13386_p3() {
    tmp_311_fu_13386_p3 = (!tmp_131_7_i_fu_13364_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_131_7_i_fu_13364_p2.read()[0].to_bool())? tmp_309_fu_13370_p4.read(): tmp_310_fu_13380_p2.read());
}

void lstm_forward::thread_tmp_312_fu_12986_p3() {
    tmp_312_fu_12986_p3 = esl_concat<12,12>(p_Val2_50_5_i_reg_20396.read(), ap_const_lv12_0);
}

void lstm_forward::thread_tmp_313_fu_13394_p3() {
    tmp_313_fu_13394_p3 = (!tmp_340_fu_13352_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_340_fu_13352_p3.read()[0].to_bool())? tmp_311_fu_13386_p3.read(): tmp_309_fu_13370_p4.read());
}

void lstm_forward::thread_tmp_314_fu_12997_p3() {
    tmp_314_fu_12997_p3 = esl_concat<12,4>(p_Val2_50_5_i_reg_20396.read(), ap_const_lv4_0);
}

void lstm_forward::thread_tmp_315_fu_13099_p4() {
    tmp_315_fu_13099_p4 = grp_fu_15441_p3.read().range(25, 15);
}

void lstm_forward::thread_tmp_316_fu_13108_p3() {
    tmp_316_fu_13108_p3 = (!tmp_128_6_i_fu_13093_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_128_6_i_fu_13093_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_315_fu_13099_p4.read());
}

void lstm_forward::thread_tmp_317_fu_13159_p3() {
    tmp_317_fu_13159_p3 = esl_concat<12,12>(p_Val2_50_6_i_reg_20443.read(), ap_const_lv12_0);
}

void lstm_forward::thread_tmp_318_fu_13170_p3() {
    tmp_318_fu_13170_p3 = esl_concat<12,4>(p_Val2_50_6_i_reg_20443.read(), ap_const_lv4_0);
}

void lstm_forward::thread_tmp_319_fu_13272_p4() {
    tmp_319_fu_13272_p4 = grp_fu_15463_p3.read().range(25, 15);
}

void lstm_forward::thread_tmp_320_fu_13281_p3() {
    tmp_320_fu_13281_p3 = (!tmp_128_7_i_fu_13266_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_128_7_i_fu_13266_p2.read()[0].to_bool())? ap_const_lv11_200: tmp_319_fu_13272_p4.read());
}

void lstm_forward::thread_tmp_321_fu_13324_p3() {
    tmp_321_fu_13324_p3 = esl_concat<12,12>(p_Val2_50_7_i_reg_20469.read(), ap_const_lv12_0);
}

void lstm_forward::thread_tmp_322_fu_13335_p3() {
    tmp_322_fu_13335_p3 = esl_concat<12,4>(p_Val2_50_7_i_reg_20469.read(), ap_const_lv4_0);
}

void lstm_forward::thread_tmp_323_fu_7727_p1() {
    tmp_323_fu_7727_p1 = ap_phi_mux_j_i_phi_fu_6866_p4.read().range(3-1, 0);
}

void lstm_forward::thread_tmp_324_fu_12141_p3() {
    tmp_324_fu_12141_p3 = r_V_31_i_fu_12120_p2.read().range(24, 24);
}

void lstm_forward::thread_tmp_325_fu_12149_p1() {
    tmp_325_fu_12149_p1 = r_V_31_i_fu_12120_p2.read().range(14-1, 0);
}

void lstm_forward::thread_tmp_326_fu_12174_p1() {
    tmp_326_fu_12174_p1 = ap_phi_mux_p_3_i_phi_fu_6929_p4.read().range(8-1, 0);
}

void lstm_forward::thread_tmp_327_fu_12309_p3() {
    tmp_327_fu_12309_p3 = r_V_31_1_i_fu_12288_p2.read().range(24, 24);
}

void lstm_forward::thread_tmp_328_fu_12317_p1() {
    tmp_328_fu_12317_p1 = r_V_31_1_i_fu_12288_p2.read().range(14-1, 0);
}

void lstm_forward::thread_tmp_329_fu_12342_p1() {
    tmp_329_fu_12342_p1 = ap_phi_mux_p_3_1_i_phi_fu_6949_p4.read().range(8-1, 0);
}

void lstm_forward::thread_tmp_330_fu_12495_p3() {
    tmp_330_fu_12495_p3 = r_V_31_2_i_fu_12489_p2.read().range(24, 24);
}

void lstm_forward::thread_tmp_331_fu_12503_p1() {
    tmp_331_fu_12503_p1 = r_V_31_2_i_fu_12489_p2.read().range(14-1, 0);
}

void lstm_forward::thread_tmp_332_fu_12668_p3() {
    tmp_332_fu_12668_p3 = r_V_31_3_i_fu_12662_p2.read().range(24, 24);
}

void lstm_forward::thread_tmp_333_fu_12676_p1() {
    tmp_333_fu_12676_p1 = r_V_31_3_i_fu_12662_p2.read().range(14-1, 0);
}

void lstm_forward::thread_tmp_334_fu_12841_p3() {
    tmp_334_fu_12841_p3 = r_V_31_4_i_fu_12835_p2.read().range(24, 24);
}

void lstm_forward::thread_tmp_335_fu_12849_p1() {
    tmp_335_fu_12849_p1 = r_V_31_4_i_fu_12835_p2.read().range(14-1, 0);
}

void lstm_forward::thread_tmp_336_fu_13014_p3() {
    tmp_336_fu_13014_p3 = r_V_31_5_i_fu_13008_p2.read().range(24, 24);
}

void lstm_forward::thread_tmp_337_fu_13022_p1() {
    tmp_337_fu_13022_p1 = r_V_31_5_i_fu_13008_p2.read().range(14-1, 0);
}

void lstm_forward::thread_tmp_338_fu_13187_p3() {
    tmp_338_fu_13187_p3 = r_V_31_6_i_fu_13181_p2.read().range(24, 24);
}

void lstm_forward::thread_tmp_339_fu_13195_p1() {
    tmp_339_fu_13195_p1 = r_V_31_6_i_fu_13181_p2.read().range(14-1, 0);
}

void lstm_forward::thread_tmp_340_fu_13352_p3() {
    tmp_340_fu_13352_p3 = r_V_31_7_i_fu_13346_p2.read().range(24, 24);
}

void lstm_forward::thread_tmp_341_fu_13360_p1() {
    tmp_341_fu_13360_p1 = r_V_31_7_i_fu_13346_p2.read().range(14-1, 0);
}

void lstm_forward::thread_tmp_39_i_cast1_fu_7671_p1() {
    tmp_39_i_cast1_fu_7671_p1 = esl_zext<10,7>(ap_phi_mux_j_i_phi_fu_6866_p4.read());
}

void lstm_forward::thread_tmp_39_i_cast2_fu_7753_p1() {
    tmp_39_i_cast2_fu_7753_p1 = esl_zext<9,7>(j_i_reg_6862.read());
}

void lstm_forward::thread_tmp_39_i_cast_fu_7757_p1() {
    tmp_39_i_cast_fu_7757_p1 = esl_zext<8,7>(j_i_reg_6862.read());
}

void lstm_forward::thread_tmp_39_i_fu_7663_p1() {
    tmp_39_i_fu_7663_p1 = esl_zext<64,7>(ap_phi_mux_j_i_phi_fu_6866_p4.read());
}

void lstm_forward::thread_tmp_52_fu_7789_p1() {
    tmp_52_fu_7789_p1 = esl_sext<23,16>(ap_phi_mux_xj_V_phi_fu_6877_p16.read());
}

void lstm_forward::thread_tmp_94_10_i_fu_7343_p2() {
    tmp_94_10_i_fu_7343_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_B.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_B));
}

void lstm_forward::thread_tmp_94_11_i_fu_7354_p2() {
    tmp_94_11_i_fu_7354_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_C.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_C));
}

void lstm_forward::thread_tmp_94_12_i_fu_7365_p2() {
    tmp_94_12_i_fu_7365_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_D.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_D));
}

void lstm_forward::thread_tmp_94_13_i_fu_7376_p2() {
    tmp_94_13_i_fu_7376_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_E.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_E));
}

void lstm_forward::thread_tmp_94_14_i_fu_7387_p2() {
    tmp_94_14_i_fu_7387_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_F.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_F));
}

void lstm_forward::thread_tmp_94_15_i_fu_7398_p2() {
    tmp_94_15_i_fu_7398_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_10.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_10));
}

void lstm_forward::thread_tmp_94_16_i_fu_7409_p2() {
    tmp_94_16_i_fu_7409_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_11.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_11));
}

void lstm_forward::thread_tmp_94_17_i_fu_7420_p2() {
    tmp_94_17_i_fu_7420_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_12.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_12));
}

void lstm_forward::thread_tmp_94_18_i_fu_7431_p2() {
    tmp_94_18_i_fu_7431_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_13));
}

void lstm_forward::thread_tmp_94_19_i_fu_7442_p2() {
    tmp_94_19_i_fu_7442_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_14.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_14));
}

void lstm_forward::thread_tmp_94_1_i_fu_7233_p2() {
    tmp_94_1_i_fu_7233_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void lstm_forward::thread_tmp_94_20_i_fu_7453_p2() {
    tmp_94_20_i_fu_7453_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_15.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_15));
}

void lstm_forward::thread_tmp_94_21_i_fu_7464_p2() {
    tmp_94_21_i_fu_7464_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_16));
}

void lstm_forward::thread_tmp_94_22_i_fu_7475_p2() {
    tmp_94_22_i_fu_7475_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_17));
}

void lstm_forward::thread_tmp_94_23_i_fu_7486_p2() {
    tmp_94_23_i_fu_7486_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_18.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_18));
}

void lstm_forward::thread_tmp_94_24_i_fu_7497_p2() {
    tmp_94_24_i_fu_7497_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_19.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_19));
}

void lstm_forward::thread_tmp_94_25_i_fu_7508_p2() {
    tmp_94_25_i_fu_7508_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_1A));
}

void lstm_forward::thread_tmp_94_26_i_fu_7519_p2() {
    tmp_94_26_i_fu_7519_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_1B));
}

void lstm_forward::thread_tmp_94_27_i_fu_7530_p2() {
    tmp_94_27_i_fu_7530_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_1C.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_1C));
}

void lstm_forward::thread_tmp_94_28_i_fu_7541_p2() {
    tmp_94_28_i_fu_7541_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_1D.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_1D));
}

void lstm_forward::thread_tmp_94_29_i_fu_7552_p2() {
    tmp_94_29_i_fu_7552_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_1E.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_1E));
}

void lstm_forward::thread_tmp_94_2_i_fu_7244_p2() {
    tmp_94_2_i_fu_7244_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_2.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_2));
}

void lstm_forward::thread_tmp_94_30_i_fu_7563_p2() {
    tmp_94_30_i_fu_7563_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_1F.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_1F));
}

void lstm_forward::thread_tmp_94_31_i_fu_7574_p2() {
    tmp_94_31_i_fu_7574_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_20.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_20));
}

void lstm_forward::thread_tmp_94_32_i_fu_7585_p2() {
    tmp_94_32_i_fu_7585_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_21.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_21));
}

void lstm_forward::thread_tmp_94_33_i_fu_7596_p2() {
    tmp_94_33_i_fu_7596_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_22.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_22));
}

void lstm_forward::thread_tmp_94_34_i_fu_7607_p2() {
    tmp_94_34_i_fu_7607_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_23.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_23));
}

void lstm_forward::thread_tmp_94_35_i_fu_7618_p2() {
    tmp_94_35_i_fu_7618_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_24.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_24));
}

void lstm_forward::thread_tmp_94_36_i_fu_7629_p2() {
    tmp_94_36_i_fu_7629_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_25.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_25));
}

void lstm_forward::thread_tmp_94_37_i_fu_7640_p2() {
    tmp_94_37_i_fu_7640_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_26.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_26));
}

void lstm_forward::thread_tmp_94_3_i_fu_7255_p2() {
    tmp_94_3_i_fu_7255_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_3.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_3));
}

void lstm_forward::thread_tmp_94_4_i_fu_7266_p2() {
    tmp_94_4_i_fu_7266_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_4.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_4));
}

void lstm_forward::thread_tmp_94_5_i_fu_7277_p2() {
    tmp_94_5_i_fu_7277_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_5.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_5));
}

void lstm_forward::thread_tmp_94_6_i_fu_7288_p2() {
    tmp_94_6_i_fu_7288_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_6.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_6));
}

void lstm_forward::thread_tmp_94_7_i_fu_7299_p2() {
    tmp_94_7_i_fu_7299_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_7.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_7));
}

void lstm_forward::thread_tmp_94_8_i_fu_7310_p2() {
    tmp_94_8_i_fu_7310_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_8.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_8));
}

void lstm_forward::thread_tmp_94_9_i_fu_7321_p2() {
    tmp_94_9_i_fu_7321_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_9.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_9));
}

void lstm_forward::thread_tmp_94_i_fu_7332_p2() {
    tmp_94_i_fu_7332_p2 = (!phi_mul_reg_6850.read().is_01() || !ap_const_lv13_A.is_01())? sc_lv<13>(): (sc_biguint<13>(phi_mul_reg_6850.read()) + sc_biguint<13>(ap_const_lv13_A));
}

void lstm_forward::thread_tmp_951_i_fu_7228_p1() {
    tmp_951_i_fu_7228_p1 = esl_zext<64,13>(phi_mul_reg_6850.read());
}

void lstm_forward::thread_tmp_95_10_i_fu_7349_p1() {
    tmp_95_10_i_fu_7349_p1 = esl_zext<64,13>(tmp_94_10_i_fu_7343_p2.read());
}

void lstm_forward::thread_tmp_95_11_i_fu_7360_p1() {
    tmp_95_11_i_fu_7360_p1 = esl_zext<64,13>(tmp_94_11_i_fu_7354_p2.read());
}

void lstm_forward::thread_tmp_95_12_i_fu_7371_p1() {
    tmp_95_12_i_fu_7371_p1 = esl_zext<64,13>(tmp_94_12_i_fu_7365_p2.read());
}

void lstm_forward::thread_tmp_95_13_i_fu_7382_p1() {
    tmp_95_13_i_fu_7382_p1 = esl_zext<64,13>(tmp_94_13_i_fu_7376_p2.read());
}

void lstm_forward::thread_tmp_95_14_i_fu_7393_p1() {
    tmp_95_14_i_fu_7393_p1 = esl_zext<64,13>(tmp_94_14_i_fu_7387_p2.read());
}

void lstm_forward::thread_tmp_95_15_i_fu_7404_p1() {
    tmp_95_15_i_fu_7404_p1 = esl_zext<64,13>(tmp_94_15_i_fu_7398_p2.read());
}

void lstm_forward::thread_tmp_95_16_i_fu_7415_p1() {
    tmp_95_16_i_fu_7415_p1 = esl_zext<64,13>(tmp_94_16_i_fu_7409_p2.read());
}

void lstm_forward::thread_tmp_95_17_i_fu_7426_p1() {
    tmp_95_17_i_fu_7426_p1 = esl_zext<64,13>(tmp_94_17_i_fu_7420_p2.read());
}

void lstm_forward::thread_tmp_95_18_i_fu_7437_p1() {
    tmp_95_18_i_fu_7437_p1 = esl_zext<64,13>(tmp_94_18_i_fu_7431_p2.read());
}

void lstm_forward::thread_tmp_95_19_i_fu_7448_p1() {
    tmp_95_19_i_fu_7448_p1 = esl_zext<64,13>(tmp_94_19_i_fu_7442_p2.read());
}

void lstm_forward::thread_tmp_95_1_i_fu_7239_p1() {
    tmp_95_1_i_fu_7239_p1 = esl_zext<64,13>(tmp_94_1_i_fu_7233_p2.read());
}

void lstm_forward::thread_tmp_95_20_i_fu_7459_p1() {
    tmp_95_20_i_fu_7459_p1 = esl_zext<64,13>(tmp_94_20_i_fu_7453_p2.read());
}

void lstm_forward::thread_tmp_95_21_i_fu_7470_p1() {
    tmp_95_21_i_fu_7470_p1 = esl_zext<64,13>(tmp_94_21_i_fu_7464_p2.read());
}

void lstm_forward::thread_tmp_95_22_i_fu_7481_p1() {
    tmp_95_22_i_fu_7481_p1 = esl_zext<64,13>(tmp_94_22_i_fu_7475_p2.read());
}

void lstm_forward::thread_tmp_95_23_i_fu_7492_p1() {
    tmp_95_23_i_fu_7492_p1 = esl_zext<64,13>(tmp_94_23_i_fu_7486_p2.read());
}

void lstm_forward::thread_tmp_95_24_i_fu_7503_p1() {
    tmp_95_24_i_fu_7503_p1 = esl_zext<64,13>(tmp_94_24_i_fu_7497_p2.read());
}

void lstm_forward::thread_tmp_95_25_i_fu_7514_p1() {
    tmp_95_25_i_fu_7514_p1 = esl_zext<64,13>(tmp_94_25_i_fu_7508_p2.read());
}

void lstm_forward::thread_tmp_95_26_i_fu_7525_p1() {
    tmp_95_26_i_fu_7525_p1 = esl_zext<64,13>(tmp_94_26_i_fu_7519_p2.read());
}

void lstm_forward::thread_tmp_95_27_i_fu_7536_p1() {
    tmp_95_27_i_fu_7536_p1 = esl_zext<64,13>(tmp_94_27_i_fu_7530_p2.read());
}

void lstm_forward::thread_tmp_95_28_i_fu_7547_p1() {
    tmp_95_28_i_fu_7547_p1 = esl_zext<64,13>(tmp_94_28_i_fu_7541_p2.read());
}

void lstm_forward::thread_tmp_95_29_i_fu_7558_p1() {
    tmp_95_29_i_fu_7558_p1 = esl_zext<64,13>(tmp_94_29_i_fu_7552_p2.read());
}

void lstm_forward::thread_tmp_95_2_i_fu_7250_p1() {
    tmp_95_2_i_fu_7250_p1 = esl_zext<64,13>(tmp_94_2_i_fu_7244_p2.read());
}

void lstm_forward::thread_tmp_95_30_i_fu_7569_p1() {
    tmp_95_30_i_fu_7569_p1 = esl_zext<64,13>(tmp_94_30_i_fu_7563_p2.read());
}

void lstm_forward::thread_tmp_95_31_i_fu_7580_p1() {
    tmp_95_31_i_fu_7580_p1 = esl_zext<64,13>(tmp_94_31_i_fu_7574_p2.read());
}

void lstm_forward::thread_tmp_95_32_i_fu_7591_p1() {
    tmp_95_32_i_fu_7591_p1 = esl_zext<64,13>(tmp_94_32_i_fu_7585_p2.read());
}

void lstm_forward::thread_tmp_95_33_i_fu_7602_p1() {
    tmp_95_33_i_fu_7602_p1 = esl_zext<64,13>(tmp_94_33_i_fu_7596_p2.read());
}

void lstm_forward::thread_tmp_95_34_i_fu_7613_p1() {
    tmp_95_34_i_fu_7613_p1 = esl_zext<64,13>(tmp_94_34_i_fu_7607_p2.read());
}

void lstm_forward::thread_tmp_95_35_i_fu_7624_p1() {
    tmp_95_35_i_fu_7624_p1 = esl_zext<64,13>(tmp_94_35_i_fu_7618_p2.read());
}

void lstm_forward::thread_tmp_95_36_i_fu_7635_p1() {
    tmp_95_36_i_fu_7635_p1 = esl_zext<64,13>(tmp_94_36_i_fu_7629_p2.read());
}

void lstm_forward::thread_tmp_95_37_i_fu_7646_p1() {
    tmp_95_37_i_fu_7646_p1 = esl_zext<64,13>(tmp_94_37_i_fu_7640_p2.read());
}

void lstm_forward::thread_tmp_95_3_i_fu_7261_p1() {
    tmp_95_3_i_fu_7261_p1 = esl_zext<64,13>(tmp_94_3_i_fu_7255_p2.read());
}

void lstm_forward::thread_tmp_95_4_i_fu_7272_p1() {
    tmp_95_4_i_fu_7272_p1 = esl_zext<64,13>(tmp_94_4_i_fu_7266_p2.read());
}

void lstm_forward::thread_tmp_95_5_i_fu_7283_p1() {
    tmp_95_5_i_fu_7283_p1 = esl_zext<64,13>(tmp_94_5_i_fu_7277_p2.read());
}

void lstm_forward::thread_tmp_95_6_i_fu_7294_p1() {
    tmp_95_6_i_fu_7294_p1 = esl_zext<64,13>(tmp_94_6_i_fu_7288_p2.read());
}

void lstm_forward::thread_tmp_95_7_i_fu_7305_p1() {
    tmp_95_7_i_fu_7305_p1 = esl_zext<64,13>(tmp_94_7_i_fu_7299_p2.read());
}

void lstm_forward::thread_tmp_95_8_i_fu_7316_p1() {
    tmp_95_8_i_fu_7316_p1 = esl_zext<64,13>(tmp_94_8_i_fu_7310_p2.read());
}

void lstm_forward::thread_tmp_95_9_i_fu_7327_p1() {
    tmp_95_9_i_fu_7327_p1 = esl_zext<64,13>(tmp_94_9_i_fu_7321_p2.read());
}

void lstm_forward::thread_tmp_95_i_fu_7338_p1() {
    tmp_95_i_fu_7338_p1 = esl_zext<64,13>(tmp_94_i_fu_7332_p2.read());
}

void lstm_forward::thread_valid_len_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        valid_len_blk_n = valid_len_empty_n.read();
    } else {
        valid_len_blk_n = ap_const_logic_1;
    }
}

void lstm_forward::thread_valid_len_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(valid_len_empty_n.read(), ap_const_logic_1))) {
        valid_len_read = ap_const_logic_1;
    } else {
        valid_len_read = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_0_V_address0 =  (sc_lv<4>) (newIndex6_i_fu_7741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        x_h_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_0_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_0_V_ce0 = ap_const_logic_1;
    } else {
        x_h_0_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        x_h_0_V_ce1 = ap_const_logic_1;
    } else {
        x_h_0_V_ce1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        x_h_0_V_d0 = h_t_1_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()))) {
        x_h_0_V_d0 = input_V_q0.read();
    } else {
        x_h_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        x_h_0_V_d1 = input_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        x_h_0_V_d1 = h_t_1_V_q1.read();
    } else {
        x_h_0_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()))) {
        x_h_0_V_we0 = ap_const_logic_1;
    } else {
        x_h_0_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_0_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        x_h_0_V_we1 = ap_const_logic_1;
    } else {
        x_h_0_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        x_h_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_1_V_address1 =  (sc_lv<4>) (newIndex6_i_fu_7741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        x_h_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        x_h_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_1_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        x_h_1_V_ce0 = ap_const_logic_1;
    } else {
        x_h_1_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_1_V_ce1 = ap_const_logic_1;
    } else {
        x_h_1_V_ce1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        x_h_1_V_d0 = h_t_2_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        x_h_1_V_d0 = input_V_q1.read();
    } else {
        x_h_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()))) {
        x_h_1_V_d1 = input_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_1_V_d1 = h_t_2_V_q0.read();
    } else {
        x_h_1_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        x_h_1_V_we0 = ap_const_logic_1;
    } else {
        x_h_1_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_1_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()))) {
        x_h_1_V_we1 = ap_const_logic_1;
    } else {
        x_h_1_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_2_V_address1 =  (sc_lv<4>) (newIndex6_i_fu_7741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        x_h_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        x_h_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else {
        x_h_2_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_2_V_ce0 = ap_const_logic_1;
    } else {
        x_h_2_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_2_V_ce1 = ap_const_logic_1;
    } else {
        x_h_2_V_ce1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        x_h_2_V_d0 = h_t_3_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_2_V_d0 = input_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_2_V_d0 = h_t_3_V_q0.read();
    } else {
        x_h_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()))) {
        x_h_2_V_d1 = input_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_2_V_d1 = h_t_3_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_2_V_d1 = h_t_3_V_q1.read();
    } else {
        x_h_2_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_2_V_we0 = ap_const_logic_1;
    } else {
        x_h_2_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_2_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()))) {
        x_h_2_V_we1 = ap_const_logic_1;
    } else {
        x_h_2_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_3_V_address1 =  (sc_lv<4>) (newIndex6_i_fu_7741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        x_h_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        x_h_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else {
        x_h_3_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_3_V_ce0 = ap_const_logic_1;
    } else {
        x_h_3_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_3_V_ce1 = ap_const_logic_1;
    } else {
        x_h_3_V_ce1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        x_h_3_V_d0 = h_t_4_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_3_V_d0 = input_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_3_V_d0 = h_t_4_V_q0.read();
    } else {
        x_h_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()))) {
        x_h_3_V_d1 = input_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_3_V_d1 = h_t_4_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_3_V_d1 = h_t_4_V_q1.read();
    } else {
        x_h_3_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        x_h_3_V_we0 = ap_const_logic_1;
    } else {
        x_h_3_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_3_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()))) {
        x_h_3_V_we1 = ap_const_logic_1;
    } else {
        x_h_3_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_4_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_4_V_address1 =  (sc_lv<4>) (newIndex6_i_fu_7741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        x_h_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        x_h_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else {
        x_h_4_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_4_V_ce0 = ap_const_logic_1;
    } else {
        x_h_4_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_4_V_ce1 = ap_const_logic_1;
    } else {
        x_h_4_V_ce1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_4_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_4_V_d0 = h_t_5_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_4_V_d0 = input_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        x_h_4_V_d0 = h_t_5_V_q0.read();
    } else {
        x_h_4_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_4_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        x_h_4_V_d1 = input_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_4_V_d1 = h_t_5_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        x_h_4_V_d1 = h_t_5_V_q1.read();
    } else {
        x_h_4_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_4_V_we0 = ap_const_logic_1;
    } else {
        x_h_4_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_4_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        x_h_4_V_we1 = ap_const_logic_1;
    } else {
        x_h_4_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else {
        x_h_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_5_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_5_V_address1 =  (sc_lv<4>) (newIndex6_i_fu_7741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        x_h_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        x_h_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        x_h_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else {
        x_h_5_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void lstm_forward::thread_x_h_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_5_V_ce0 = ap_const_logic_1;
    } else {
        x_h_5_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_5_V_ce1 = ap_const_logic_1;
    } else {
        x_h_5_V_ce1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_5_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_5_V_d0 = h_t_6_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_5_V_d0 = input_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        x_h_5_V_d0 = h_t_6_V_q0.read();
    } else {
        x_h_5_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_5_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        x_h_5_V_d1 = input_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        x_h_5_V_d1 = h_t_6_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        x_h_5_V_d1 = h_t_6_V_q1.read();
    } else {
        x_h_5_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        x_h_5_V_we0 = ap_const_logic_1;
    } else {
        x_h_5_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_5_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        x_h_5_V_we1 = ap_const_logic_1;
    } else {
        x_h_5_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        x_h_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        x_h_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
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

void lstm_forward::thread_x_h_6_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_6_V_address1 =  (sc_lv<4>) (newIndex6_i_fu_7741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        x_h_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
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

void lstm_forward::thread_x_h_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()))) {
        x_h_6_V_ce0 = ap_const_logic_1;
    } else {
        x_h_6_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_6_V_ce1 = ap_const_logic_1;
    } else {
        x_h_6_V_ce1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_6_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()))) {
        x_h_6_V_d0 = input_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_6_V_d0 = h_t_7_V_q0.read();
    } else {
        x_h_6_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_6_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        x_h_6_V_d1 = input_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_6_V_d1 = h_t_7_V_q1.read();
    } else {
        x_h_6_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()))) {
        x_h_6_V_we0 = ap_const_logic_1;
    } else {
        x_h_6_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_6_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        x_h_6_V_we1 = ap_const_logic_1;
    } else {
        x_h_6_V_we1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        x_h_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        x_h_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
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

void lstm_forward::thread_x_h_7_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        x_h_7_V_address1 =  (sc_lv<4>) (newIndex6_i_fu_7741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        x_h_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        x_h_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_A);
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

void lstm_forward::thread_x_h_7_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        x_h_7_V_ce0 = ap_const_logic_1;
    } else {
        x_h_7_V_ce0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        x_h_7_V_ce1 = ap_const_logic_1;
    } else {
        x_h_7_V_ce1 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_7_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        x_h_7_V_d0 = input_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_7_V_d0 = h_t_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        x_h_7_V_d0 = h_t_0_V_q1.read();
    } else {
        x_h_7_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_7_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        x_h_7_V_d1 = input_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        x_h_7_V_d1 = h_t_0_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        x_h_7_V_d1 = h_t_0_V_q0.read();
    } else {
        x_h_7_V_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_forward::thread_x_h_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        x_h_7_V_we0 = ap_const_logic_1;
    } else {
        x_h_7_V_we0 = ap_const_logic_0;
    }
}

void lstm_forward::thread_x_h_7_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        x_h_7_V_we1 = ap_const_logic_1;
    } else {
        x_h_7_V_we1 = ap_const_logic_0;
    }
}

}

