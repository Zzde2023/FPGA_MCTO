// ==============================================================
// File generated on Sat Apr 19 01:59:53 +0800 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lstm_backward_tanbdk_H__
#define __lstm_backward_tanbdk_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lstm_backward_tanbdk_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 16;
  static const unsigned AddressRange = 256;
  static const unsigned AddressWidth = 8;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in <sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in <sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in <sc_lv<AddressWidth> > address4;
sc_core::sc_in <sc_logic> ce4;
sc_core::sc_out <sc_lv<DataWidth> > q4;
sc_core::sc_in <sc_lv<AddressWidth> > address5;
sc_core::sc_in <sc_logic> ce5;
sc_core::sc_out <sc_lv<DataWidth> > q5;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(lstm_backward_tanbdk_ram) {
        ram[0] = "0b1000000000010101";
        ram[1] = "0b1000000000010111";
        ram[2] = "0b1000000000011000";
        ram[3] = "0b1000000000011010";
        ram[4] = "0b1000000000011100";
        ram[5] = "0b1000000000011110";
        ram[6] = "0b1000000000100000";
        ram[7] = "0b1000000000100010";
        ram[8] = "0b1000000000100100";
        ram[9] = "0b1000000000100110";
        ram[10] = "0b1000000000101001";
        ram[11] = "0b1000000000101011";
        ram[12] = "0b1000000000101110";
        ram[13] = "0b1000000000110001";
        ram[14] = "0b1000000000110100";
        ram[15] = "0b1000000000111000";
        ram[16] = "0b1000000000111011";
        ram[17] = "0b1000000000111111";
        ram[18] = "0b1000000001000011";
        ram[19] = "0b1000000001001000";
        ram[20] = "0b1000000001001101";
        ram[21] = "0b1000000001010010";
        ram[22] = "0b1000000001010111";
        ram[23] = "0b1000000001011100";
        ram[24] = "0b1000000001100010";
        ram[25] = "0b1000000001101001";
        ram[26] = "0b1000000001110000";
        ram[27] = "0b1000000001110111";
        ram[28] = "0b1000000001111111";
        ram[29] = "0b1000000010000111";
        ram[30] = "0b1000000010010000";
        ram[31] = "0b1000000010011001";
        ram[32] = "0b1000000010100011";
        ram[33] = "0b1000000010101101";
        ram[34] = "0b1000000010111001";
        ram[35] = "0b1000000011000101";
        ram[36] = "0b1000000011010001";
        ram[37] = "0b1000000011011111";
        ram[38] = "0b1000000011101101";
        ram[39] = "0b1000000011111101";
        ram[40] = "0b1000000100001101";
        ram[41] = "0b1000000100011110";
        ram[42] = "0b1000000100110001";
        ram[43] = "0b1000000101000100";
        ram[44] = "0b1000000101011001";
        ram[45] = "0b1000000101110000";
        ram[46] = "0b1000000110000111";
        ram[47] = "0b1000000110100000";
        ram[48] = "0b1000000110111011";
        ram[49] = "0b1000000111011000";
        ram[50] = "0b1000000111110110";
        ram[51] = "0b1000001000010110";
        ram[52] = "0b1000001000111001";
        ram[53] = "0b1000001001011101";
        ram[54] = "0b1000001010000100";
        ram[55] = "0b1000001010101101";
        ram[56] = "0b1000001011011001";
        ram[57] = "0b1000001100001000";
        ram[58] = "0b1000001100111010";
        ram[59] = "0b1000001101101111";
        ram[60] = "0b1000001110100111";
        ram[61] = "0b1000001111100010";
        ram[62] = "0b1000010000100010";
        ram[63] = "0b1000010001100101";
        ram[64] = "0b1000010010101101";
        ram[65] = "0b1000010011111001";
        ram[66] = "0b1000010101001001";
        ram[67] = "0b1000010110011111";
        ram[68] = "0b1000010111111010";
        ram[69] = "0b1000011001011011";
        ram[70] = "0b1000011011000001";
        ram[71] = "0b1000011100101110";
        ram[72] = "0b1000011110100010";
        ram[73] = "0b1000100000011100";
        ram[74] = "0b1000100010011110";
        ram[75] = "0b1000100100101000";
        ram[76] = "0b1000100110111010";
        ram[77] = "0b1000101001010101";
        ram[78] = "0b1000101011111001";
        ram[79] = "0b1000101110100110";
        ram[80] = "0b1000110001011110";
        ram[81] = "0b1000110100100001";
        ram[82] = "0b1000110111101111";
        ram[83] = "0b1000111011001000";
        ram[84] = "0b1000111110101110";
        ram[85] = "0b1001000010100001";
        ram[86] = "0b1001000110100010";
        ram[87] = "0b1001001010110001";
        ram[88] = "0b1001001111001111";
        ram[89] = "0b1001010011111100";
        ram[90] = "0b1001011000111010";
        ram[91] = "0b1001011110001001";
        ram[92] = "0b1001100011101001";
        ram[93] = "0b1001101001011011";
        ram[94] = "0b1001101111100001";
        ram[95] = "0b1001110101111010";
        ram[96] = "0b1001111100100111";
        ram[97] = "0b1010000011101001";
        ram[98] = "0b1010001011000001";
        ram[99] = "0b1010010010101110";
        ram[100] = "0b1010011010110010";
        ram[101] = "0b1010100011001110";
        ram[102] = "0b1010101100000000";
        ram[103] = "0b1010110101001011";
        ram[104] = "0b1010111110101110";
        ram[105] = "0b1011001000101010";
        ram[106] = "0b1011010010111110";
        ram[107] = "0b1011011101101011";
        ram[108] = "0b1011101000110001";
        ram[109] = "0b1011110100001111";
        ram[110] = "0b1100000000000111";
        ram[111] = "0b1100001100010110";
        ram[112] = "0b1100011000111101";
        ram[113] = "0b1100100101111011";
        ram[114] = "0b1100110011010000";
        ram[115] = "0b1101000000111010";
        ram[116] = "0b1101001110111001";
        ram[117] = "0b1101011101001100";
        ram[118] = "0b1101101011110001";
        ram[119] = "0b1101111010100111";
        ram[120] = "0b1110001001101101";
        ram[121] = "0b1110011001000001";
        ram[122] = "0b1110101000100001";
        ram[123] = "0b1110111000001100";
        ram[124] = "0b1111001000000000";
        ram[125] = "0b1111010111111011";
        ram[126] = "0b1111100111111011";
        ram[127] = "0b1111110111111110";
        ram[128] = "0b0000001000000001";
        ram[129] = "0b0000011000000100";
        ram[130] = "0b0000101000000100";
        ram[131] = "0b0000110111111111";
        ram[132] = "0b0001000111110011";
        ram[133] = "0b0001010111011110";
        ram[134] = "0b0001100110111110";
        ram[135] = "0b0001110110010010";
        ram[136] = "0b0010000101011000";
        ram[137] = "0b0010010100001110";
        ram[138] = "0b0010100010110011";
        ram[139] = "0b0010110001000110";
        ram[140] = "0b0010111111000101";
        ram[141] = "0b0011001100101111";
        ram[142] = "0b0011011010000100";
        ram[143] = "0b0011100111000010";
        ram[144] = "0b0011110011101001";
        ram[145] = "0b0011111111111000";
        ram[146] = "0b0100001011110000";
        ram[147] = "0b0100010111001110";
        ram[148] = "0b0100100010010100";
        ram[149] = "0b0100101101000001";
        ram[150] = "0b0100110111010101";
        ram[151] = "0b0101000001010001";
        ram[152] = "0b0101001010110100";
        ram[153] = "0b0101010011111111";
        ram[154] = "0b0101011100110001";
        ram[155] = "0b0101100101001101";
        ram[156] = "0b0101101101010001";
        ram[157] = "0b0101110100111110";
        ram[158] = "0b0101111100010110";
        ram[159] = "0b0110000011011000";
        ram[160] = "0b0110001010000101";
        ram[161] = "0b0110010000011110";
        ram[162] = "0b0110010110100100";
        ram[163] = "0b0110011100010110";
        ram[164] = "0b0110100001110110";
        ram[165] = "0b0110100111000101";
        ram[166] = "0b0110101100000011";
        ram[167] = "0b0110110000110000";
        ram[168] = "0b0110110101001110";
        ram[169] = "0b0110111001011101";
        ram[170] = "0b0110111101011110";
        ram[171] = "0b0111000001010001";
        ram[172] = "0b0111000100110111";
        ram[173] = "0b0111001000010000";
        ram[174] = "0b0111001011011110";
        ram[175] = "0b0111001110100001";
        ram[176] = "0b0111010001011001";
        ram[177] = "0b0111010100000110";
        ram[178] = "0b0111010110101010";
        ram[179] = "0b0111011001000101";
        ram[180] = "0b0111011011010111";
        ram[181] = "0b0111011101100001";
        ram[182] = "0b0111011111100011";
        ram[183] = "0b0111100001011101";
        ram[184] = "0b0111100011010001";
        ram[185] = "0b0111100100111110";
        ram[186] = "0b0111100110100100";
        ram[187] = "0b0111101000000101";
        ram[188] = "0b0111101001100000";
        ram[189] = "0b0111101010110110";
        ram[190] = "0b0111101100000110";
        ram[191] = "0b0111101101010010";
        ram[192] = "0b0111101110011010";
        ram[193] = "0b0111101111011101";
        ram[194] = "0b0111110000011101";
        ram[195] = "0b0111110001011000";
        ram[196] = "0b0111110010010000";
        ram[197] = "0b0111110011000101";
        ram[198] = "0b0111110011110111";
        ram[199] = "0b0111110100100110";
        ram[200] = "0b0111110101010010";
        ram[201] = "0b0111110101111011";
        ram[202] = "0b0111110110100010";
        ram[203] = "0b0111110111000110";
        ram[204] = "0b0111110111101001";
        ram[205] = "0b0111111000001001";
        ram[206] = "0b0111111000100111";
        ram[207] = "0b0111111001000100";
        ram[208] = "0b0111111001011111";
        ram[209] = "0b0111111001111000";
        ram[210] = "0b0111111010001111";
        ram[211] = "0b0111111010100110";
        ram[212] = "0b0111111010111011";
        ram[213] = "0b0111111011001110";
        ram[214] = "0b0111111011100001";
        ram[215] = "0b0111111011110010";
        ram[216] = "0b0111111100000010";
        ram[217] = "0b0111111100010010";
        ram[218] = "0b0111111100100000";
        ram[219] = "0b0111111100101110";
        ram[220] = "0b0111111100111010";
        ram[221] = "0b0111111101000110";
        ram[222] = "0b0111111101010010";
        ram[223] = "0b0111111101011100";
        ram[224] = "0b0111111101100110";
        ram[225] = "0b0111111101101111";
        ram[226] = "0b0111111101111000";
        ram[227] = "0b0111111110000000";
        ram[228] = "0b0111111110001000";
        ram[229] = "0b0111111110001111";
        ram[230] = "0b0111111110010110";
        ram[231] = "0b0111111110011101";
        ram[232] = "0b0111111110100011";
        ram[233] = "0b0111111110101000";
        ram[234] = "0b0111111110101101";
        ram[235] = "0b0111111110110010";
        ram[236] = "0b0111111110110111";
        ram[237] = "0b0111111110111100";
        ram[238] = "0b0111111111000000";
        ram[239] = "0b0111111111000100";
        ram[240] = "0b0111111111000111";
        ram[241] = "0b0111111111001011";
        ram[242] = "0b0111111111001110";
        ram[243] = "0b0111111111010001";
        ram[244] = "0b0111111111010100";
        ram[245] = "0b0111111111010110";
        ram[246] = "0b0111111111011001";
        ram[247] = "0b0111111111011011";
        ram[248] = "0b0111111111011101";
        ram[249] = "0b0111111111011111";
        ram[250] = "0b0111111111100001";
        ram[251] = "0b0111111111100011";
        ram[252] = "0b0111111111100101";
        ram[253] = "0b0111111111100111";
        ram[254] = "0b0111111111101000";
        ram[255] = "0b0111111111101010";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
  sensitive<<clk.pos();


SC_METHOD(prc_write_2);
  sensitive<<clk.pos();


SC_METHOD(prc_write_3);
  sensitive<<clk.pos();


SC_METHOD(prc_write_4);
  sensitive<<clk.pos();


SC_METHOD(prc_write_5);
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


void prc_write_1()
{
    if (ce1.read() == sc_dt::Log_1) 
    {
            if(address1.read().is_01() && address1.read().to_uint()<AddressRange)
              q1 = ram[address1.read().to_uint()];
            else
              q1 = sc_lv<DataWidth>();
    }
}


void prc_write_2()
{
    if (ce2.read() == sc_dt::Log_1) 
    {
            if(address2.read().is_01() && address2.read().to_uint()<AddressRange)
              q2 = ram[address2.read().to_uint()];
            else
              q2 = sc_lv<DataWidth>();
    }
}


void prc_write_3()
{
    if (ce3.read() == sc_dt::Log_1) 
    {
            if(address3.read().is_01() && address3.read().to_uint()<AddressRange)
              q3 = ram[address3.read().to_uint()];
            else
              q3 = sc_lv<DataWidth>();
    }
}


void prc_write_4()
{
    if (ce4.read() == sc_dt::Log_1) 
    {
            if(address4.read().is_01() && address4.read().to_uint()<AddressRange)
              q4 = ram[address4.read().to_uint()];
            else
              q4 = sc_lv<DataWidth>();
    }
}


void prc_write_5()
{
    if (ce5.read() == sc_dt::Log_1) 
    {
            if(address5.read().is_01() && address5.read().to_uint()<AddressRange)
              q5 = ram[address5.read().to_uint()];
            else
              q5 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(lstm_backward_tanbdk) {


static const unsigned DataWidth = 16;
static const unsigned AddressRange = 256;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in<sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in<sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in <sc_lv<AddressWidth> > address4;
sc_core::sc_in<sc_logic> ce4;
sc_core::sc_out <sc_lv<DataWidth> > q4;
sc_core::sc_in <sc_lv<AddressWidth> > address5;
sc_core::sc_in<sc_logic> ce5;
sc_core::sc_out <sc_lv<DataWidth> > q5;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lstm_backward_tanbdk_ram* meminst;


SC_CTOR(lstm_backward_tanbdk) {
meminst = new lstm_backward_tanbdk_ram("lstm_backward_tanbdk_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->address2(address2);
meminst->ce2(ce2);
meminst->q2(q2);

meminst->address3(address3);
meminst->ce3(ce3);
meminst->q3(q3);

meminst->address4(address4);
meminst->ce4(ce4);
meminst->q4(q4);

meminst->address5(address5);
meminst->ce5(ce5);
meminst->q5(q5);

meminst->reset(reset);
meminst->clk(clk);
}
~lstm_backward_tanbdk() {
    delete meminst;
}


};//endmodule
#endif
