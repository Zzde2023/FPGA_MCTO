// ==============================================================
// File generated on Sat Apr 19 01:59:55 +0800 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lstm_backward_WeibIp_H__
#define __lstm_backward_WeibIp_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lstm_backward_WeibIp_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 6;
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


   SC_CTOR(lstm_backward_WeibIp_ram) {
        ram[0] = "0b001011";
        ram[1] = "0b000000";
        ram[2] = "0b101011";
        ram[3] = "0b000000";
        ram[4] = "0b000000";
        ram[5] = "0b000000";
        ram[6] = "0b101111";
        ram[7] = "0b110110";
        ram[8] = "0b001001";
        ram[9] = "0b110001";
        ram[10] = "0b101000";
        ram[11] = "0b110001";
        ram[12] = "0b000000";
        ram[13] = "0b000000";
        ram[14] = "0b001011";
        ram[15] = "0b100101";
        ram[16] = "0b001000";
        ram[17] = "0b001110";
        ram[18] = "0b000000";
        ram[19] = "0b101111";
        ram[20] = "0b000111";
        ram[21] = "0b000000";
        ram[22] = "0b000000";
        ram[23] = "0b000000";
        ram[24] = "0b000000";
        ram[25] = "0b001110";
        ram[26] = "0b000000";
        ram[27] = "0b110111";
        ram[28] = "0b000000";
        ram[29] = "0b000000";
        ram[30] = "0b001111";
        ram[31] = "0b001110";
        ram[32] = "0b110101";
        ram[33] = "0b000000";
        ram[34] = "0b101011";
        ram[35] = "0b110100";
        ram[36] = "0b110111";
        ram[37] = "0b110010";
        ram[38] = "0b010001";
        ram[39] = "0b000000";
        ram[40] = "0b010011";
        ram[41] = "0b110111";
        ram[42] = "0b000000";
        ram[43] = "0b100101";
        ram[44] = "0b001010";
        ram[45] = "0b001110";
        ram[46] = "0b000000";
        ram[47] = "0b001110";
        ram[48] = "0b110110";
        ram[49] = "0b010001";
        ram[50] = "0b000000";
        ram[51] = "0b100011";
        ram[52] = "0b010011";
        ram[53] = "0b001101";
        ram[54] = "0b001111";
        ram[55] = "0b010000";
        ram[56] = "0b000000";
        ram[57] = "0b000000";
        ram[58] = "0b001000";
        for (unsigned i = 59; i < 64 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[64] = "0b001110";
        ram[65] = "0b110110";
        ram[66] = "0b001111";
        ram[67] = "0b100001";
        ram[68] = "0b001101";
        ram[69] = "0b000000";
        ram[70] = "0b110100";
        ram[71] = "0b000000";
        ram[72] = "0b110011";
        ram[73] = "0b101111";
        ram[74] = "0b000000";
        ram[75] = "0b110010";
        ram[76] = "0b110100";
        ram[77] = "0b001100";
        ram[78] = "0b001010";
        ram[79] = "0b110110";
        ram[80] = "0b001000";
        ram[81] = "0b001010";
        ram[82] = "0b110101";
        ram[83] = "0b001110";
        ram[84] = "0b110000";
        ram[85] = "0b000000";
        ram[86] = "0b000000";
        ram[87] = "0b101100";
        ram[88] = "0b010011";


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


SC_MODULE(lstm_backward_WeibIp) {


static const unsigned DataWidth = 6;
static const unsigned AddressRange = 89;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lstm_backward_WeibIp_ram* meminst;


SC_CTOR(lstm_backward_WeibIp) {
meminst = new lstm_backward_WeibIp_ram("lstm_backward_WeibIp_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lstm_backward_WeibIp() {
    delete meminst;
}


};//endmodule
#endif
