// ==============================================================
// File generated on Sat Apr 19 01:59:58 +0800 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lstm_infer_Loop_3clv_H__
#define __lstm_infer_Loop_3clv_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lstm_infer_Loop_3clv_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 7;
  static const unsigned AddressRange = 100;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(lstm_infer_Loop_3clv_ram) {
        ram[0] = "0b1010010";
        ram[1] = "0b0000000";
        ram[2] = "0b1101001";
        ram[3] = "0b0010101";
        ram[4] = "0b1011101";
        ram[5] = "0b0011011";
        for (unsigned i = 6; i < 11 ; i = i + 1) {
            ram[i] = "0b0000000";
        }
        ram[11] = "0b0010111";
        ram[12] = "0b0000000";
        ram[13] = "0b1011010";
        ram[14] = "0b0010111";
        ram[15] = "0b0000000";
        ram[16] = "0b1011101";
        ram[17] = "0b1010001";
        ram[18] = "0b0000000";
        ram[19] = "0b0011011";
        ram[20] = "0b1100100";
        ram[21] = "0b0010001";
        ram[22] = "0b0000000";
        ram[23] = "0b1101000";
        ram[24] = "0b0000000";
        ram[25] = "0b1101011";
        ram[26] = "0b0000000";
        ram[27] = "0b0000000";
        ram[28] = "0b1011101";
        ram[29] = "0b0000000";
        ram[30] = "0b1011101";
        ram[31] = "0b0000000";
        ram[32] = "0b0010100";
        ram[33] = "0b0011011";
        ram[34] = "0b1101011";
        ram[35] = "0b0000000";
        ram[36] = "0b0011101";
        ram[37] = "0b0000000";
        ram[38] = "0b1010111";
        ram[39] = "0b1011011";
        ram[40] = "0b1011100";
        ram[41] = "0b0000000";
        ram[42] = "0b1101100";
        ram[43] = "0b0000000";
        ram[44] = "0b1101100";
        ram[45] = "0b1001111";
        ram[46] = "0b0010100";
        ram[47] = "0b1101110";
        ram[48] = "0b0000000";
        ram[49] = "0b0000000";
        ram[50] = "0b0011010";
        ram[51] = "0b0011000";
        for (unsigned i = 52; i < 57 ; i = i + 1) {
            ram[i] = "0b0000000";
        }
        ram[57] = "0b0011000";
        ram[58] = "0b1101001";
        ram[59] = "0b0011110";
        ram[60] = "0b0000000";
        ram[61] = "0b1101010";
        ram[62] = "0b1101110";
        ram[63] = "0b0000000";
        ram[64] = "0b0000000";
        ram[65] = "0b0000000";
        ram[66] = "0b1011000";
        ram[67] = "0b0000000";
        ram[68] = "0b0000000";
        ram[69] = "0b0000000";
        ram[70] = "0b0010011";
        ram[71] = "0b0000000";
        ram[72] = "0b1101100";
        ram[73] = "0b1101001";
        ram[74] = "0b1011011";
        ram[75] = "0b0000000";
        ram[76] = "0b0000000";
        ram[77] = "0b1101000";
        ram[78] = "0b1001011";
        ram[79] = "0b0010110";
        ram[80] = "0b1101000";
        ram[81] = "0b0000000";
        ram[82] = "0b1100001";
        ram[83] = "0b0000000";
        ram[84] = "0b0000000";
        ram[85] = "0b1100111";
        ram[86] = "0b0000000";
        ram[87] = "0b1100101";
        ram[88] = "0b0010001";
        ram[89] = "0b1011111";
        ram[90] = "0b0000000";
        ram[91] = "0b0010010";
        ram[92] = "0b0000000";
        ram[93] = "0b1100011";
        ram[94] = "0b0010111";
        ram[95] = "0b0000000";
        ram[96] = "0b0000000";
        ram[97] = "0b1011000";
        ram[98] = "0b0000000";
        ram[99] = "0b0010001";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(lstm_infer_Loop_3clv) {


static const unsigned DataWidth = 7;
static const unsigned AddressRange = 100;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lstm_infer_Loop_3clv_ram* meminst;


SC_CTOR(lstm_infer_Loop_3clv) {
meminst = new lstm_infer_Loop_3clv_ram("lstm_infer_Loop_3clv_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lstm_infer_Loop_3clv() {
    delete meminst;
}


};//endmodule
#endif
