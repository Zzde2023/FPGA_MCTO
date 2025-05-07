// ==============================================================
// File generated on Sat Apr 19 01:59:51 +0800 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __BiLSTM_Top_fpext_cud__HH__
#define __BiLSTM_Top_fpext_cud__HH__
#include "ACMP_fpext_comb.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int dout_WIDTH>
SC_MODULE(BiLSTM_Top_fpext_cud) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_fpext_comb<ID, 1, din0_WIDTH, dout_WIDTH> ACMP_fpext_comb_U;

    SC_CTOR(BiLSTM_Top_fpext_cud):  ACMP_fpext_comb_U ("ACMP_fpext_comb_U") {
        ACMP_fpext_comb_U.din0(din0);
        ACMP_fpext_comb_U.dout(dout);

    }

};

#endif //
