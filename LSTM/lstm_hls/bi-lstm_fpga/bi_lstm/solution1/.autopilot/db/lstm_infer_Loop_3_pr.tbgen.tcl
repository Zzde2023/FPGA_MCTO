set moduleName lstm_infer_Loop_3_pr
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
set C_modelName {lstm_infer_Loop_3_pr}
set C_modelType { int 160 }
set C_modelArgList {
	{ fc1_out_0_V int 16 regular {array 5 { 1 3 } 1 1 }  }
	{ fc1_out_1_V int 16 regular {array 5 { 1 3 } 1 1 }  }
	{ fc1_out_2_V int 16 regular {array 5 { 1 3 } 1 1 }  }
	{ fc1_out_3_V int 16 regular {array 5 { 1 3 } 1 1 }  }
	{ fc1_out_4_V int 16 regular {array 5 { 1 3 } 1 1 }  }
	{ fc1_out_5_V int 16 regular {array 5 { 1 3 } 1 1 }  }
	{ fc1_out_6_V int 16 regular {array 5 { 1 3 } 1 1 }  }
	{ fc1_out_7_V int 16 regular {array 5 { 1 3 } 1 1 }  }
	{ fc1_out_8_V int 16 regular {array 5 { 1 3 } 1 1 }  }
	{ fc1_out_9_V int 16 regular {array 5 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "fc1_out_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fc1_out_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fc1_out_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fc1_out_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fc1_out_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fc1_out_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fc1_out_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fc1_out_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fc1_out_8_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fc1_out_9_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 160} ]}
# RTL Port declarations: 
set portNum 47
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
	{ fc1_out_0_V_q0 sc_in sc_lv 16 signal 0 } 
	{ fc1_out_1_V_address0 sc_out sc_lv 3 signal 1 } 
	{ fc1_out_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ fc1_out_1_V_q0 sc_in sc_lv 16 signal 1 } 
	{ fc1_out_2_V_address0 sc_out sc_lv 3 signal 2 } 
	{ fc1_out_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ fc1_out_2_V_q0 sc_in sc_lv 16 signal 2 } 
	{ fc1_out_3_V_address0 sc_out sc_lv 3 signal 3 } 
	{ fc1_out_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ fc1_out_3_V_q0 sc_in sc_lv 16 signal 3 } 
	{ fc1_out_4_V_address0 sc_out sc_lv 3 signal 4 } 
	{ fc1_out_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ fc1_out_4_V_q0 sc_in sc_lv 16 signal 4 } 
	{ fc1_out_5_V_address0 sc_out sc_lv 3 signal 5 } 
	{ fc1_out_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ fc1_out_5_V_q0 sc_in sc_lv 16 signal 5 } 
	{ fc1_out_6_V_address0 sc_out sc_lv 3 signal 6 } 
	{ fc1_out_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ fc1_out_6_V_q0 sc_in sc_lv 16 signal 6 } 
	{ fc1_out_7_V_address0 sc_out sc_lv 3 signal 7 } 
	{ fc1_out_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ fc1_out_7_V_q0 sc_in sc_lv 16 signal 7 } 
	{ fc1_out_8_V_address0 sc_out sc_lv 3 signal 8 } 
	{ fc1_out_8_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ fc1_out_8_V_q0 sc_in sc_lv 16 signal 8 } 
	{ fc1_out_9_V_address0 sc_out sc_lv 3 signal 9 } 
	{ fc1_out_9_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ fc1_out_9_V_q0 sc_in sc_lv 16 signal 9 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_return_3 sc_out sc_lv 16 signal -1 } 
	{ ap_return_4 sc_out sc_lv 16 signal -1 } 
	{ ap_return_5 sc_out sc_lv 16 signal -1 } 
	{ ap_return_6 sc_out sc_lv 16 signal -1 } 
	{ ap_return_7 sc_out sc_lv 16 signal -1 } 
	{ ap_return_8 sc_out sc_lv 16 signal -1 } 
	{ ap_return_9 sc_out sc_lv 16 signal -1 } 
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
 	{ "name": "fc1_out_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_0_V", "role": "q0" }} , 
 	{ "name": "fc1_out_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "address0" }} , 
 	{ "name": "fc1_out_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_1_V", "role": "q0" }} , 
 	{ "name": "fc1_out_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "address0" }} , 
 	{ "name": "fc1_out_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_2_V", "role": "q0" }} , 
 	{ "name": "fc1_out_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "address0" }} , 
 	{ "name": "fc1_out_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_3_V", "role": "q0" }} , 
 	{ "name": "fc1_out_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "address0" }} , 
 	{ "name": "fc1_out_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_4_V", "role": "q0" }} , 
 	{ "name": "fc1_out_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "address0" }} , 
 	{ "name": "fc1_out_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_5_V", "role": "q0" }} , 
 	{ "name": "fc1_out_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "address0" }} , 
 	{ "name": "fc1_out_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_6_V", "role": "q0" }} , 
 	{ "name": "fc1_out_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "address0" }} , 
 	{ "name": "fc1_out_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_7_V", "role": "q0" }} , 
 	{ "name": "fc1_out_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "address0" }} , 
 	{ "name": "fc1_out_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_8_V", "role": "q0" }} , 
 	{ "name": "fc1_out_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "address0" }} , 
 	{ "name": "fc1_out_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "ce0" }} , 
 	{ "name": "fc1_out_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fc1_out_9_V", "role": "q0" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16"],
		"CDFG" : "lstm_infer_Loop_3_pr",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "103", "EstimateLatencyMax" : "103",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "fc1_out_0_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_1_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_2_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_3_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_4_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_5_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_6_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_7_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_8_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "fc1_out_9_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "Weight_fc2_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc2_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc2_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc2_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_fc2_V_4", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc2_V_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc2_V_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc2_V_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc2_V_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_fc2_V_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mux_10cnw_U873", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mucow_U874", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mucow_U875", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mucow_U876", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mucow_U877", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mucow_U878", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mucow_U879", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mucow_U880", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mucow_U881", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mucow_U882", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mac_mucow_U883", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	lstm_infer_Loop_3_pr {
		fc1_out_0_V {Type I LastRead 1 FirstWrite -1}
		fc1_out_1_V {Type I LastRead 1 FirstWrite -1}
		fc1_out_2_V {Type I LastRead 1 FirstWrite -1}
		fc1_out_3_V {Type I LastRead 1 FirstWrite -1}
		fc1_out_4_V {Type I LastRead 1 FirstWrite -1}
		fc1_out_5_V {Type I LastRead 1 FirstWrite -1}
		fc1_out_6_V {Type I LastRead 1 FirstWrite -1}
		fc1_out_7_V {Type I LastRead 1 FirstWrite -1}
		fc1_out_8_V {Type I LastRead 1 FirstWrite -1}
		fc1_out_9_V {Type I LastRead 1 FirstWrite -1}
		Weight_fc2_V_0 {Type I LastRead -1 FirstWrite -1}
		Weight_fc2_V_1 {Type I LastRead -1 FirstWrite -1}
		Weight_fc2_V_2 {Type I LastRead -1 FirstWrite -1}
		Weight_fc2_V_3 {Type I LastRead -1 FirstWrite -1}
		Weight_fc2_V_4 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "103", "Max" : "103"}
	, {"Name" : "Interval", "Min" : "103", "Max" : "103"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	fc1_out_0_V { ap_memory {  { fc1_out_0_V_address0 mem_address 1 3 }  { fc1_out_0_V_ce0 mem_ce 1 1 }  { fc1_out_0_V_q0 mem_dout 0 16 } } }
	fc1_out_1_V { ap_memory {  { fc1_out_1_V_address0 mem_address 1 3 }  { fc1_out_1_V_ce0 mem_ce 1 1 }  { fc1_out_1_V_q0 mem_dout 0 16 } } }
	fc1_out_2_V { ap_memory {  { fc1_out_2_V_address0 mem_address 1 3 }  { fc1_out_2_V_ce0 mem_ce 1 1 }  { fc1_out_2_V_q0 mem_dout 0 16 } } }
	fc1_out_3_V { ap_memory {  { fc1_out_3_V_address0 mem_address 1 3 }  { fc1_out_3_V_ce0 mem_ce 1 1 }  { fc1_out_3_V_q0 mem_dout 0 16 } } }
	fc1_out_4_V { ap_memory {  { fc1_out_4_V_address0 mem_address 1 3 }  { fc1_out_4_V_ce0 mem_ce 1 1 }  { fc1_out_4_V_q0 mem_dout 0 16 } } }
	fc1_out_5_V { ap_memory {  { fc1_out_5_V_address0 mem_address 1 3 }  { fc1_out_5_V_ce0 mem_ce 1 1 }  { fc1_out_5_V_q0 mem_dout 0 16 } } }
	fc1_out_6_V { ap_memory {  { fc1_out_6_V_address0 mem_address 1 3 }  { fc1_out_6_V_ce0 mem_ce 1 1 }  { fc1_out_6_V_q0 mem_dout 0 16 } } }
	fc1_out_7_V { ap_memory {  { fc1_out_7_V_address0 mem_address 1 3 }  { fc1_out_7_V_ce0 mem_ce 1 1 }  { fc1_out_7_V_q0 mem_dout 0 16 } } }
	fc1_out_8_V { ap_memory {  { fc1_out_8_V_address0 mem_address 1 3 }  { fc1_out_8_V_ce0 mem_ce 1 1 }  { fc1_out_8_V_q0 mem_dout 0 16 } } }
	fc1_out_9_V { ap_memory {  { fc1_out_9_V_address0 mem_address 1 3 }  { fc1_out_9_V_ce0 mem_ce 1 1 }  { fc1_out_9_V_q0 mem_dout 0 16 } } }
}
