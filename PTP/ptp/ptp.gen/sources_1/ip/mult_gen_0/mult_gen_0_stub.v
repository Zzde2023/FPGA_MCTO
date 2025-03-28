// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
// Date        : Tue Feb 25 15:51:25 2025
// Host        : jude running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub f:/Project/PTP/ptp/ptp.gen/sources_1/ip/mult_gen_0/mult_gen_0_stub.v
// Design      : mult_gen_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z035fbv676-2
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "mult_gen_v12_0_16,Vivado 2020.2.2" *)
module mult_gen_0(CLK, A, P)
/* synthesis syn_black_box black_box_pad_pin="CLK,A[47:0],P[63:0]" */;
  input CLK;
  input [47:0]A;
  output [63:0]P;
endmodule
