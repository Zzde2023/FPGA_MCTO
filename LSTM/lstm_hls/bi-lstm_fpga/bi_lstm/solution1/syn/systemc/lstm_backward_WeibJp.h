// ==============================================================
// File generated on Sat Apr 19 01:59:55 +0800 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lstm_backward_WeibJp_H__
#define __lstm_backward_WeibJp_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lstm_backward_WeibJp_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 7;
  static const unsigned AddressRange = 89;
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


   SC_CTOR(lstm_backward_WeibJp_ram) {
        ram[0] = "0b0010100";
        ram[1] = "0b1101001";
        ram[2] = "0b0010110";
        ram[3] = "0b0000000";
        ram[4] = "0b1100011";
        ram[5] = "0b0000000";
        ram[6] = "0b1101011";
        ram[7] = "0b1110000";
        ram[8] = "0b1101011";
        ram[9] = "0b0000000";
        ram[10] = "0b0000000";
        ram[11] = "0b0000000";
        ram[12] = "0b1110110";
        ram[13] = "0b1110110";
        ram[14] = "0b0000000";
        ram[15] = "0b0010001";
        ram[16] = "0b1110010";
        ram[17] = "0b0000000";
        ram[18] = "0b0000000";
        ram[19] = "0b0001100";
        ram[20] = "0b1101110";
        ram[21] = "0b0001100";
        ram[22] = "0b0010000";
        ram[23] = "0b1110101";
        ram[24] = "0b0011111";
        ram[25] = "0b0000000";
        ram[26] = "0b0000000";
        ram[27] = "0b0010010";
        ram[28] = "0b0010110";
        ram[29] = "0b0011010";
        ram[30] = "0b0011010";
        ram[31] = "0b0001011";
        ram[32] = "0b0001101";
        ram[33] = "0b1100101";
        ram[34] = "0b0000000";
        ram[35] = "0b0000000";
        ram[36] = "0b0000000";
        ram[37] = "0b0000000";
        ram[38] = "0b1110110";
        ram[39] = "0b0001111";
        ram[40] = "0b1100001";
        ram[41] = "0b0011110";
        ram[42] = "0b1110011";
        ram[43] = "0b1110011";
        ram[44] = "0b1110101";
        ram[45] = "0b1010101";
        ram[46] = "0b0000000";
        ram[47] = "0b1101101";
        ram[48] = "0b0100000";
        ram[49] = "0b1100101";
        ram[50] = "0b1101110";
        ram[51] = "0b0001100";
        ram[52] = "0b1101001";
        ram[53] = "0b1110001";
        ram[54] = "0b0000000";
        ram[55] = "0b1101111";
        ram[56] = "0b1110101";
        ram[57] = "0b0010001";
        ram[58] = "0b0000000";
        ram[59] = "0b1110110";
        ram[60] = "0b0000000";
        ram[61] = "0b0000000";
        ram[62] = "0b0000000";
        ram[63] = "0b0010011";
        ram[64] = "0b0001000";
        ram[65] = "0b0001000";
        ram[66] = "0b0001101";
        ram[67] = "0b0000000";
        ram[68] = "0b0011000";
        ram[69] = "0b0011101";
        ram[70] = "0b0101100";
        ram[71] = "0b1101001";
        ram[72] = "0b0100000";
        ram[73] = "0b0100100";
        ram[74] = "0b1110111";
        ram[75] = "0b1110010";
        ram[76] = "0b0001010";
        ram[77] = "0b0000000";
        ram[78] = "0b0010101";
        ram[79] = "0b0100000";
        ram[80] = "0b0001010";
        ram[81] = "0b0010001";
        ram[82] = "0b0001110";
        ram[83] = "0b1110000";
        ram[84] = "0b1011000";
        ram[85] = "0b1100011";
        ram[86] = "0b0000000";
        ram[87] = "0b0000000";
        ram[88] = "0b1110011";


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


SC_MODULE(lstm_backward_WeibJp) {


static const unsigned DataWidth = 7;
static const unsigned AddressRange = 89;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lstm_backward_WeibJp_ram* meminst;


SC_CTOR(lstm_backward_WeibJp) {
meminst = new lstm_backward_WeibJp_ram("lstm_backward_WeibJp_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lstm_backward_WeibJp() {
    delete meminst;
}


};//endmodule
#endif
