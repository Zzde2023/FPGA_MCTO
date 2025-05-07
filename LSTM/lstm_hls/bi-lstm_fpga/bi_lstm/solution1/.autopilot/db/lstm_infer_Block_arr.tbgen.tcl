set moduleName lstm_infer_Block_arr
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
set C_modelName {lstm_infer_Block_arr}
set C_modelType { void 0 }
set C_modelArgList {
	{ fc1_out_0_V int 16 regular {array 5 { 2 2 } 1 1 }  }
	{ fc1_out_1_V int 16 regular {array 5 { 2 2 } 1 1 }  }
	{ fc1_out_2_V int 16 regular {array 5 { 2 2 } 1 1 }  }
	{ fc1_out_3_V int 16 regular {array 5 { 2 2 } 1 1 }  }
	{ fc1_out_4_V int 16 regular {array 5 { 2 2 } 1 1 }  }
	{ fc1_out_5_V int 16 regular {array 5 { 2 2 } 1 1 }  }
	{ fc1_out_6_V int 16 regular {array 5 { 2 2 } 1 1 }  }
	{ fc1_out_7_V int 16 regular {array 5 { 2 2 } 1 1 }  }
	{ fc1_out_8_V int 16 regular {array 5 { 2 2 } 1 1 }  }
	{ fc1_out_9_V int 16 regular {array 5 { 2 2 } 1 1 }  }
	{ h_t_cat_0 int 16 regular {array 13 { 1 3 } 1 1 }  }
	{ h_t_cat_1 int 16 regular {array 13 { 1 3 } 1 1 }  }
	{ h_t_cat_2 int 16 regular {array 13 { 1 3 } 1 1 }  }
	{ h_t_cat_3 int 16 regular {array 13 { 1 3 } 1 1 }  }
	{ h_t_cat_4 int 16 regular {array 12 { 1 3 } 1 1 }  }
	{ h_t_cat_5 int 16 regular {array 12 { 1 3 } 1 1 }  }
	{ h_t_cat_6 int 16 regular {array 12 { 1 3 } 1 1 }  }
	{ h_t_cat_7 int 16 regular {array 12 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "fc1_out_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fc1_out_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fc1_out_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fc1_out_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fc1_out_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fc1_out_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fc1_out_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fc1_out_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fc1_out_8_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fc1_out_9_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "h_t_cat_0", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_t_cat_1", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_t_cat_2", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_t_cat_3", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_t_cat_4", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_t_cat_5", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_t_cat_6", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "h_t_cat_7", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 131
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fc1_out_0_V_address0 sc_out sc_lv 3 signal 0 } 
	{ fc1_out_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ fc1_out_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ fc1_out_0_V_d0 sc_out sc_lv 16 signal 0 } 
	{ fc1_out_0_V_q0 sc_in sc_lv 16 signal 0 } 
	{ fc1_out_0_V_address1 sc_out sc_lv 3 signal 0 } 
	{ fc1_out_0_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ fc1_out_0_V_we1 sc_out sc_logic 1 signal 0 } 
	{ fc1_out_0_V_d1 sc_out sc_lv 16 signal 0 } 
	{ fc1_out_0_V_q1 sc_in sc_lv 16 signal 0 } 
	{ fc1_out_1_V_address0 sc_out sc_lv 3 signal 1 } 
	{ fc1_out_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ fc1_out_1_V_we0 sc_out sc_logic 1 signal 1 } 
	{ fc1_out_1_V_d0 sc_out sc_lv 16 signal 1 } 
	{ fc1_out_1_V_q0 sc_in sc_lv 16 signal 1 } 
	{ fc1_out_1_V_address1 sc_out sc_lv 3 signal 1 } 
	{ fc1_out_1_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ fc1_out_1_V_we1 sc_out sc_logic 1 signal 1 } 
	{ fc1_out_1_V_d1 sc_out sc_lv 16 signal 1 } 
	{ fc1_out_1_V_q1 sc_in sc_lv 16 signal 1 } 
	{ fc1_out_2_V_address0 sc_out sc_lv 3 signal 2 } 
	{ fc1_out_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ fc1_out_2_V_we0 sc_out sc_logic 1 signal 2 } 
	{ fc1_out_2_V_d0 sc_out sc_lv 16 signal 2 } 
	{ fc1_out_2_V_q0 sc_in sc_lv 16 signal 2 } 
	{ fc1_out_2_V_address1 sc_out sc_lv 3 signal 2 } 
	{ fc1_out_2_V_ce1 sc_out sc_logic 1 signal 2 } 
	{ fc1_out_2_V_we1 sc_out sc_logic 1 signal 2 } 
	{ fc1_out_2_V_d1 sc_out sc_lv 16 signal 2 } 
	{ fc1_out_2_V_q1 sc_in sc_lv 16 signal 2 } 
	{ fc1_out_3_V_address0 sc_out sc_lv 3 signal 3 } 
	{ fc1_out_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ fc1_out_3_V_we0 sc_out sc_logic 1 signal 3 } 
	{ fc1_out_3_V_d0 sc_out sc_lv 16 signal 3 } 
	{ fc1_out_3_V_q0 sc_in sc_lv 16 signal 3 } 
	{ fc1_out_3_V_address1 sc_out sc_lv 3 signal 3 } 
	{ fc1_out_3_V_ce1 sc_out sc_logic 1 signal 3 } 
	{ fc1_out_3_V_we1 sc_out sc_logic 1 signal 3 } 
	{ fc1_out_3_V_d1 sc_out sc_lv 16 signal 3 } 
	{ fc1_out_3_V_q1 sc_in sc_lv 16 signal 3 } 
	{ fc1_out_4_V_address0 sc_out sc_lv 3 signal 4 } 
	{ fc1_out_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ fc1_out_4_V_we0 sc_out sc_logic 1 signal 4 } 
	{ fc1_out_4_V_d0 sc_out sc_lv 16 signal 4 } 
	{ fc1_out_4_V_q0 sc_in sc_lv 16 signal 4 } 
	{ fc1_out_4_V_address1 sc_out sc_lv 3 signal 4 } 
	{ fc1_out_4_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ fc1_out_4_V_we1 sc_out sc_logic 1 signal 4 } 
	{ fc1_out_4_V_d1 sc_out sc_lv 16 signal 4 } 
	{ fc1_out_4_V_q1 sc_in sc_lv 16 signal 4 } 
	{ fc1_out_5_V_address0 sc_out sc_lv 3 signal 5 } 
	{ fc1_out_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ fc1_out_5_V_we0 sc_out sc_logic 1 signal 5 } 
	{ fc1_out_5_V_d0 sc_out sc_lv 16 signal 5 } 
	{ fc1_out_5_V_q0 sc_in sc_lv 16 signal 5 } 
	{ fc1_out_5_V_address1 sc_out sc_lv 3 signal 5 } 
	{ fc1_out_5_V_ce1 sc_out sc_logic 1 signal 5 } 
	{ fc1_out_5_V_we1 sc_out sc_logic 1 signal 5 } 
	{ fc1_out_5_V_d1 sc_out sc_lv 16 signal 5 } 
	{ fc1_out_5_V_q1 sc_in sc_lv 16 signal 5 } 
	{ fc1_out_6_V_address0 sc_out sc_lv 3 signal 6 } 
	{ fc1_out_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ fc1_out_6_V_we0 sc_out sc_logic 1 signal 6 } 
	{ fc1_out_6_V_d0 sc_out sc_lv 16 signal 6 } 
	{ fc1_out_6_V_q0 sc_in sc_lv 16 signal 6 } 
	{ fc1_out_6_V_address1 sc_out sc_lv 3 signal 6 } 
	{ fc1_out_6_V_ce1 sc_out sc_logic 1 signal 6 } 
	{ fc1_out_6_V_we1 sc_out sc_logic 1 signal 6 } 
	{ fc1_out_6_V_d1 sc_out sc_lv 16 signal 6 } 
	{ fc1_out_6_V_q1 sc_in sc_lv 16 signal 6 } 
	{ fc1_out_7_V_address0 sc_out sc_lv 3 signal 7 } 
	{ fc1_out_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ fc1_out_7_V_we0 sc_out sc_logic 1 signal 7 } 
	{ fc1_out_7_V_d0 sc_out sc_lv 16 signal 7 } 
	{ fc1_out_7_V_q0 sc_in sc_lv 16 signal 7 } 
	{ fc1_out_7_V_address1 sc_out sc_lv 3 signal 7 } 
	{ fc1_out_7_V_ce1 sc_out sc_logic 1 signal 7 } 
	{ fc1_out_7_V_we1 sc_out sc_logic 1 signal 7 } 
	{ fc1_out_7_V_d1 sc_out sc_lv 16 signal 7 } 
	{ fc1_out_7_V_q1 sc_in sc_lv 16 signal 7 } 
	{ fc1_out_8_V_address0 sc_out sc_lv 3 signal 8 } 
	{ fc1_out_8_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ fc1_out_8_V_we0 sc_out sc_logic 1 signal 8 } 
	{ fc1_out_8_V_d0 sc_out sc_lv 16 signal 8 } 
	{ fc1_out_8_V_q0 sc_in sc_lv 16 signal 8 } 
	{ fc1_out_8_V_address1 sc_out sc_lv 3 signal 8 } 
	{ fc1_out_8_V_ce1 sc_out sc_logic 1 signal 8 } 
	{ fc1_out_8_V_we1 sc_out sc_logic 1 signal 8 } 
	{ fc1_out_8_V_d1 sc_out sc_lv 16 signal 8 } 
	{ fc1_out_8_V_q1 sc_in sc_lv 16 signal 8 } 
	{ fc1_out_9_V_address0 sc_out sc_lv 3 signal 9 } 
	{ fc1_out_9_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ fc1_out_9_V_we0 sc_out sc_logic 1 signal 9 } 
	{ fc1_out_9_V_d0 sc_out sc_lv 16 signal 9 } 
	{ fc1_out_9_V_q0 sc_in sc_lv 16 signal 9 } 
	{ fc1_out_9_V_address1 sc_out sc_lv 3 signal 9 } 
	{ fc1_out_9_V_ce1 sc_out sc_logic 1 signal 9 } 
	{ fc1_out_9_V_we1 sc_out sc_logic 1 signal 9 } 
	{ fc1_out_9_V_d1 sc_out sc_lv 16 signal 9 } 
	{ fc1_out_9_V_q1 sc_in sc_lv 16 signal 9 } 
	{ h_t_cat_0_address0 sc_out sc_lv 4 signal 10 } 
	{ h_t_cat_0_ce0 sc_out sc_logic 1 signal 10 } 
	{ h_t_cat_0_q0 sc_in sc_lv 16 signal 10 } 
	{ h_t_cat_1_address0 sc_out sc_lv 4 signal 11 } 
	{ h_t_cat_1_ce0 sc_out sc_logic 1 signal 11 } 
	{ h_t_cat_1_q0 sc_in sc_lv 16 signal 11 } 
	{ h_t_cat_2_address0 sc_out sc_lv 4 signal 12 } 
	{ h_t_cat_2_ce0 sc_out sc_logic 1 signal 12 } 
	{ h_t_cat_2_q0 sc_in sc_lv 16 signal 12 } 
	{ h_t_cat_3_address0 sc_out sc_lv 4 signal 13 } 
	{ h_t_cat_3_ce0 sc_out sc_logic 1 signal 13 } 
	{ h_t_cat_3_q0 sc_in sc_lv 16 signal 13 } 
	{ h_t_cat_4_address0 sc_out sc_lv 4 signal 14 } 
	{ h_t_cat_4_ce0 sc_out sc_logic 1 signal 14 } 
	{ h_t_cat_4_q0 sc_in sc_lv 16 signal 14 } 
	{ h_t_cat_5_address0 sc_out sc_lv 4 signal 15 } 
	{ h_t_cat_5_ce0 sc_out sc_logic 1 signal 15 } 
	{ h_t_cat_5_q0 sc_in sc_lv 16 signal 15 } 
	{ h_t_cat_6_address0 sc_out sc_lv 4 signal 16 } 
	{ h_t_cat_6_ce0 sc_out sc_logic 1 signal 16 } 
	{ h_t_cat_6_q0 sc_in sc_lv 16 signal 16 } 
	{ h_t_cat_7_address0 sc_out sc_lv 4 signal 17 } 
	{ h_t_cat_7_ce0 sc_out sc_logic 1 signal 17 } 
	{ h_t_cat_7_q0 sc_in sc_lv 16 signal 17 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fc1_out_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_0_V", "role": "address0" }} , 
 	{ "name": "fc1_out_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_0_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_0_V", "role": "we0" }} , 
 	{ "name": "fc1_out_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_0_V", "role": "d0" }} , 
 	{ "name": "fc1_out_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_0_V", "role": "q0" }} , 
 	{ "name": "fc1_out_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_0_V", "role": "address1" }} , 
 	{ "name": "fc1_out_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_0_V", "role": "ce1" }} , 
 	{ "name": "fc1_out_0_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_0_V", "role": "we1" }} , 
 	{ "name": "fc1_out_0_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_0_V", "role": "d1" }} , 
 	{ "name": "fc1_out_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_0_V", "role": "q1" }} , 
 	{ "name": "fc1_out_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "address0" }} , 
 	{ "name": "fc1_out_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "we0" }} , 
 	{ "name": "fc1_out_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "d0" }} , 
 	{ "name": "fc1_out_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "q0" }} , 
 	{ "name": "fc1_out_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "address1" }} , 
 	{ "name": "fc1_out_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "ce1" }} , 
 	{ "name": "fc1_out_1_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "we1" }} , 
 	{ "name": "fc1_out_1_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "d1" }} , 
 	{ "name": "fc1_out_1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "q1" }} , 
 	{ "name": "fc1_out_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "address0" }} , 
 	{ "name": "fc1_out_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "we0" }} , 
 	{ "name": "fc1_out_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "d0" }} , 
 	{ "name": "fc1_out_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "q0" }} , 
 	{ "name": "fc1_out_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "address1" }} , 
 	{ "name": "fc1_out_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "ce1" }} , 
 	{ "name": "fc1_out_2_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "we1" }} , 
 	{ "name": "fc1_out_2_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "d1" }} , 
 	{ "name": "fc1_out_2_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "q1" }} , 
 	{ "name": "fc1_out_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "address0" }} , 
 	{ "name": "fc1_out_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "we0" }} , 
 	{ "name": "fc1_out_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "d0" }} , 
 	{ "name": "fc1_out_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "q0" }} , 
 	{ "name": "fc1_out_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "address1" }} , 
 	{ "name": "fc1_out_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "ce1" }} , 
 	{ "name": "fc1_out_3_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "we1" }} , 
 	{ "name": "fc1_out_3_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "d1" }} , 
 	{ "name": "fc1_out_3_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "q1" }} , 
 	{ "name": "fc1_out_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "address0" }} , 
 	{ "name": "fc1_out_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "we0" }} , 
 	{ "name": "fc1_out_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "d0" }} , 
 	{ "name": "fc1_out_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "q0" }} , 
 	{ "name": "fc1_out_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "address1" }} , 
 	{ "name": "fc1_out_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "ce1" }} , 
 	{ "name": "fc1_out_4_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "we1" }} , 
 	{ "name": "fc1_out_4_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "d1" }} , 
 	{ "name": "fc1_out_4_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "q1" }} , 
 	{ "name": "fc1_out_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "address0" }} , 
 	{ "name": "fc1_out_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "we0" }} , 
 	{ "name": "fc1_out_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "d0" }} , 
 	{ "name": "fc1_out_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "q0" }} , 
 	{ "name": "fc1_out_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "address1" }} , 
 	{ "name": "fc1_out_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "ce1" }} , 
 	{ "name": "fc1_out_5_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "we1" }} , 
 	{ "name": "fc1_out_5_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "d1" }} , 
 	{ "name": "fc1_out_5_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "q1" }} , 
 	{ "name": "fc1_out_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "address0" }} , 
 	{ "name": "fc1_out_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "we0" }} , 
 	{ "name": "fc1_out_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "d0" }} , 
 	{ "name": "fc1_out_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "q0" }} , 
 	{ "name": "fc1_out_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "address1" }} , 
 	{ "name": "fc1_out_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "ce1" }} , 
 	{ "name": "fc1_out_6_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "we1" }} , 
 	{ "name": "fc1_out_6_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "d1" }} , 
 	{ "name": "fc1_out_6_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "q1" }} , 
 	{ "name": "fc1_out_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "address0" }} , 
 	{ "name": "fc1_out_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "we0" }} , 
 	{ "name": "fc1_out_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "d0" }} , 
 	{ "name": "fc1_out_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "q0" }} , 
 	{ "name": "fc1_out_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "address1" }} , 
 	{ "name": "fc1_out_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "ce1" }} , 
 	{ "name": "fc1_out_7_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "we1" }} , 
 	{ "name": "fc1_out_7_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "d1" }} , 
 	{ "name": "fc1_out_7_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "q1" }} , 
 	{ "name": "fc1_out_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "address0" }} , 
 	{ "name": "fc1_out_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_8_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "we0" }} , 
 	{ "name": "fc1_out_8_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "d0" }} , 
 	{ "name": "fc1_out_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "q0" }} , 
 	{ "name": "fc1_out_8_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "address1" }} , 
 	{ "name": "fc1_out_8_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "ce1" }} , 
 	{ "name": "fc1_out_8_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "we1" }} , 
 	{ "name": "fc1_out_8_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "d1" }} , 
 	{ "name": "fc1_out_8_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "q1" }} , 
 	{ "name": "fc1_out_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "address0" }} , 
 	{ "name": "fc1_out_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_9_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "we0" }} , 
 	{ "name": "fc1_out_9_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "d0" }} , 
 	{ "name": "fc1_out_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "q0" }} , 
 	{ "name": "fc1_out_9_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "address1" }} , 
 	{ "name": "fc1_out_9_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "ce1" }} , 
 	{ "name": "fc1_out_9_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "we1" }} , 
 	{ "name": "fc1_out_9_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "d1" }} , 
 	{ "name": "fc1_out_9_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "q1" }} , 
 	{ "name": "h_t_cat_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_t_cat_0", "role": "address0" }} , 
 	{ "name": "h_t_cat_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_t_cat_0", "role": "ce0" }} , 
 	{ "name": "h_t_cat_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_t_cat_0", "role": "q0" }} , 
 	{ "name": "h_t_cat_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_t_cat_1", "role": "address0" }} , 
 	{ "name": "h_t_cat_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_t_cat_1", "role": "ce0" }} , 
 	{ "name": "h_t_cat_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_t_cat_1", "role": "q0" }} , 
 	{ "name": "h_t_cat_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_t_cat_2", "role": "address0" }} , 
 	{ "name": "h_t_cat_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_t_cat_2", "role": "ce0" }} , 
 	{ "name": "h_t_cat_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_t_cat_2", "role": "q0" }} , 
 	{ "name": "h_t_cat_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_t_cat_3", "role": "address0" }} , 
 	{ "name": "h_t_cat_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_t_cat_3", "role": "ce0" }} , 
 	{ "name": "h_t_cat_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_t_cat_3", "role": "q0" }} , 
 	{ "name": "h_t_cat_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_t_cat_4", "role": "address0" }} , 
 	{ "name": "h_t_cat_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_t_cat_4", "role": "ce0" }} , 
 	{ "name": "h_t_cat_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_t_cat_4", "role": "q0" }} , 
 	{ "name": "h_t_cat_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_t_cat_5", "role": "address0" }} , 
 	{ "name": "h_t_cat_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_t_cat_5", "role": "ce0" }} , 
 	{ "name": "h_t_cat_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_t_cat_5", "role": "q0" }} , 
 	{ "name": "h_t_cat_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_t_cat_6", "role": "address0" }} , 
 	{ "name": "h_t_cat_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_t_cat_6", "role": "ce0" }} , 
 	{ "name": "h_t_cat_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_t_cat_6", "role": "q0" }} , 
 	{ "name": "h_t_cat_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "h_t_cat_7", "role": "address0" }} , 
 	{ "name": "h_t_cat_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_t_cat_7", "role": "ce0" }} , 
 	{ "name": "h_t_cat_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "h_t_cat_7", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58"],
		"CDFG" : "lstm_infer_Block_arr",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "705", "EstimateLatencyMax" : "705",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "fc1_out_0_V", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_1_V", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_2_V", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_3_V", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_4_V", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_5_V", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_6_V", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_7_V", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_8_V", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_9_V", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "h_t_cat_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "h_t_cat_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "h_t_cat_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "h_t_cat_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "h_t_cat_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "h_t_cat_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "h_t_cat_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "h_t_cat_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc1_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc1_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc1_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc1_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc1_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc1_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc1_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc1_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc1_V_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc1_V_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc1_V_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc1_V_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc1_V_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc1_V_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc1_V_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc1_V_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U797", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U798", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U799", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U800", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U801", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U802", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U803", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U804", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U805", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U806", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U807", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U808", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U809", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U810", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U811", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U812", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U813", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U814", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U815", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U816", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U817", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U818", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U819", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U820", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U821", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U822", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U823", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U824", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U825", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U826", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U827", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U828", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U829", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U830", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U831", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U832", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U833", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U834", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U835", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U836", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U837", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U838", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U839", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U840", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U841", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U842", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U843", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U844", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U845", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mu9j0_U846", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	lstm_infer_Block_arr {
		fc1_out_0_V {Type IO LastRead 6 FirstWrite 0}
		fc1_out_1_V {Type IO LastRead 6 FirstWrite 0}
		fc1_out_2_V {Type IO LastRead 7 FirstWrite 0}
		fc1_out_3_V {Type IO LastRead 6 FirstWrite 0}
		fc1_out_4_V {Type IO LastRead 6 FirstWrite 0}
		fc1_out_5_V {Type IO LastRead 7 FirstWrite 0}
		fc1_out_6_V {Type IO LastRead 6 FirstWrite 0}
		fc1_out_7_V {Type IO LastRead 7 FirstWrite 0}
		fc1_out_8_V {Type IO LastRead 7 FirstWrite 0}
		fc1_out_9_V {Type IO LastRead 7 FirstWrite 0}
		h_t_cat_0 {Type I LastRead 3 FirstWrite -1}
		h_t_cat_1 {Type I LastRead 3 FirstWrite -1}
		h_t_cat_2 {Type I LastRead 3 FirstWrite -1}
		h_t_cat_3 {Type I LastRead 3 FirstWrite -1}
		h_t_cat_4 {Type I LastRead 3 FirstWrite -1}
		h_t_cat_5 {Type I LastRead 3 FirstWrite -1}
		h_t_cat_6 {Type I LastRead 3 FirstWrite -1}
		h_t_cat_7 {Type I LastRead 3 FirstWrite -1}
		Weight_fc1_V_0 {Type I LastRead -1 FirstWrite -1}
		Weight_fc1_V_1 {Type I LastRead -1 FirstWrite -1}
		Weight_fc1_V_2 {Type I LastRead -1 FirstWrite -1}
		Weight_fc1_V_3 {Type I LastRead -1 FirstWrite -1}
		Weight_fc1_V_4 {Type I LastRead -1 FirstWrite -1}
		Weight_fc1_V_5 {Type I LastRead -1 FirstWrite -1}
		Weight_fc1_V_6 {Type I LastRead -1 FirstWrite -1}
		Weight_fc1_V_7 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "705", "Max" : "705"}
	, {"Name" : "Interval", "Min" : "705", "Max" : "705"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	fc1_out_0_V { ap_memory {  { fc1_out_0_V_address0 mem_address 1 3 }  { fc1_out_0_V_ce0 mem_ce 1 1 }  { fc1_out_0_V_we0 mem_we 1 1 }  { fc1_out_0_V_d0 mem_din 1 16 }  { fc1_out_0_V_q0 mem_dout 0 16 }  { fc1_out_0_V_address1 MemPortADDR2 1 3 }  { fc1_out_0_V_ce1 MemPortCE2 1 1 }  { fc1_out_0_V_we1 MemPortWE2 1 1 }  { fc1_out_0_V_d1 MemPortDIN2 1 16 }  { fc1_out_0_V_q1 MemPortDOUT2 0 16 } } }
	fc1_out_1_V { ap_memory {  { fc1_out_1_V_address0 mem_address 1 3 }  { fc1_out_1_V_ce0 mem_ce 1 1 }  { fc1_out_1_V_we0 mem_we 1 1 }  { fc1_out_1_V_d0 mem_din 1 16 }  { fc1_out_1_V_q0 mem_dout 0 16 }  { fc1_out_1_V_address1 MemPortADDR2 1 3 }  { fc1_out_1_V_ce1 MemPortCE2 1 1 }  { fc1_out_1_V_we1 MemPortWE2 1 1 }  { fc1_out_1_V_d1 MemPortDIN2 1 16 }  { fc1_out_1_V_q1 MemPortDOUT2 0 16 } } }
	fc1_out_2_V { ap_memory {  { fc1_out_2_V_address0 mem_address 1 3 }  { fc1_out_2_V_ce0 mem_ce 1 1 }  { fc1_out_2_V_we0 mem_we 1 1 }  { fc1_out_2_V_d0 mem_din 1 16 }  { fc1_out_2_V_q0 mem_dout 0 16 }  { fc1_out_2_V_address1 MemPortADDR2 1 3 }  { fc1_out_2_V_ce1 MemPortCE2 1 1 }  { fc1_out_2_V_we1 MemPortWE2 1 1 }  { fc1_out_2_V_d1 MemPortDIN2 1 16 }  { fc1_out_2_V_q1 MemPortDOUT2 0 16 } } }
	fc1_out_3_V { ap_memory {  { fc1_out_3_V_address0 mem_address 1 3 }  { fc1_out_3_V_ce0 mem_ce 1 1 }  { fc1_out_3_V_we0 mem_we 1 1 }  { fc1_out_3_V_d0 mem_din 1 16 }  { fc1_out_3_V_q0 mem_dout 0 16 }  { fc1_out_3_V_address1 MemPortADDR2 1 3 }  { fc1_out_3_V_ce1 MemPortCE2 1 1 }  { fc1_out_3_V_we1 MemPortWE2 1 1 }  { fc1_out_3_V_d1 MemPortDIN2 1 16 }  { fc1_out_3_V_q1 MemPortDOUT2 0 16 } } }
	fc1_out_4_V { ap_memory {  { fc1_out_4_V_address0 mem_address 1 3 }  { fc1_out_4_V_ce0 mem_ce 1 1 }  { fc1_out_4_V_we0 mem_we 1 1 }  { fc1_out_4_V_d0 mem_din 1 16 }  { fc1_out_4_V_q0 mem_dout 0 16 }  { fc1_out_4_V_address1 MemPortADDR2 1 3 }  { fc1_out_4_V_ce1 MemPortCE2 1 1 }  { fc1_out_4_V_we1 MemPortWE2 1 1 }  { fc1_out_4_V_d1 MemPortDIN2 1 16 }  { fc1_out_4_V_q1 MemPortDOUT2 0 16 } } }
	fc1_out_5_V { ap_memory {  { fc1_out_5_V_address0 mem_address 1 3 }  { fc1_out_5_V_ce0 mem_ce 1 1 }  { fc1_out_5_V_we0 mem_we 1 1 }  { fc1_out_5_V_d0 mem_din 1 16 }  { fc1_out_5_V_q0 mem_dout 0 16 }  { fc1_out_5_V_address1 MemPortADDR2 1 3 }  { fc1_out_5_V_ce1 MemPortCE2 1 1 }  { fc1_out_5_V_we1 MemPortWE2 1 1 }  { fc1_out_5_V_d1 MemPortDIN2 1 16 }  { fc1_out_5_V_q1 MemPortDOUT2 0 16 } } }
	fc1_out_6_V { ap_memory {  { fc1_out_6_V_address0 mem_address 1 3 }  { fc1_out_6_V_ce0 mem_ce 1 1 }  { fc1_out_6_V_we0 mem_we 1 1 }  { fc1_out_6_V_d0 mem_din 1 16 }  { fc1_out_6_V_q0 mem_dout 0 16 }  { fc1_out_6_V_address1 MemPortADDR2 1 3 }  { fc1_out_6_V_ce1 MemPortCE2 1 1 }  { fc1_out_6_V_we1 MemPortWE2 1 1 }  { fc1_out_6_V_d1 MemPortDIN2 1 16 }  { fc1_out_6_V_q1 MemPortDOUT2 0 16 } } }
	fc1_out_7_V { ap_memory {  { fc1_out_7_V_address0 mem_address 1 3 }  { fc1_out_7_V_ce0 mem_ce 1 1 }  { fc1_out_7_V_we0 mem_we 1 1 }  { fc1_out_7_V_d0 mem_din 1 16 }  { fc1_out_7_V_q0 mem_dout 0 16 }  { fc1_out_7_V_address1 MemPortADDR2 1 3 }  { fc1_out_7_V_ce1 MemPortCE2 1 1 }  { fc1_out_7_V_we1 MemPortWE2 1 1 }  { fc1_out_7_V_d1 MemPortDIN2 1 16 }  { fc1_out_7_V_q1 MemPortDOUT2 0 16 } } }
	fc1_out_8_V { ap_memory {  { fc1_out_8_V_address0 mem_address 1 3 }  { fc1_out_8_V_ce0 mem_ce 1 1 }  { fc1_out_8_V_we0 mem_we 1 1 }  { fc1_out_8_V_d0 mem_din 1 16 }  { fc1_out_8_V_q0 mem_dout 0 16 }  { fc1_out_8_V_address1 MemPortADDR2 1 3 }  { fc1_out_8_V_ce1 MemPortCE2 1 1 }  { fc1_out_8_V_we1 MemPortWE2 1 1 }  { fc1_out_8_V_d1 MemPortDIN2 1 16 }  { fc1_out_8_V_q1 MemPortDOUT2 0 16 } } }
	fc1_out_9_V { ap_memory {  { fc1_out_9_V_address0 mem_address 1 3 }  { fc1_out_9_V_ce0 mem_ce 1 1 }  { fc1_out_9_V_we0 mem_we 1 1 }  { fc1_out_9_V_d0 mem_din 1 16 }  { fc1_out_9_V_q0 mem_dout 0 16 }  { fc1_out_9_V_address1 MemPortADDR2 1 3 }  { fc1_out_9_V_ce1 MemPortCE2 1 1 }  { fc1_out_9_V_we1 MemPortWE2 1 1 }  { fc1_out_9_V_d1 MemPortDIN2 1 16 }  { fc1_out_9_V_q1 MemPortDOUT2 0 16 } } }
	h_t_cat_0 { ap_memory {  { h_t_cat_0_address0 mem_address 1 4 }  { h_t_cat_0_ce0 mem_ce 1 1 }  { h_t_cat_0_q0 mem_dout 0 16 } } }
	h_t_cat_1 { ap_memory {  { h_t_cat_1_address0 mem_address 1 4 }  { h_t_cat_1_ce0 mem_ce 1 1 }  { h_t_cat_1_q0 mem_dout 0 16 } } }
	h_t_cat_2 { ap_memory {  { h_t_cat_2_address0 mem_address 1 4 }  { h_t_cat_2_ce0 mem_ce 1 1 }  { h_t_cat_2_q0 mem_dout 0 16 } } }
	h_t_cat_3 { ap_memory {  { h_t_cat_3_address0 mem_address 1 4 }  { h_t_cat_3_ce0 mem_ce 1 1 }  { h_t_cat_3_q0 mem_dout 0 16 } } }
	h_t_cat_4 { ap_memory {  { h_t_cat_4_address0 mem_address 1 4 }  { h_t_cat_4_ce0 mem_ce 1 1 }  { h_t_cat_4_q0 mem_dout 0 16 } } }
	h_t_cat_5 { ap_memory {  { h_t_cat_5_address0 mem_address 1 4 }  { h_t_cat_5_ce0 mem_ce 1 1 }  { h_t_cat_5_q0 mem_dout 0 16 } } }
	h_t_cat_6 { ap_memory {  { h_t_cat_6_address0 mem_address 1 4 }  { h_t_cat_6_ce0 mem_ce 1 1 }  { h_t_cat_6_q0 mem_dout 0 16 } } }
	h_t_cat_7 { ap_memory {  { h_t_cat_7_address0 mem_address 1 4 }  { h_t_cat_7_ce0 mem_ce 1 1 }  { h_t_cat_7_q0 mem_dout 0 16 } } }
}
