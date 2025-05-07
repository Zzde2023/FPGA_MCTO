set moduleName sigmoid
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
set C_modelName {sigmoid}
set C_modelType { void 0 }
set C_modelArgList {
	{ res_0_V int 16 regular {array 16 { 2 2 } 1 1 }  }
	{ res_1_V int 16 regular {array 16 { 2 3 } 1 1 }  }
	{ res_2_V int 16 regular {array 16 { 2 3 } 1 1 }  }
	{ res_3_V int 16 regular {array 16 { 2 3 } 1 1 }  }
	{ res_4_V int 16 regular {array 16 { 2 3 } 1 1 }  }
	{ res_5_V int 16 regular {array 16 { 2 3 } 1 1 }  }
	{ res_6_V int 16 regular {array 16 { 2 3 } 1 1 }  }
	{ res_7_V int 16 regular {array 16 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "res_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "res_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "res_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "res_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "res_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "res_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "res_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "res_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 51
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ res_0_V_address0 sc_out sc_lv 4 signal 0 } 
	{ res_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ res_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ res_0_V_d0 sc_out sc_lv 16 signal 0 } 
	{ res_0_V_q0 sc_in sc_lv 16 signal 0 } 
	{ res_0_V_address1 sc_out sc_lv 4 signal 0 } 
	{ res_0_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ res_0_V_we1 sc_out sc_logic 1 signal 0 } 
	{ res_0_V_d1 sc_out sc_lv 16 signal 0 } 
	{ res_0_V_q1 sc_in sc_lv 16 signal 0 } 
	{ res_1_V_address0 sc_out sc_lv 4 signal 1 } 
	{ res_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ res_1_V_we0 sc_out sc_logic 1 signal 1 } 
	{ res_1_V_d0 sc_out sc_lv 16 signal 1 } 
	{ res_1_V_q0 sc_in sc_lv 16 signal 1 } 
	{ res_2_V_address0 sc_out sc_lv 4 signal 2 } 
	{ res_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ res_2_V_we0 sc_out sc_logic 1 signal 2 } 
	{ res_2_V_d0 sc_out sc_lv 16 signal 2 } 
	{ res_2_V_q0 sc_in sc_lv 16 signal 2 } 
	{ res_3_V_address0 sc_out sc_lv 4 signal 3 } 
	{ res_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ res_3_V_we0 sc_out sc_logic 1 signal 3 } 
	{ res_3_V_d0 sc_out sc_lv 16 signal 3 } 
	{ res_3_V_q0 sc_in sc_lv 16 signal 3 } 
	{ res_4_V_address0 sc_out sc_lv 4 signal 4 } 
	{ res_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ res_4_V_we0 sc_out sc_logic 1 signal 4 } 
	{ res_4_V_d0 sc_out sc_lv 16 signal 4 } 
	{ res_4_V_q0 sc_in sc_lv 16 signal 4 } 
	{ res_5_V_address0 sc_out sc_lv 4 signal 5 } 
	{ res_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ res_5_V_we0 sc_out sc_logic 1 signal 5 } 
	{ res_5_V_d0 sc_out sc_lv 16 signal 5 } 
	{ res_5_V_q0 sc_in sc_lv 16 signal 5 } 
	{ res_6_V_address0 sc_out sc_lv 4 signal 6 } 
	{ res_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ res_6_V_we0 sc_out sc_logic 1 signal 6 } 
	{ res_6_V_d0 sc_out sc_lv 16 signal 6 } 
	{ res_6_V_q0 sc_in sc_lv 16 signal 6 } 
	{ res_7_V_address0 sc_out sc_lv 4 signal 7 } 
	{ res_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ res_7_V_we0 sc_out sc_logic 1 signal 7 } 
	{ res_7_V_d0 sc_out sc_lv 16 signal 7 } 
	{ res_7_V_q0 sc_in sc_lv 16 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "res_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "res_0_V", "role": "address0" }} , 
 	{ "name": "res_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_0_V", "role": "ce0" }} , 
 	{ "name": "res_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_0_V", "role": "we0" }} , 
 	{ "name": "res_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_0_V", "role": "d0" }} , 
 	{ "name": "res_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_0_V", "role": "q0" }} , 
 	{ "name": "res_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "res_0_V", "role": "address1" }} , 
 	{ "name": "res_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_0_V", "role": "ce1" }} , 
 	{ "name": "res_0_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_0_V", "role": "we1" }} , 
 	{ "name": "res_0_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_0_V", "role": "d1" }} , 
 	{ "name": "res_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_0_V", "role": "q1" }} , 
 	{ "name": "res_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "res_1_V", "role": "address0" }} , 
 	{ "name": "res_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_1_V", "role": "ce0" }} , 
 	{ "name": "res_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_1_V", "role": "we0" }} , 
 	{ "name": "res_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_1_V", "role": "d0" }} , 
 	{ "name": "res_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_1_V", "role": "q0" }} , 
 	{ "name": "res_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "res_2_V", "role": "address0" }} , 
 	{ "name": "res_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_2_V", "role": "ce0" }} , 
 	{ "name": "res_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_2_V", "role": "we0" }} , 
 	{ "name": "res_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_2_V", "role": "d0" }} , 
 	{ "name": "res_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_2_V", "role": "q0" }} , 
 	{ "name": "res_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "res_3_V", "role": "address0" }} , 
 	{ "name": "res_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_3_V", "role": "ce0" }} , 
 	{ "name": "res_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_3_V", "role": "we0" }} , 
 	{ "name": "res_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_3_V", "role": "d0" }} , 
 	{ "name": "res_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_3_V", "role": "q0" }} , 
 	{ "name": "res_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "res_4_V", "role": "address0" }} , 
 	{ "name": "res_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_4_V", "role": "ce0" }} , 
 	{ "name": "res_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_4_V", "role": "we0" }} , 
 	{ "name": "res_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_4_V", "role": "d0" }} , 
 	{ "name": "res_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_4_V", "role": "q0" }} , 
 	{ "name": "res_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "res_5_V", "role": "address0" }} , 
 	{ "name": "res_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_5_V", "role": "ce0" }} , 
 	{ "name": "res_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_5_V", "role": "we0" }} , 
 	{ "name": "res_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_5_V", "role": "d0" }} , 
 	{ "name": "res_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_5_V", "role": "q0" }} , 
 	{ "name": "res_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "res_6_V", "role": "address0" }} , 
 	{ "name": "res_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_6_V", "role": "ce0" }} , 
 	{ "name": "res_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_6_V", "role": "we0" }} , 
 	{ "name": "res_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_6_V", "role": "d0" }} , 
 	{ "name": "res_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_6_V", "role": "q0" }} , 
 	{ "name": "res_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "res_7_V", "role": "address0" }} , 
 	{ "name": "res_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_7_V", "role": "ce0" }} , 
 	{ "name": "res_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_7_V", "role": "we0" }} , 
 	{ "name": "res_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_7_V", "role": "d0" }} , 
 	{ "name": "res_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_7_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "sigmoid",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "141", "EstimateLatencyMax" : "141",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "res_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "res_1_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "res_2_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "res_3_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "res_4_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "res_5_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "res_6_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "res_7_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "Sigmoid_lut_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Sigmoid_lut_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	sigmoid {
		res_0_V {Type IO LastRead 15 FirstWrite 9}
		res_1_V {Type IO LastRead 15 FirstWrite 9}
		res_2_V {Type IO LastRead 15 FirstWrite 9}
		res_3_V {Type IO LastRead 15 FirstWrite 9}
		res_4_V {Type IO LastRead 15 FirstWrite 9}
		res_5_V {Type IO LastRead 16 FirstWrite 9}
		res_6_V {Type IO LastRead 17 FirstWrite 10}
		res_7_V {Type IO LastRead 18 FirstWrite 11}
		Sigmoid_lut_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "141", "Max" : "141"}
	, {"Name" : "Interval", "Min" : "141", "Max" : "141"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	res_0_V { ap_memory {  { res_0_V_address0 mem_address 1 4 }  { res_0_V_ce0 mem_ce 1 1 }  { res_0_V_we0 mem_we 1 1 }  { res_0_V_d0 mem_din 1 16 }  { res_0_V_q0 mem_dout 0 16 }  { res_0_V_address1 MemPortADDR2 1 4 }  { res_0_V_ce1 MemPortCE2 1 1 }  { res_0_V_we1 MemPortWE2 1 1 }  { res_0_V_d1 MemPortDIN2 1 16 }  { res_0_V_q1 MemPortDOUT2 0 16 } } }
	res_1_V { ap_memory {  { res_1_V_address0 mem_address 1 4 }  { res_1_V_ce0 mem_ce 1 1 }  { res_1_V_we0 mem_we 1 1 }  { res_1_V_d0 mem_din 1 16 }  { res_1_V_q0 mem_dout 0 16 } } }
	res_2_V { ap_memory {  { res_2_V_address0 mem_address 1 4 }  { res_2_V_ce0 mem_ce 1 1 }  { res_2_V_we0 mem_we 1 1 }  { res_2_V_d0 mem_din 1 16 }  { res_2_V_q0 mem_dout 0 16 } } }
	res_3_V { ap_memory {  { res_3_V_address0 mem_address 1 4 }  { res_3_V_ce0 mem_ce 1 1 }  { res_3_V_we0 mem_we 1 1 }  { res_3_V_d0 mem_din 1 16 }  { res_3_V_q0 mem_dout 0 16 } } }
	res_4_V { ap_memory {  { res_4_V_address0 mem_address 1 4 }  { res_4_V_ce0 mem_ce 1 1 }  { res_4_V_we0 mem_we 1 1 }  { res_4_V_d0 mem_din 1 16 }  { res_4_V_q0 mem_dout 0 16 } } }
	res_5_V { ap_memory {  { res_5_V_address0 mem_address 1 4 }  { res_5_V_ce0 mem_ce 1 1 }  { res_5_V_we0 mem_we 1 1 }  { res_5_V_d0 mem_din 1 16 }  { res_5_V_q0 mem_dout 0 16 } } }
	res_6_V { ap_memory {  { res_6_V_address0 mem_address 1 4 }  { res_6_V_ce0 mem_ce 1 1 }  { res_6_V_we0 mem_we 1 1 }  { res_6_V_d0 mem_din 1 16 }  { res_6_V_q0 mem_dout 0 16 } } }
	res_7_V { ap_memory {  { res_7_V_address0 mem_address 1 4 }  { res_7_V_ce0 mem_ce 1 1 }  { res_7_V_we0 mem_we 1 1 }  { res_7_V_d0 mem_din 1 16 }  { res_7_V_q0 mem_dout 0 16 } } }
}
