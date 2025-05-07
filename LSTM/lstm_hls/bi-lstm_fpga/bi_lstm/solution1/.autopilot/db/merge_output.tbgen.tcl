set moduleName merge_output
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {merge_output}
set C_modelType { void 0 }
set C_modelArgList {
	{ h_forward_0_0_V_re int 16 regular  }
	{ h_forward_0_1_V_re int 16 regular  }
	{ h_forward_0_2_V_re int 16 regular  }
	{ h_forward_0_3_V_re int 16 regular  }
	{ h_forward_0_4_V_re int 16 regular  }
	{ h_forward_0_5_V_re int 16 regular  }
	{ h_forward_0_6_V_re int 16 regular  }
	{ h_forward_1_0_V_re int 16 regular  }
	{ h_forward_1_1_V_re int 16 regular  }
	{ h_forward_1_2_V_re int 16 regular  }
	{ h_forward_1_3_V_re int 16 regular  }
	{ h_forward_1_4_V_re int 16 regular  }
	{ h_forward_1_5_V_re int 16 regular  }
	{ h_forward_1_6_V_re int 16 regular  }
	{ h_forward_2_0_V_re int 16 regular  }
	{ h_forward_2_1_V_re int 16 regular  }
	{ h_forward_2_2_V_re int 16 regular  }
	{ h_forward_2_3_V_re int 16 regular  }
	{ h_forward_2_4_V_re int 16 regular  }
	{ h_forward_2_5_V_re int 16 regular  }
	{ h_forward_3_0_V_re int 16 regular  }
	{ h_forward_3_1_V_re int 16 regular  }
	{ h_forward_3_2_V_re int 16 regular  }
	{ h_forward_3_3_V_re int 16 regular  }
	{ h_forward_3_4_V_re int 16 regular  }
	{ h_forward_3_5_V_re int 16 regular  }
	{ h_forward_4_0_V_re int 16 regular  }
	{ h_forward_4_1_V_re int 16 regular  }
	{ h_forward_4_2_V_re int 16 regular  }
	{ h_forward_4_3_V_re int 16 regular  }
	{ h_forward_4_4_V_re int 16 regular  }
	{ h_forward_4_5_V_re int 16 regular  }
	{ h_forward_5_0_V_re int 16 regular  }
	{ h_forward_5_1_V_re int 16 regular  }
	{ h_forward_5_2_V_re int 16 regular  }
	{ h_forward_5_3_V_re int 16 regular  }
	{ h_forward_5_4_V_re int 16 regular  }
	{ h_forward_5_5_V_re int 16 regular  }
	{ h_forward_6_0_V_re int 16 regular  }
	{ h_forward_6_1_V_re int 16 regular  }
	{ h_forward_6_2_V_re int 16 regular  }
	{ h_forward_6_3_V_re int 16 regular  }
	{ h_forward_6_4_V_re int 16 regular  }
	{ h_forward_6_5_V_re int 16 regular  }
	{ h_forward_7_0_V_re int 16 regular  }
	{ h_forward_7_1_V_re int 16 regular  }
	{ h_forward_7_2_V_re int 16 regular  }
	{ h_forward_7_3_V_re int 16 regular  }
	{ h_forward_7_4_V_re int 16 regular  }
	{ h_forward_7_5_V_re int 16 regular  }
	{ h_backward_0_0_V_r int 16 regular  }
	{ h_backward_0_1_V_r int 16 regular  }
	{ h_backward_0_2_V_r int 16 regular  }
	{ h_backward_0_3_V_r int 16 regular  }
	{ h_backward_0_4_V_r int 16 regular  }
	{ h_backward_0_5_V_r int 16 regular  }
	{ h_backward_0_6_V_r int 16 regular  }
	{ h_backward_1_0_V_r int 16 regular  }
	{ h_backward_1_1_V_r int 16 regular  }
	{ h_backward_1_2_V_r int 16 regular  }
	{ h_backward_1_3_V_r int 16 regular  }
	{ h_backward_1_4_V_r int 16 regular  }
	{ h_backward_1_5_V_r int 16 regular  }
	{ h_backward_1_6_V_r int 16 regular  }
	{ h_backward_2_0_V_r int 16 regular  }
	{ h_backward_2_1_V_r int 16 regular  }
	{ h_backward_2_2_V_r int 16 regular  }
	{ h_backward_2_3_V_r int 16 regular  }
	{ h_backward_2_4_V_r int 16 regular  }
	{ h_backward_2_5_V_r int 16 regular  }
	{ h_backward_3_0_V_r int 16 regular  }
	{ h_backward_3_1_V_r int 16 regular  }
	{ h_backward_3_2_V_r int 16 regular  }
	{ h_backward_3_3_V_r int 16 regular  }
	{ h_backward_3_4_V_r int 16 regular  }
	{ h_backward_3_5_V_r int 16 regular  }
	{ h_backward_4_0_V_r int 16 regular  }
	{ h_backward_4_1_V_r int 16 regular  }
	{ h_backward_4_2_V_r int 16 regular  }
	{ h_backward_4_3_V_r int 16 regular  }
	{ h_backward_4_4_V_r int 16 regular  }
	{ h_backward_4_5_V_r int 16 regular  }
	{ h_backward_5_0_V_r int 16 regular  }
	{ h_backward_5_1_V_r int 16 regular  }
	{ h_backward_5_2_V_r int 16 regular  }
	{ h_backward_5_3_V_r int 16 regular  }
	{ h_backward_5_4_V_r int 16 regular  }
	{ h_backward_5_5_V_r int 16 regular  }
	{ h_backward_6_0_V_r int 16 regular  }
	{ h_backward_6_1_V_r int 16 regular  }
	{ h_backward_6_2_V_r int 16 regular  }
	{ h_backward_6_3_V_r int 16 regular  }
	{ h_backward_6_4_V_r int 16 regular  }
	{ h_backward_6_5_V_r int 16 regular  }
	{ h_backward_7_0_V_r int 16 regular  }
	{ h_backward_7_1_V_r int 16 regular  }
	{ h_backward_7_2_V_r int 16 regular  }
	{ h_backward_7_3_V_r int 16 regular  }
	{ h_backward_7_4_V_r int 16 regular  }
	{ h_backward_7_5_V_r int 16 regular  }
	{ h_out_0_V int 16 regular {array 13 { 0 0 } 0 1 }  }
	{ h_out_1_V int 16 regular {array 13 { 0 0 } 0 1 }  }
	{ h_out_2_V int 16 regular {array 13 { 0 0 } 0 1 }  }
	{ h_out_3_V int 16 regular {array 13 { 0 0 } 0 1 }  }
	{ h_out_4_V int 16 regular {array 12 { 0 0 } 0 1 }  }
	{ h_out_5_V int 16 regular {array 12 { 0 0 } 0 1 }  }
	{ h_out_6_V int 16 regular {array 12 { 0 0 } 0 1 }  }
	{ h_out_7_V int 16 regular {array 12 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "h_forward_0_0_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_0_1_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_0_2_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_0_3_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_0_4_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_0_5_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_0_6_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_1_0_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_1_1_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_1_2_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_1_3_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_1_4_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_1_5_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_1_6_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_2_0_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_2_1_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_2_2_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_2_3_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_2_4_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_2_5_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_3_0_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_3_1_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_3_2_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_3_3_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_3_4_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_3_5_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_4_0_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_4_1_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_4_2_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_4_3_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_4_4_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_4_5_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_5_0_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_5_1_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_5_2_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_5_3_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_5_4_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_5_5_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_6_0_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_6_1_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_6_2_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_6_3_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_6_4_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_6_5_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_7_0_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_7_1_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_7_2_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_7_3_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_7_4_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_forward_7_5_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_0_0_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_0_1_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_0_2_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_0_3_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_0_4_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_0_5_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_0_6_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_1_0_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_1_1_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_1_2_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_1_3_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_1_4_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_1_5_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_1_6_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_2_0_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_2_1_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_2_2_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_2_3_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_2_4_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_2_5_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_3_0_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_3_1_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_3_2_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_3_3_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_3_4_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_3_5_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_4_0_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_4_1_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_4_2_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_4_3_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_4_4_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_4_5_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_5_0_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_5_1_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_5_2_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_5_3_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_5_4_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_5_5_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_6_0_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_6_1_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_6_2_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_6_3_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_6_4_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_6_5_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_7_0_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_7_1_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_7_2_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_7_3_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_7_4_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_backward_7_5_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_out_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "h_out_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "h_out_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "h_out_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "h_out_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "h_out_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "h_out_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "h_out_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 171
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ h_forward_0_0_V_re sc_in sc_lv 16 signal 0 } 
	{ h_forward_0_1_V_re sc_in sc_lv 16 signal 1 } 
	{ h_forward_0_2_V_re sc_in sc_lv 16 signal 2 } 
	{ h_forward_0_3_V_re sc_in sc_lv 16 signal 3 } 
	{ h_forward_0_4_V_re sc_in sc_lv 16 signal 4 } 
	{ h_forward_0_5_V_re sc_in sc_lv 16 signal 5 } 
	{ h_forward_0_6_V_re sc_in sc_lv 16 signal 6 } 
	{ h_forward_1_0_V_re sc_in sc_lv 16 signal 7 } 
	{ h_forward_1_1_V_re sc_in sc_lv 16 signal 8 } 
	{ h_forward_1_2_V_re sc_in sc_lv 16 signal 9 } 
	{ h_forward_1_3_V_re sc_in sc_lv 16 signal 10 } 
	{ h_forward_1_4_V_re sc_in sc_lv 16 signal 11 } 
	{ h_forward_1_5_V_re sc_in sc_lv 16 signal 12 } 
	{ h_forward_1_6_V_re sc_in sc_lv 16 signal 13 } 
	{ h_forward_2_0_V_re sc_in sc_lv 16 signal 14 } 
	{ h_forward_2_1_V_re sc_in sc_lv 16 signal 15 } 
	{ h_forward_2_2_V_re sc_in sc_lv 16 signal 16 } 
	{ h_forward_2_3_V_re sc_in sc_lv 16 signal 17 } 
	{ h_forward_2_4_V_re sc_in sc_lv 16 signal 18 } 
	{ h_forward_2_5_V_re sc_in sc_lv 16 signal 19 } 
	{ h_forward_3_0_V_re sc_in sc_lv 16 signal 20 } 
	{ h_forward_3_1_V_re sc_in sc_lv 16 signal 21 } 
	{ h_forward_3_2_V_re sc_in sc_lv 16 signal 22 } 
	{ h_forward_3_3_V_re sc_in sc_lv 16 signal 23 } 
	{ h_forward_3_4_V_re sc_in sc_lv 16 signal 24 } 
	{ h_forward_3_5_V_re sc_in sc_lv 16 signal 25 } 
	{ h_forward_4_0_V_re sc_in sc_lv 16 signal 26 } 
	{ h_forward_4_1_V_re sc_in sc_lv 16 signal 27 } 
	{ h_forward_4_2_V_re sc_in sc_lv 16 signal 28 } 
	{ h_forward_4_3_V_re sc_in sc_lv 16 signal 29 } 
	{ h_forward_4_4_V_re sc_in sc_lv 16 signal 30 } 
	{ h_forward_4_5_V_re sc_in sc_lv 16 signal 31 } 
	{ h_forward_5_0_V_re sc_in sc_lv 16 signal 32 } 
	{ h_forward_5_1_V_re sc_in sc_lv 16 signal 33 } 
	{ h_forward_5_2_V_re sc_in sc_lv 16 signal 34 } 
	{ h_forward_5_3_V_re sc_in sc_lv 16 signal 35 } 
	{ h_forward_5_4_V_re sc_in sc_lv 16 signal 36 } 
	{ h_forward_5_5_V_re sc_in sc_lv 16 signal 37 } 
	{ h_forward_6_0_V_re sc_in sc_lv 16 signal 38 } 
	{ h_forward_6_1_V_re sc_in sc_lv 16 signal 39 } 
	{ h_forward_6_2_V_re sc_in sc_lv 16 signal 40 } 
	{ h_forward_6_3_V_re sc_in sc_lv 16 signal 41 } 
	{ h_forward_6_4_V_re sc_in sc_lv 16 signal 42 } 
	{ h_forward_6_5_V_re sc_in sc_lv 16 signal 43 } 
	{ h_forward_7_0_V_re sc_in sc_lv 16 signal 44 } 
	{ h_forward_7_1_V_re sc_in sc_lv 16 signal 45 } 
	{ h_forward_7_2_V_re sc_in sc_lv 16 signal 46 } 
	{ h_forward_7_3_V_re sc_in sc_lv 16 signal 47 } 
	{ h_forward_7_4_V_re sc_in sc_lv 16 signal 48 } 
	{ h_forward_7_5_V_re sc_in sc_lv 16 signal 49 } 
	{ h_backward_0_0_V_r sc_in sc_lv 16 signal 50 } 
	{ h_backward_0_1_V_r sc_in sc_lv 16 signal 51 } 
	{ h_backward_0_2_V_r sc_in sc_lv 16 signal 52 } 
	{ h_backward_0_3_V_r sc_in sc_lv 16 signal 53 } 
	{ h_backward_0_4_V_r sc_in sc_lv 16 signal 54 } 
	{ h_backward_0_5_V_r sc_in sc_lv 16 signal 55 } 
	{ h_backward_0_6_V_r sc_in sc_lv 16 signal 56 } 
	{ h_backward_1_0_V_r sc_in sc_lv 16 signal 57 } 
	{ h_backward_1_1_V_r sc_in sc_lv 16 signal 58 } 
	{ h_backward_1_2_V_r sc_in sc_lv 16 signal 59 } 
	{ h_backward_1_3_V_r sc_in sc_lv 16 signal 60 } 
	{ h_backward_1_4_V_r sc_in sc_lv 16 signal 61 } 
	{ h_backward_1_5_V_r sc_in sc_lv 16 signal 62 } 
	{ h_backward_1_6_V_r sc_in sc_lv 16 signal 63 } 
	{ h_backward_2_0_V_r sc_in sc_lv 16 signal 64 } 
	{ h_backward_2_1_V_r sc_in sc_lv 16 signal 65 } 
	{ h_backward_2_2_V_r sc_in sc_lv 16 signal 66 } 
	{ h_backward_2_3_V_r sc_in sc_lv 16 signal 67 } 
	{ h_backward_2_4_V_r sc_in sc_lv 16 signal 68 } 
	{ h_backward_2_5_V_r sc_in sc_lv 16 signal 69 } 
	{ h_backward_3_0_V_r sc_in sc_lv 16 signal 70 } 
	{ h_backward_3_1_V_r sc_in sc_lv 16 signal 71 } 
	{ h_backward_3_2_V_r sc_in sc_lv 16 signal 72 } 
	{ h_backward_3_3_V_r sc_in sc_lv 16 signal 73 } 
	{ h_backward_3_4_V_r sc_in sc_lv 16 signal 74 } 
	{ h_backward_3_5_V_r sc_in sc_lv 16 signal 75 } 
	{ h_backward_4_0_V_r sc_in sc_lv 16 signal 76 } 
	{ h_backward_4_1_V_r sc_in sc_lv 16 signal 77 } 
	{ h_backward_4_2_V_r sc_in sc_lv 16 signal 78 } 
	{ h_backward_4_3_V_r sc_in sc_lv 16 signal 79 } 
	{ h_backward_4_4_V_r sc_in sc_lv 16 signal 80 } 
	{ h_backward_4_5_V_r sc_in sc_lv 16 signal 81 } 
	{ h_backward_5_0_V_r sc_in sc_lv 16 signal 82 } 
	{ h_backward_5_1_V_r sc_in sc_lv 16 signal 83 } 
	{ h_backward_5_2_V_r sc_in sc_lv 16 signal 84 } 
	{ h_backward_5_3_V_r sc_in sc_lv 16 signal 85 } 
	{ h_backward_5_4_V_r sc_in sc_lv 16 signal 86 } 
	{ h_backward_5_5_V_r sc_in sc_lv 16 signal 87 } 
	{ h_backward_6_0_V_r sc_in sc_lv 16 signal 88 } 
	{ h_backward_6_1_V_r sc_in sc_lv 16 signal 89 } 
	{ h_backward_6_2_V_r sc_in sc_lv 16 signal 90 } 
	{ h_backward_6_3_V_r sc_in sc_lv 16 signal 91 } 
	{ h_backward_6_4_V_r sc_in sc_lv 16 signal 92 } 
	{ h_backward_6_5_V_r sc_in sc_lv 16 signal 93 } 
	{ h_backward_7_0_V_r sc_in sc_lv 16 signal 94 } 
	{ h_backward_7_1_V_r sc_in sc_lv 16 signal 95 } 
	{ h_backward_7_2_V_r sc_in sc_lv 16 signal 96 } 
	{ h_backward_7_3_V_r sc_in sc_lv 16 signal 97 } 
	{ h_backward_7_4_V_r sc_in sc_lv 16 signal 98 } 
	{ h_backward_7_5_V_r sc_in sc_lv 16 signal 99 } 
	{ h_out_0_V_address0 sc_out sc_lv 4 signal 100 } 
	{ h_out_0_V_ce0 sc_out sc_logic 1 signal 100 } 
	{ h_out_0_V_we0 sc_out sc_logic 1 signal 100 } 
	{ h_out_0_V_d0 sc_out sc_lv 16 signal 100 } 
	{ h_out_0_V_address1 sc_out sc_lv 4 signal 100 } 
	{ h_out_0_V_ce1 sc_out sc_logic 1 signal 100 } 
	{ h_out_0_V_we1 sc_out sc_logic 1 signal 100 } 
	{ h_out_0_V_d1 sc_out sc_lv 16 signal 100 } 
	{ h_out_1_V_address0 sc_out sc_lv 4 signal 101 } 
	{ h_out_1_V_ce0 sc_out sc_logic 1 signal 101 } 
	{ h_out_1_V_we0 sc_out sc_logic 1 signal 101 } 
	{ h_out_1_V_d0 sc_out sc_lv 16 signal 101 } 
	{ h_out_1_V_address1 sc_out sc_lv 4 signal 101 } 
	{ h_out_1_V_ce1 sc_out sc_logic 1 signal 101 } 
	{ h_out_1_V_we1 sc_out sc_logic 1 signal 101 } 
	{ h_out_1_V_d1 sc_out sc_lv 16 signal 101 } 
	{ h_out_2_V_address0 sc_out sc_lv 4 signal 102 } 
	{ h_out_2_V_ce0 sc_out sc_logic 1 signal 102 } 
	{ h_out_2_V_we0 sc_out sc_logic 1 signal 102 } 
	{ h_out_2_V_d0 sc_out sc_lv 16 signal 102 } 
	{ h_out_2_V_address1 sc_out sc_lv 4 signal 102 } 
	{ h_out_2_V_ce1 sc_out sc_logic 1 signal 102 } 
	{ h_out_2_V_we1 sc_out sc_logic 1 signal 102 } 
	{ h_out_2_V_d1 sc_out sc_lv 16 signal 102 } 
	{ h_out_3_V_address0 sc_out sc_lv 4 signal 103 } 
	{ h_out_3_V_ce0 sc_out sc_logic 1 signal 103 } 
	{ h_out_3_V_we0 sc_out sc_logic 1 signal 103 } 
	{ h_out_3_V_d0 sc_out sc_lv 16 signal 103 } 
	{ h_out_3_V_address1 sc_out sc_lv 4 signal 103 } 
	{ h_out_3_V_ce1 sc_out sc_logic 1 signal 103 } 
	{ h_out_3_V_we1 sc_out sc_logic 1 signal 103 } 
	{ h_out_3_V_d1 sc_out sc_lv 16 signal 103 } 
	{ h_out_4_V_address0 sc_out sc_lv 4 signal 104 } 
	{ h_out_4_V_ce0 sc_out sc_logic 1 signal 104 } 
	{ h_out_4_V_we0 sc_out sc_logic 1 signal 104 } 
	{ h_out_4_V_d0 sc_out sc_lv 16 signal 104 } 
	{ h_out_4_V_address1 sc_out sc_lv 4 signal 104 } 
	{ h_out_4_V_ce1 sc_out sc_logic 1 signal 104 } 
	{ h_out_4_V_we1 sc_out sc_logic 1 signal 104 } 
	{ h_out_4_V_d1 sc_out sc_lv 16 signal 104 } 
	{ h_out_5_V_address0 sc_out sc_lv 4 signal 105 } 
	{ h_out_5_V_ce0 sc_out sc_logic 1 signal 105 } 
	{ h_out_5_V_we0 sc_out sc_logic 1 signal 105 } 
	{ h_out_5_V_d0 sc_out sc_lv 16 signal 105 } 
	{ h_out_5_V_address1 sc_out sc_lv 4 signal 105 } 
	{ h_out_5_V_ce1 sc_out sc_logic 1 signal 105 } 
	{ h_out_5_V_we1 sc_out sc_logic 1 signal 105 } 
	{ h_out_5_V_d1 sc_out sc_lv 16 signal 105 } 
	{ h_out_6_V_address0 sc_out sc_lv 4 signal 106 } 
	{ h_out_6_V_ce0 sc_out sc_logic 1 signal 106 } 
	{ h_out_6_V_we0 sc_out sc_logic 1 signal 106 } 
	{ h_out_6_V_d0 sc_out sc_lv 16 signal 106 } 
	{ h_out_6_V_address1 sc_out sc_lv 4 signal 106 } 
	{ h_out_6_V_ce1 sc_out sc_logic 1 signal 106 } 
	{ h_out_6_V_we1 sc_out sc_logic 1 signal 106 } 
	{ h_out_6_V_d1 sc_out sc_lv 16 signal 106 } 
	{ h_out_7_V_address0 sc_out sc_lv 4 signal 107 } 
	{ h_out_7_V_ce0 sc_out sc_logic 1 signal 107 } 
	{ h_out_7_V_we0 sc_out sc_logic 1 signal 107 } 
	{ h_out_7_V_d0 sc_out sc_lv 16 signal 107 } 
	{ h_out_7_V_address1 sc_out sc_lv 4 signal 107 } 
	{ h_out_7_V_ce1 sc_out sc_logic 1 signal 107 } 
	{ h_out_7_V_we1 sc_out sc_logic 1 signal 107 } 
	{ h_out_7_V_d1 sc_out sc_lv 16 signal 107 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "h_forward_0_0_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_0_0_V_re", "role": "default" }} , 
 	{ "name": "h_forward_0_1_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_0_1_V_re", "role": "default" }} , 
 	{ "name": "h_forward_0_2_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_0_2_V_re", "role": "default" }} , 
 	{ "name": "h_forward_0_3_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_0_3_V_re", "role": "default" }} , 
 	{ "name": "h_forward_0_4_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_0_4_V_re", "role": "default" }} , 
 	{ "name": "h_forward_0_5_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_0_5_V_re", "role": "default" }} , 
 	{ "name": "h_forward_0_6_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_0_6_V_re", "role": "default" }} , 
 	{ "name": "h_forward_1_0_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_1_0_V_re", "role": "default" }} , 
 	{ "name": "h_forward_1_1_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_1_1_V_re", "role": "default" }} , 
 	{ "name": "h_forward_1_2_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_1_2_V_re", "role": "default" }} , 
 	{ "name": "h_forward_1_3_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_1_3_V_re", "role": "default" }} , 
 	{ "name": "h_forward_1_4_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_1_4_V_re", "role": "default" }} , 
 	{ "name": "h_forward_1_5_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_1_5_V_re", "role": "default" }} , 
 	{ "name": "h_forward_1_6_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_1_6_V_re", "role": "default" }} , 
 	{ "name": "h_forward_2_0_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_2_0_V_re", "role": "default" }} , 
 	{ "name": "h_forward_2_1_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_2_1_V_re", "role": "default" }} , 
 	{ "name": "h_forward_2_2_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_2_2_V_re", "role": "default" }} , 
 	{ "name": "h_forward_2_3_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_2_3_V_re", "role": "default" }} , 
 	{ "name": "h_forward_2_4_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_2_4_V_re", "role": "default" }} , 
 	{ "name": "h_forward_2_5_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_2_5_V_re", "role": "default" }} , 
 	{ "name": "h_forward_3_0_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_3_0_V_re", "role": "default" }} , 
 	{ "name": "h_forward_3_1_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_3_1_V_re", "role": "default" }} , 
 	{ "name": "h_forward_3_2_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_3_2_V_re", "role": "default" }} , 
 	{ "name": "h_forward_3_3_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_3_3_V_re", "role": "default" }} , 
 	{ "name": "h_forward_3_4_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_3_4_V_re", "role": "default" }} , 
 	{ "name": "h_forward_3_5_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_3_5_V_re", "role": "default" }} , 
 	{ "name": "h_forward_4_0_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_4_0_V_re", "role": "default" }} , 
 	{ "name": "h_forward_4_1_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_4_1_V_re", "role": "default" }} , 
 	{ "name": "h_forward_4_2_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_4_2_V_re", "role": "default" }} , 
 	{ "name": "h_forward_4_3_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_4_3_V_re", "role": "default" }} , 
 	{ "name": "h_forward_4_4_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_4_4_V_re", "role": "default" }} , 
 	{ "name": "h_forward_4_5_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_4_5_V_re", "role": "default" }} , 
 	{ "name": "h_forward_5_0_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_5_0_V_re", "role": "default" }} , 
 	{ "name": "h_forward_5_1_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_5_1_V_re", "role": "default" }} , 
 	{ "name": "h_forward_5_2_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_5_2_V_re", "role": "default" }} , 
 	{ "name": "h_forward_5_3_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_5_3_V_re", "role": "default" }} , 
 	{ "name": "h_forward_5_4_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_5_4_V_re", "role": "default" }} , 
 	{ "name": "h_forward_5_5_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_5_5_V_re", "role": "default" }} , 
 	{ "name": "h_forward_6_0_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_6_0_V_re", "role": "default" }} , 
 	{ "name": "h_forward_6_1_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_6_1_V_re", "role": "default" }} , 
 	{ "name": "h_forward_6_2_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_6_2_V_re", "role": "default" }} , 
 	{ "name": "h_forward_6_3_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_6_3_V_re", "role": "default" }} , 
 	{ "name": "h_forward_6_4_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_6_4_V_re", "role": "default" }} , 
 	{ "name": "h_forward_6_5_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_6_5_V_re", "role": "default" }} , 
 	{ "name": "h_forward_7_0_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_7_0_V_re", "role": "default" }} , 
 	{ "name": "h_forward_7_1_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_7_1_V_re", "role": "default" }} , 
 	{ "name": "h_forward_7_2_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_7_2_V_re", "role": "default" }} , 
 	{ "name": "h_forward_7_3_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_7_3_V_re", "role": "default" }} , 
 	{ "name": "h_forward_7_4_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_7_4_V_re", "role": "default" }} , 
 	{ "name": "h_forward_7_5_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_forward_7_5_V_re", "role": "default" }} , 
 	{ "name": "h_backward_0_0_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_0_0_V_r", "role": "default" }} , 
 	{ "name": "h_backward_0_1_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_0_1_V_r", "role": "default" }} , 
 	{ "name": "h_backward_0_2_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_0_2_V_r", "role": "default" }} , 
 	{ "name": "h_backward_0_3_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_0_3_V_r", "role": "default" }} , 
 	{ "name": "h_backward_0_4_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_0_4_V_r", "role": "default" }} , 
 	{ "name": "h_backward_0_5_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_0_5_V_r", "role": "default" }} , 
 	{ "name": "h_backward_0_6_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_0_6_V_r", "role": "default" }} , 
 	{ "name": "h_backward_1_0_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_1_0_V_r", "role": "default" }} , 
 	{ "name": "h_backward_1_1_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_1_1_V_r", "role": "default" }} , 
 	{ "name": "h_backward_1_2_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_1_2_V_r", "role": "default" }} , 
 	{ "name": "h_backward_1_3_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_1_3_V_r", "role": "default" }} , 
 	{ "name": "h_backward_1_4_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_1_4_V_r", "role": "default" }} , 
 	{ "name": "h_backward_1_5_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_1_5_V_r", "role": "default" }} , 
 	{ "name": "h_backward_1_6_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_1_6_V_r", "role": "default" }} , 
 	{ "name": "h_backward_2_0_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_2_0_V_r", "role": "default" }} , 
 	{ "name": "h_backward_2_1_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_2_1_V_r", "role": "default" }} , 
 	{ "name": "h_backward_2_2_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_2_2_V_r", "role": "default" }} , 
 	{ "name": "h_backward_2_3_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_2_3_V_r", "role": "default" }} , 
 	{ "name": "h_backward_2_4_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_2_4_V_r", "role": "default" }} , 
 	{ "name": "h_backward_2_5_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_2_5_V_r", "role": "default" }} , 
 	{ "name": "h_backward_3_0_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_3_0_V_r", "role": "default" }} , 
 	{ "name": "h_backward_3_1_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_3_1_V_r", "role": "default" }} , 
 	{ "name": "h_backward_3_2_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_3_2_V_r", "role": "default" }} , 
 	{ "name": "h_backward_3_3_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_3_3_V_r", "role": "default" }} , 
 	{ "name": "h_backward_3_4_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_3_4_V_r", "role": "default" }} , 
 	{ "name": "h_backward_3_5_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_3_5_V_r", "role": "default" }} , 
 	{ "name": "h_backward_4_0_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_4_0_V_r", "role": "default" }} , 
 	{ "name": "h_backward_4_1_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_4_1_V_r", "role": "default" }} , 
 	{ "name": "h_backward_4_2_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_4_2_V_r", "role": "default" }} , 
 	{ "name": "h_backward_4_3_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_4_3_V_r", "role": "default" }} , 
 	{ "name": "h_backward_4_4_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_4_4_V_r", "role": "default" }} , 
 	{ "name": "h_backward_4_5_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_4_5_V_r", "role": "default" }} , 
 	{ "name": "h_backward_5_0_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_5_0_V_r", "role": "default" }} , 
 	{ "name": "h_backward_5_1_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_5_1_V_r", "role": "default" }} , 
 	{ "name": "h_backward_5_2_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_5_2_V_r", "role": "default" }} , 
 	{ "name": "h_backward_5_3_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_5_3_V_r", "role": "default" }} , 
 	{ "name": "h_backward_5_4_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_5_4_V_r", "role": "default" }} , 
 	{ "name": "h_backward_5_5_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_5_5_V_r", "role": "default" }} , 
 	{ "name": "h_backward_6_0_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_6_0_V_r", "role": "default" }} , 
 	{ "name": "h_backward_6_1_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_6_1_V_r", "role": "default" }} , 
 	{ "name": "h_backward_6_2_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_6_2_V_r", "role": "default" }} , 
 	{ "name": "h_backward_6_3_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_6_3_V_r", "role": "default" }} , 
 	{ "name": "h_backward_6_4_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_6_4_V_r", "role": "default" }} , 
 	{ "name": "h_backward_6_5_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_6_5_V_r", "role": "default" }} , 
 	{ "name": "h_backward_7_0_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_7_0_V_r", "role": "default" }} , 
 	{ "name": "h_backward_7_1_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_7_1_V_r", "role": "default" }} , 
 	{ "name": "h_backward_7_2_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_7_2_V_r", "role": "default" }} , 
 	{ "name": "h_backward_7_3_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_7_3_V_r", "role": "default" }} , 
 	{ "name": "h_backward_7_4_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_7_4_V_r", "role": "default" }} , 
 	{ "name": "h_backward_7_5_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_backward_7_5_V_r", "role": "default" }} , 
 	{ "name": "h_out_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_0_V", "role": "address0" }} , 
 	{ "name": "h_out_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_0_V", "role": "ce0" }} , 
 	{ "name": "h_out_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_0_V", "role": "we0" }} , 
 	{ "name": "h_out_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_0_V", "role": "d0" }} , 
 	{ "name": "h_out_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_0_V", "role": "address1" }} , 
 	{ "name": "h_out_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_0_V", "role": "ce1" }} , 
 	{ "name": "h_out_0_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_0_V", "role": "we1" }} , 
 	{ "name": "h_out_0_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_0_V", "role": "d1" }} , 
 	{ "name": "h_out_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_1_V", "role": "address0" }} , 
 	{ "name": "h_out_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_1_V", "role": "ce0" }} , 
 	{ "name": "h_out_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_1_V", "role": "we0" }} , 
 	{ "name": "h_out_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_1_V", "role": "d0" }} , 
 	{ "name": "h_out_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_1_V", "role": "address1" }} , 
 	{ "name": "h_out_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_1_V", "role": "ce1" }} , 
 	{ "name": "h_out_1_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_1_V", "role": "we1" }} , 
 	{ "name": "h_out_1_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_1_V", "role": "d1" }} , 
 	{ "name": "h_out_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_2_V", "role": "address0" }} , 
 	{ "name": "h_out_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_2_V", "role": "ce0" }} , 
 	{ "name": "h_out_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_2_V", "role": "we0" }} , 
 	{ "name": "h_out_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_2_V", "role": "d0" }} , 
 	{ "name": "h_out_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_2_V", "role": "address1" }} , 
 	{ "name": "h_out_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_2_V", "role": "ce1" }} , 
 	{ "name": "h_out_2_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_2_V", "role": "we1" }} , 
 	{ "name": "h_out_2_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_2_V", "role": "d1" }} , 
 	{ "name": "h_out_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_3_V", "role": "address0" }} , 
 	{ "name": "h_out_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_3_V", "role": "ce0" }} , 
 	{ "name": "h_out_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_3_V", "role": "we0" }} , 
 	{ "name": "h_out_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_3_V", "role": "d0" }} , 
 	{ "name": "h_out_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_3_V", "role": "address1" }} , 
 	{ "name": "h_out_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_3_V", "role": "ce1" }} , 
 	{ "name": "h_out_3_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_3_V", "role": "we1" }} , 
 	{ "name": "h_out_3_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_3_V", "role": "d1" }} , 
 	{ "name": "h_out_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_4_V", "role": "address0" }} , 
 	{ "name": "h_out_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_4_V", "role": "ce0" }} , 
 	{ "name": "h_out_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_4_V", "role": "we0" }} , 
 	{ "name": "h_out_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_4_V", "role": "d0" }} , 
 	{ "name": "h_out_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_4_V", "role": "address1" }} , 
 	{ "name": "h_out_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_4_V", "role": "ce1" }} , 
 	{ "name": "h_out_4_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_4_V", "role": "we1" }} , 
 	{ "name": "h_out_4_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_4_V", "role": "d1" }} , 
 	{ "name": "h_out_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_5_V", "role": "address0" }} , 
 	{ "name": "h_out_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_5_V", "role": "ce0" }} , 
 	{ "name": "h_out_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_5_V", "role": "we0" }} , 
 	{ "name": "h_out_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_5_V", "role": "d0" }} , 
 	{ "name": "h_out_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_5_V", "role": "address1" }} , 
 	{ "name": "h_out_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_5_V", "role": "ce1" }} , 
 	{ "name": "h_out_5_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_5_V", "role": "we1" }} , 
 	{ "name": "h_out_5_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_5_V", "role": "d1" }} , 
 	{ "name": "h_out_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_6_V", "role": "address0" }} , 
 	{ "name": "h_out_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_6_V", "role": "ce0" }} , 
 	{ "name": "h_out_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_6_V", "role": "we0" }} , 
 	{ "name": "h_out_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_6_V", "role": "d0" }} , 
 	{ "name": "h_out_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_6_V", "role": "address1" }} , 
 	{ "name": "h_out_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_6_V", "role": "ce1" }} , 
 	{ "name": "h_out_6_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_6_V", "role": "we1" }} , 
 	{ "name": "h_out_6_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_6_V", "role": "d1" }} , 
 	{ "name": "h_out_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_7_V", "role": "address0" }} , 
 	{ "name": "h_out_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_7_V", "role": "ce0" }} , 
 	{ "name": "h_out_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_7_V", "role": "we0" }} , 
 	{ "name": "h_out_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_7_V", "role": "d0" }} , 
 	{ "name": "h_out_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_out_7_V", "role": "address1" }} , 
 	{ "name": "h_out_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_7_V", "role": "ce1" }} , 
 	{ "name": "h_out_7_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_out_7_V", "role": "we1" }} , 
 	{ "name": "h_out_7_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_out_7_V", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "merge_output",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "6",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "h_forward_0_0_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_0_1_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_0_2_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_0_3_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_0_4_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_0_5_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_0_6_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_1_0_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_1_1_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_1_2_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_1_3_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_1_4_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_1_5_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_1_6_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_2_0_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_2_1_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_2_2_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_2_3_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_2_4_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_2_5_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_3_0_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_3_1_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_3_2_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_3_3_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_3_4_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_3_5_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_4_0_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_4_1_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_4_2_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_4_3_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_4_4_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_4_5_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_5_0_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_5_1_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_5_2_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_5_3_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_5_4_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_5_5_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_6_0_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_6_1_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_6_2_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_6_3_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_6_4_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_6_5_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_7_0_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_7_1_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_7_2_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_7_3_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_7_4_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_forward_7_5_V_re", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_0_0_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_0_1_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_0_2_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_0_3_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_0_4_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_0_5_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_0_6_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_1_0_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_1_1_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_1_2_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_1_3_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_1_4_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_1_5_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_1_6_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_2_0_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_2_1_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_2_2_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_2_3_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_2_4_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_2_5_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_3_0_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_3_1_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_3_2_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_3_3_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_3_4_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_3_5_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_4_0_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_4_1_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_4_2_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_4_3_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_4_4_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_4_5_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_5_0_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_5_1_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_5_2_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_5_3_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_5_4_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_5_5_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_6_0_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_6_1_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_6_2_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_6_3_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_6_4_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_6_5_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_7_0_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_7_1_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_7_2_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_7_3_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_7_4_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_backward_7_5_V_r", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_out_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_out_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_out_2_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_out_3_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_out_4_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_out_5_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_out_6_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_out_7_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"}]}]}


set ArgLastReadFirstWriteLatency {
	merge_output {
		h_forward_0_0_V_re {Type I LastRead 0 FirstWrite -1}
		h_forward_0_1_V_re {Type I LastRead 1 FirstWrite -1}
		h_forward_0_2_V_re {Type I LastRead 2 FirstWrite -1}
		h_forward_0_3_V_re {Type I LastRead 3 FirstWrite -1}
		h_forward_0_4_V_re {Type I LastRead 4 FirstWrite -1}
		h_forward_0_5_V_re {Type I LastRead 5 FirstWrite -1}
		h_forward_0_6_V_re {Type I LastRead 6 FirstWrite -1}
		h_forward_1_0_V_re {Type I LastRead 0 FirstWrite -1}
		h_forward_1_1_V_re {Type I LastRead 1 FirstWrite -1}
		h_forward_1_2_V_re {Type I LastRead 2 FirstWrite -1}
		h_forward_1_3_V_re {Type I LastRead 3 FirstWrite -1}
		h_forward_1_4_V_re {Type I LastRead 4 FirstWrite -1}
		h_forward_1_5_V_re {Type I LastRead 5 FirstWrite -1}
		h_forward_1_6_V_re {Type I LastRead 6 FirstWrite -1}
		h_forward_2_0_V_re {Type I LastRead 1 FirstWrite -1}
		h_forward_2_1_V_re {Type I LastRead 2 FirstWrite -1}
		h_forward_2_2_V_re {Type I LastRead 3 FirstWrite -1}
		h_forward_2_3_V_re {Type I LastRead 4 FirstWrite -1}
		h_forward_2_4_V_re {Type I LastRead 5 FirstWrite -1}
		h_forward_2_5_V_re {Type I LastRead 6 FirstWrite -1}
		h_forward_3_0_V_re {Type I LastRead 1 FirstWrite -1}
		h_forward_3_1_V_re {Type I LastRead 2 FirstWrite -1}
		h_forward_3_2_V_re {Type I LastRead 3 FirstWrite -1}
		h_forward_3_3_V_re {Type I LastRead 4 FirstWrite -1}
		h_forward_3_4_V_re {Type I LastRead 5 FirstWrite -1}
		h_forward_3_5_V_re {Type I LastRead 6 FirstWrite -1}
		h_forward_4_0_V_re {Type I LastRead 1 FirstWrite -1}
		h_forward_4_1_V_re {Type I LastRead 2 FirstWrite -1}
		h_forward_4_2_V_re {Type I LastRead 3 FirstWrite -1}
		h_forward_4_3_V_re {Type I LastRead 4 FirstWrite -1}
		h_forward_4_4_V_re {Type I LastRead 5 FirstWrite -1}
		h_forward_4_5_V_re {Type I LastRead 6 FirstWrite -1}
		h_forward_5_0_V_re {Type I LastRead 1 FirstWrite -1}
		h_forward_5_1_V_re {Type I LastRead 2 FirstWrite -1}
		h_forward_5_2_V_re {Type I LastRead 3 FirstWrite -1}
		h_forward_5_3_V_re {Type I LastRead 4 FirstWrite -1}
		h_forward_5_4_V_re {Type I LastRead 5 FirstWrite -1}
		h_forward_5_5_V_re {Type I LastRead 6 FirstWrite -1}
		h_forward_6_0_V_re {Type I LastRead 1 FirstWrite -1}
		h_forward_6_1_V_re {Type I LastRead 2 FirstWrite -1}
		h_forward_6_2_V_re {Type I LastRead 3 FirstWrite -1}
		h_forward_6_3_V_re {Type I LastRead 4 FirstWrite -1}
		h_forward_6_4_V_re {Type I LastRead 5 FirstWrite -1}
		h_forward_6_5_V_re {Type I LastRead 6 FirstWrite -1}
		h_forward_7_0_V_re {Type I LastRead 1 FirstWrite -1}
		h_forward_7_1_V_re {Type I LastRead 2 FirstWrite -1}
		h_forward_7_2_V_re {Type I LastRead 3 FirstWrite -1}
		h_forward_7_3_V_re {Type I LastRead 4 FirstWrite -1}
		h_forward_7_4_V_re {Type I LastRead 5 FirstWrite -1}
		h_forward_7_5_V_re {Type I LastRead 6 FirstWrite -1}
		h_backward_0_0_V_r {Type I LastRead 0 FirstWrite -1}
		h_backward_0_1_V_r {Type I LastRead 1 FirstWrite -1}
		h_backward_0_2_V_r {Type I LastRead 2 FirstWrite -1}
		h_backward_0_3_V_r {Type I LastRead 3 FirstWrite -1}
		h_backward_0_4_V_r {Type I LastRead 4 FirstWrite -1}
		h_backward_0_5_V_r {Type I LastRead 5 FirstWrite -1}
		h_backward_0_6_V_r {Type I LastRead 6 FirstWrite -1}
		h_backward_1_0_V_r {Type I LastRead 0 FirstWrite -1}
		h_backward_1_1_V_r {Type I LastRead 1 FirstWrite -1}
		h_backward_1_2_V_r {Type I LastRead 2 FirstWrite -1}
		h_backward_1_3_V_r {Type I LastRead 3 FirstWrite -1}
		h_backward_1_4_V_r {Type I LastRead 4 FirstWrite -1}
		h_backward_1_5_V_r {Type I LastRead 5 FirstWrite -1}
		h_backward_1_6_V_r {Type I LastRead 6 FirstWrite -1}
		h_backward_2_0_V_r {Type I LastRead 1 FirstWrite -1}
		h_backward_2_1_V_r {Type I LastRead 2 FirstWrite -1}
		h_backward_2_2_V_r {Type I LastRead 3 FirstWrite -1}
		h_backward_2_3_V_r {Type I LastRead 4 FirstWrite -1}
		h_backward_2_4_V_r {Type I LastRead 5 FirstWrite -1}
		h_backward_2_5_V_r {Type I LastRead 6 FirstWrite -1}
		h_backward_3_0_V_r {Type I LastRead 1 FirstWrite -1}
		h_backward_3_1_V_r {Type I LastRead 2 FirstWrite -1}
		h_backward_3_2_V_r {Type I LastRead 3 FirstWrite -1}
		h_backward_3_3_V_r {Type I LastRead 4 FirstWrite -1}
		h_backward_3_4_V_r {Type I LastRead 5 FirstWrite -1}
		h_backward_3_5_V_r {Type I LastRead 6 FirstWrite -1}
		h_backward_4_0_V_r {Type I LastRead 1 FirstWrite -1}
		h_backward_4_1_V_r {Type I LastRead 2 FirstWrite -1}
		h_backward_4_2_V_r {Type I LastRead 3 FirstWrite -1}
		h_backward_4_3_V_r {Type I LastRead 4 FirstWrite -1}
		h_backward_4_4_V_r {Type I LastRead 5 FirstWrite -1}
		h_backward_4_5_V_r {Type I LastRead 6 FirstWrite -1}
		h_backward_5_0_V_r {Type I LastRead 1 FirstWrite -1}
		h_backward_5_1_V_r {Type I LastRead 2 FirstWrite -1}
		h_backward_5_2_V_r {Type I LastRead 3 FirstWrite -1}
		h_backward_5_3_V_r {Type I LastRead 4 FirstWrite -1}
		h_backward_5_4_V_r {Type I LastRead 5 FirstWrite -1}
		h_backward_5_5_V_r {Type I LastRead 6 FirstWrite -1}
		h_backward_6_0_V_r {Type I LastRead 1 FirstWrite -1}
		h_backward_6_1_V_r {Type I LastRead 2 FirstWrite -1}
		h_backward_6_2_V_r {Type I LastRead 3 FirstWrite -1}
		h_backward_6_3_V_r {Type I LastRead 4 FirstWrite -1}
		h_backward_6_4_V_r {Type I LastRead 5 FirstWrite -1}
		h_backward_6_5_V_r {Type I LastRead 6 FirstWrite -1}
		h_backward_7_0_V_r {Type I LastRead 1 FirstWrite -1}
		h_backward_7_1_V_r {Type I LastRead 2 FirstWrite -1}
		h_backward_7_2_V_r {Type I LastRead 3 FirstWrite -1}
		h_backward_7_3_V_r {Type I LastRead 4 FirstWrite -1}
		h_backward_7_4_V_r {Type I LastRead 5 FirstWrite -1}
		h_backward_7_5_V_r {Type I LastRead 6 FirstWrite -1}
		h_out_0_V {Type O LastRead -1 FirstWrite 0}
		h_out_1_V {Type O LastRead -1 FirstWrite 0}
		h_out_2_V {Type O LastRead -1 FirstWrite 0}
		h_out_3_V {Type O LastRead -1 FirstWrite 0}
		h_out_4_V {Type O LastRead -1 FirstWrite 1}
		h_out_5_V {Type O LastRead -1 FirstWrite 1}
		h_out_6_V {Type O LastRead -1 FirstWrite 1}
		h_out_7_V {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6", "Max" : "6"}
	, {"Name" : "Interval", "Min" : "6", "Max" : "6"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	h_forward_0_0_V_re { ap_none {  { h_forward_0_0_V_re in_data 0 16 } } }
	h_forward_0_1_V_re { ap_none {  { h_forward_0_1_V_re in_data 0 16 } } }
	h_forward_0_2_V_re { ap_none {  { h_forward_0_2_V_re in_data 0 16 } } }
	h_forward_0_3_V_re { ap_none {  { h_forward_0_3_V_re in_data 0 16 } } }
	h_forward_0_4_V_re { ap_none {  { h_forward_0_4_V_re in_data 0 16 } } }
	h_forward_0_5_V_re { ap_none {  { h_forward_0_5_V_re in_data 0 16 } } }
	h_forward_0_6_V_re { ap_none {  { h_forward_0_6_V_re in_data 0 16 } } }
	h_forward_1_0_V_re { ap_none {  { h_forward_1_0_V_re in_data 0 16 } } }
	h_forward_1_1_V_re { ap_none {  { h_forward_1_1_V_re in_data 0 16 } } }
	h_forward_1_2_V_re { ap_none {  { h_forward_1_2_V_re in_data 0 16 } } }
	h_forward_1_3_V_re { ap_none {  { h_forward_1_3_V_re in_data 0 16 } } }
	h_forward_1_4_V_re { ap_none {  { h_forward_1_4_V_re in_data 0 16 } } }
	h_forward_1_5_V_re { ap_none {  { h_forward_1_5_V_re in_data 0 16 } } }
	h_forward_1_6_V_re { ap_none {  { h_forward_1_6_V_re in_data 0 16 } } }
	h_forward_2_0_V_re { ap_none {  { h_forward_2_0_V_re in_data 0 16 } } }
	h_forward_2_1_V_re { ap_none {  { h_forward_2_1_V_re in_data 0 16 } } }
	h_forward_2_2_V_re { ap_none {  { h_forward_2_2_V_re in_data 0 16 } } }
	h_forward_2_3_V_re { ap_none {  { h_forward_2_3_V_re in_data 0 16 } } }
	h_forward_2_4_V_re { ap_none {  { h_forward_2_4_V_re in_data 0 16 } } }
	h_forward_2_5_V_re { ap_none {  { h_forward_2_5_V_re in_data 0 16 } } }
	h_forward_3_0_V_re { ap_none {  { h_forward_3_0_V_re in_data 0 16 } } }
	h_forward_3_1_V_re { ap_none {  { h_forward_3_1_V_re in_data 0 16 } } }
	h_forward_3_2_V_re { ap_none {  { h_forward_3_2_V_re in_data 0 16 } } }
	h_forward_3_3_V_re { ap_none {  { h_forward_3_3_V_re in_data 0 16 } } }
	h_forward_3_4_V_re { ap_none {  { h_forward_3_4_V_re in_data 0 16 } } }
	h_forward_3_5_V_re { ap_none {  { h_forward_3_5_V_re in_data 0 16 } } }
	h_forward_4_0_V_re { ap_none {  { h_forward_4_0_V_re in_data 0 16 } } }
	h_forward_4_1_V_re { ap_none {  { h_forward_4_1_V_re in_data 0 16 } } }
	h_forward_4_2_V_re { ap_none {  { h_forward_4_2_V_re in_data 0 16 } } }
	h_forward_4_3_V_re { ap_none {  { h_forward_4_3_V_re in_data 0 16 } } }
	h_forward_4_4_V_re { ap_none {  { h_forward_4_4_V_re in_data 0 16 } } }
	h_forward_4_5_V_re { ap_none {  { h_forward_4_5_V_re in_data 0 16 } } }
	h_forward_5_0_V_re { ap_none {  { h_forward_5_0_V_re in_data 0 16 } } }
	h_forward_5_1_V_re { ap_none {  { h_forward_5_1_V_re in_data 0 16 } } }
	h_forward_5_2_V_re { ap_none {  { h_forward_5_2_V_re in_data 0 16 } } }
	h_forward_5_3_V_re { ap_none {  { h_forward_5_3_V_re in_data 0 16 } } }
	h_forward_5_4_V_re { ap_none {  { h_forward_5_4_V_re in_data 0 16 } } }
	h_forward_5_5_V_re { ap_none {  { h_forward_5_5_V_re in_data 0 16 } } }
	h_forward_6_0_V_re { ap_none {  { h_forward_6_0_V_re in_data 0 16 } } }
	h_forward_6_1_V_re { ap_none {  { h_forward_6_1_V_re in_data 0 16 } } }
	h_forward_6_2_V_re { ap_none {  { h_forward_6_2_V_re in_data 0 16 } } }
	h_forward_6_3_V_re { ap_none {  { h_forward_6_3_V_re in_data 0 16 } } }
	h_forward_6_4_V_re { ap_none {  { h_forward_6_4_V_re in_data 0 16 } } }
	h_forward_6_5_V_re { ap_none {  { h_forward_6_5_V_re in_data 0 16 } } }
	h_forward_7_0_V_re { ap_none {  { h_forward_7_0_V_re in_data 0 16 } } }
	h_forward_7_1_V_re { ap_none {  { h_forward_7_1_V_re in_data 0 16 } } }
	h_forward_7_2_V_re { ap_none {  { h_forward_7_2_V_re in_data 0 16 } } }
	h_forward_7_3_V_re { ap_none {  { h_forward_7_3_V_re in_data 0 16 } } }
	h_forward_7_4_V_re { ap_none {  { h_forward_7_4_V_re in_data 0 16 } } }
	h_forward_7_5_V_re { ap_none {  { h_forward_7_5_V_re in_data 0 16 } } }
	h_backward_0_0_V_r { ap_none {  { h_backward_0_0_V_r in_data 0 16 } } }
	h_backward_0_1_V_r { ap_none {  { h_backward_0_1_V_r in_data 0 16 } } }
	h_backward_0_2_V_r { ap_none {  { h_backward_0_2_V_r in_data 0 16 } } }
	h_backward_0_3_V_r { ap_none {  { h_backward_0_3_V_r in_data 0 16 } } }
	h_backward_0_4_V_r { ap_none {  { h_backward_0_4_V_r in_data 0 16 } } }
	h_backward_0_5_V_r { ap_none {  { h_backward_0_5_V_r in_data 0 16 } } }
	h_backward_0_6_V_r { ap_none {  { h_backward_0_6_V_r in_data 0 16 } } }
	h_backward_1_0_V_r { ap_none {  { h_backward_1_0_V_r in_data 0 16 } } }
	h_backward_1_1_V_r { ap_none {  { h_backward_1_1_V_r in_data 0 16 } } }
	h_backward_1_2_V_r { ap_none {  { h_backward_1_2_V_r in_data 0 16 } } }
	h_backward_1_3_V_r { ap_none {  { h_backward_1_3_V_r in_data 0 16 } } }
	h_backward_1_4_V_r { ap_none {  { h_backward_1_4_V_r in_data 0 16 } } }
	h_backward_1_5_V_r { ap_none {  { h_backward_1_5_V_r in_data 0 16 } } }
	h_backward_1_6_V_r { ap_none {  { h_backward_1_6_V_r in_data 0 16 } } }
	h_backward_2_0_V_r { ap_none {  { h_backward_2_0_V_r in_data 0 16 } } }
	h_backward_2_1_V_r { ap_none {  { h_backward_2_1_V_r in_data 0 16 } } }
	h_backward_2_2_V_r { ap_none {  { h_backward_2_2_V_r in_data 0 16 } } }
	h_backward_2_3_V_r { ap_none {  { h_backward_2_3_V_r in_data 0 16 } } }
	h_backward_2_4_V_r { ap_none {  { h_backward_2_4_V_r in_data 0 16 } } }
	h_backward_2_5_V_r { ap_none {  { h_backward_2_5_V_r in_data 0 16 } } }
	h_backward_3_0_V_r { ap_none {  { h_backward_3_0_V_r in_data 0 16 } } }
	h_backward_3_1_V_r { ap_none {  { h_backward_3_1_V_r in_data 0 16 } } }
	h_backward_3_2_V_r { ap_none {  { h_backward_3_2_V_r in_data 0 16 } } }
	h_backward_3_3_V_r { ap_none {  { h_backward_3_3_V_r in_data 0 16 } } }
	h_backward_3_4_V_r { ap_none {  { h_backward_3_4_V_r in_data 0 16 } } }
	h_backward_3_5_V_r { ap_none {  { h_backward_3_5_V_r in_data 0 16 } } }
	h_backward_4_0_V_r { ap_none {  { h_backward_4_0_V_r in_data 0 16 } } }
	h_backward_4_1_V_r { ap_none {  { h_backward_4_1_V_r in_data 0 16 } } }
	h_backward_4_2_V_r { ap_none {  { h_backward_4_2_V_r in_data 0 16 } } }
	h_backward_4_3_V_r { ap_none {  { h_backward_4_3_V_r in_data 0 16 } } }
	h_backward_4_4_V_r { ap_none {  { h_backward_4_4_V_r in_data 0 16 } } }
	h_backward_4_5_V_r { ap_none {  { h_backward_4_5_V_r in_data 0 16 } } }
	h_backward_5_0_V_r { ap_none {  { h_backward_5_0_V_r in_data 0 16 } } }
	h_backward_5_1_V_r { ap_none {  { h_backward_5_1_V_r in_data 0 16 } } }
	h_backward_5_2_V_r { ap_none {  { h_backward_5_2_V_r in_data 0 16 } } }
	h_backward_5_3_V_r { ap_none {  { h_backward_5_3_V_r in_data 0 16 } } }
	h_backward_5_4_V_r { ap_none {  { h_backward_5_4_V_r in_data 0 16 } } }
	h_backward_5_5_V_r { ap_none {  { h_backward_5_5_V_r in_data 0 16 } } }
	h_backward_6_0_V_r { ap_none {  { h_backward_6_0_V_r in_data 0 16 } } }
	h_backward_6_1_V_r { ap_none {  { h_backward_6_1_V_r in_data 0 16 } } }
	h_backward_6_2_V_r { ap_none {  { h_backward_6_2_V_r in_data 0 16 } } }
	h_backward_6_3_V_r { ap_none {  { h_backward_6_3_V_r in_data 0 16 } } }
	h_backward_6_4_V_r { ap_none {  { h_backward_6_4_V_r in_data 0 16 } } }
	h_backward_6_5_V_r { ap_none {  { h_backward_6_5_V_r in_data 0 16 } } }
	h_backward_7_0_V_r { ap_none {  { h_backward_7_0_V_r in_data 0 16 } } }
	h_backward_7_1_V_r { ap_none {  { h_backward_7_1_V_r in_data 0 16 } } }
	h_backward_7_2_V_r { ap_none {  { h_backward_7_2_V_r in_data 0 16 } } }
	h_backward_7_3_V_r { ap_none {  { h_backward_7_3_V_r in_data 0 16 } } }
	h_backward_7_4_V_r { ap_none {  { h_backward_7_4_V_r in_data 0 16 } } }
	h_backward_7_5_V_r { ap_none {  { h_backward_7_5_V_r in_data 0 16 } } }
	h_out_0_V { ap_memory {  { h_out_0_V_address0 mem_address 1 4 }  { h_out_0_V_ce0 mem_ce 1 1 }  { h_out_0_V_we0 mem_we 1 1 }  { h_out_0_V_d0 mem_din 1 16 }  { h_out_0_V_address1 MemPortADDR2 1 4 }  { h_out_0_V_ce1 MemPortCE2 1 1 }  { h_out_0_V_we1 MemPortWE2 1 1 }  { h_out_0_V_d1 MemPortDIN2 1 16 } } }
	h_out_1_V { ap_memory {  { h_out_1_V_address0 mem_address 1 4 }  { h_out_1_V_ce0 mem_ce 1 1 }  { h_out_1_V_we0 mem_we 1 1 }  { h_out_1_V_d0 mem_din 1 16 }  { h_out_1_V_address1 MemPortADDR2 1 4 }  { h_out_1_V_ce1 MemPortCE2 1 1 }  { h_out_1_V_we1 MemPortWE2 1 1 }  { h_out_1_V_d1 MemPortDIN2 1 16 } } }
	h_out_2_V { ap_memory {  { h_out_2_V_address0 mem_address 1 4 }  { h_out_2_V_ce0 mem_ce 1 1 }  { h_out_2_V_we0 mem_we 1 1 }  { h_out_2_V_d0 mem_din 1 16 }  { h_out_2_V_address1 MemPortADDR2 1 4 }  { h_out_2_V_ce1 MemPortCE2 1 1 }  { h_out_2_V_we1 MemPortWE2 1 1 }  { h_out_2_V_d1 MemPortDIN2 1 16 } } }
	h_out_3_V { ap_memory {  { h_out_3_V_address0 mem_address 1 4 }  { h_out_3_V_ce0 mem_ce 1 1 }  { h_out_3_V_we0 mem_we 1 1 }  { h_out_3_V_d0 mem_din 1 16 }  { h_out_3_V_address1 MemPortADDR2 1 4 }  { h_out_3_V_ce1 MemPortCE2 1 1 }  { h_out_3_V_we1 MemPortWE2 1 1 }  { h_out_3_V_d1 MemPortDIN2 1 16 } } }
	h_out_4_V { ap_memory {  { h_out_4_V_address0 mem_address 1 4 }  { h_out_4_V_ce0 mem_ce 1 1 }  { h_out_4_V_we0 mem_we 1 1 }  { h_out_4_V_d0 mem_din 1 16 }  { h_out_4_V_address1 MemPortADDR2 1 4 }  { h_out_4_V_ce1 MemPortCE2 1 1 }  { h_out_4_V_we1 MemPortWE2 1 1 }  { h_out_4_V_d1 MemPortDIN2 1 16 } } }
	h_out_5_V { ap_memory {  { h_out_5_V_address0 mem_address 1 4 }  { h_out_5_V_ce0 mem_ce 1 1 }  { h_out_5_V_we0 mem_we 1 1 }  { h_out_5_V_d0 mem_din 1 16 }  { h_out_5_V_address1 MemPortADDR2 1 4 }  { h_out_5_V_ce1 MemPortCE2 1 1 }  { h_out_5_V_we1 MemPortWE2 1 1 }  { h_out_5_V_d1 MemPortDIN2 1 16 } } }
	h_out_6_V { ap_memory {  { h_out_6_V_address0 mem_address 1 4 }  { h_out_6_V_ce0 mem_ce 1 1 }  { h_out_6_V_we0 mem_we 1 1 }  { h_out_6_V_d0 mem_din 1 16 }  { h_out_6_V_address1 MemPortADDR2 1 4 }  { h_out_6_V_ce1 MemPortCE2 1 1 }  { h_out_6_V_we1 MemPortWE2 1 1 }  { h_out_6_V_d1 MemPortDIN2 1 16 } } }
	h_out_7_V { ap_memory {  { h_out_7_V_address0 mem_address 1 4 }  { h_out_7_V_ce0 mem_ce 1 1 }  { h_out_7_V_we0 mem_we 1 1 }  { h_out_7_V_d0 mem_din 1 16 }  { h_out_7_V_address1 MemPortADDR2 1 4 }  { h_out_7_V_ce1 MemPortCE2 1 1 }  { h_out_7_V_we1 MemPortWE2 1 1 }  { h_out_7_V_d1 MemPortDIN2 1 16 } } }
}
