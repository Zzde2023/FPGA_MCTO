set moduleName should_skip
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
set C_modelName {should_skip}
set C_modelType { int 1 }
set C_modelArgList {
	{ x_t_0_V_read int 16 regular  }
	{ x_t_1_V_read int 16 regular  }
	{ x_t_2_V_read int 16 regular  }
	{ x_t_3_V_read int 16 regular  }
	{ x_t_4_V_read int 16 regular  }
	{ x_t_5_V_read int 16 regular  }
	{ x_t_6_V_read int 16 regular  }
	{ x_t_7_V_read int 16 regular  }
	{ x_t_8_V_read int 16 regular  }
	{ x_t_9_V_read int 16 regular  }
	{ x_t_10_V_read int 16 regular  }
	{ x_t_11_V_read int 16 regular  }
	{ x_t_12_V_read int 16 regular  }
	{ x_t_13_V_read int 16 regular  }
	{ x_t_14_V_read int 16 regular  }
	{ x_t_15_V_read int 16 regular  }
	{ x_t_16_V_read int 16 regular  }
	{ x_t_17_V_read int 16 regular  }
	{ x_t_18_V_read int 16 regular  }
	{ x_t_19_V_read int 16 regular  }
	{ x_t_20_V_read int 16 regular  }
	{ x_t_21_V_read int 16 regular  }
	{ x_t_22_V_read int 16 regular  }
	{ x_t_23_V_read int 16 regular  }
	{ x_t_24_V_read int 16 regular  }
	{ x_t_25_V_read int 16 regular  }
	{ x_t_26_V_read int 16 regular  }
	{ x_t_27_V_read int 16 regular  }
	{ x_prev_V int 16 regular {array 156 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "x_t_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_4_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_5_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_6_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_7_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_8_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_9_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_10_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_11_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_12_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_13_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_14_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_15_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_16_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_17_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_18_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_19_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_20_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_21_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_22_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_23_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_24_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_25_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_26_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_t_27_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_prev_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 1} ]}
# RTL Port declarations: 
set portNum 38
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ x_t_0_V_read sc_in sc_lv 16 signal 0 } 
	{ x_t_1_V_read sc_in sc_lv 16 signal 1 } 
	{ x_t_2_V_read sc_in sc_lv 16 signal 2 } 
	{ x_t_3_V_read sc_in sc_lv 16 signal 3 } 
	{ x_t_4_V_read sc_in sc_lv 16 signal 4 } 
	{ x_t_5_V_read sc_in sc_lv 16 signal 5 } 
	{ x_t_6_V_read sc_in sc_lv 16 signal 6 } 
	{ x_t_7_V_read sc_in sc_lv 16 signal 7 } 
	{ x_t_8_V_read sc_in sc_lv 16 signal 8 } 
	{ x_t_9_V_read sc_in sc_lv 16 signal 9 } 
	{ x_t_10_V_read sc_in sc_lv 16 signal 10 } 
	{ x_t_11_V_read sc_in sc_lv 16 signal 11 } 
	{ x_t_12_V_read sc_in sc_lv 16 signal 12 } 
	{ x_t_13_V_read sc_in sc_lv 16 signal 13 } 
	{ x_t_14_V_read sc_in sc_lv 16 signal 14 } 
	{ x_t_15_V_read sc_in sc_lv 16 signal 15 } 
	{ x_t_16_V_read sc_in sc_lv 16 signal 16 } 
	{ x_t_17_V_read sc_in sc_lv 16 signal 17 } 
	{ x_t_18_V_read sc_in sc_lv 16 signal 18 } 
	{ x_t_19_V_read sc_in sc_lv 16 signal 19 } 
	{ x_t_20_V_read sc_in sc_lv 16 signal 20 } 
	{ x_t_21_V_read sc_in sc_lv 16 signal 21 } 
	{ x_t_22_V_read sc_in sc_lv 16 signal 22 } 
	{ x_t_23_V_read sc_in sc_lv 16 signal 23 } 
	{ x_t_24_V_read sc_in sc_lv 16 signal 24 } 
	{ x_t_25_V_read sc_in sc_lv 16 signal 25 } 
	{ x_t_26_V_read sc_in sc_lv 16 signal 26 } 
	{ x_t_27_V_read sc_in sc_lv 16 signal 27 } 
	{ x_prev_V_address0 sc_out sc_lv 8 signal 28 } 
	{ x_prev_V_ce0 sc_out sc_logic 1 signal 28 } 
	{ x_prev_V_q0 sc_in sc_lv 16 signal 28 } 
	{ ap_return sc_out sc_lv 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "x_t_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_0_V_read", "role": "default" }} , 
 	{ "name": "x_t_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_1_V_read", "role": "default" }} , 
 	{ "name": "x_t_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_2_V_read", "role": "default" }} , 
 	{ "name": "x_t_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_3_V_read", "role": "default" }} , 
 	{ "name": "x_t_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_4_V_read", "role": "default" }} , 
 	{ "name": "x_t_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_5_V_read", "role": "default" }} , 
 	{ "name": "x_t_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_6_V_read", "role": "default" }} , 
 	{ "name": "x_t_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_7_V_read", "role": "default" }} , 
 	{ "name": "x_t_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_8_V_read", "role": "default" }} , 
 	{ "name": "x_t_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_9_V_read", "role": "default" }} , 
 	{ "name": "x_t_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_10_V_read", "role": "default" }} , 
 	{ "name": "x_t_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_11_V_read", "role": "default" }} , 
 	{ "name": "x_t_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_12_V_read", "role": "default" }} , 
 	{ "name": "x_t_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_13_V_read", "role": "default" }} , 
 	{ "name": "x_t_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_14_V_read", "role": "default" }} , 
 	{ "name": "x_t_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_15_V_read", "role": "default" }} , 
 	{ "name": "x_t_16_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_16_V_read", "role": "default" }} , 
 	{ "name": "x_t_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_17_V_read", "role": "default" }} , 
 	{ "name": "x_t_18_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_18_V_read", "role": "default" }} , 
 	{ "name": "x_t_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_19_V_read", "role": "default" }} , 
 	{ "name": "x_t_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_20_V_read", "role": "default" }} , 
 	{ "name": "x_t_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_21_V_read", "role": "default" }} , 
 	{ "name": "x_t_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_22_V_read", "role": "default" }} , 
 	{ "name": "x_t_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_23_V_read", "role": "default" }} , 
 	{ "name": "x_t_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_24_V_read", "role": "default" }} , 
 	{ "name": "x_t_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_25_V_read", "role": "default" }} , 
 	{ "name": "x_t_26_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_26_V_read", "role": "default" }} , 
 	{ "name": "x_t_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_t_27_V_read", "role": "default" }} , 
 	{ "name": "x_prev_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "x_prev_V", "role": "address0" }} , 
 	{ "name": "x_prev_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_prev_V", "role": "ce0" }} , 
 	{ "name": "x_prev_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_prev_V", "role": "q0" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "should_skip",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33", "EstimateLatencyMax" : "33",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_t_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_t_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_prev_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.LSTM_Top_dcmp_64nbkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.LSTM_Top_dcmp_64nbkb_U2", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	should_skip {
		x_t_0_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_1_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_2_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_3_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_4_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_5_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_6_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_7_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_8_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_9_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_10_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_11_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_12_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_13_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_14_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_15_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_16_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_17_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_18_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_19_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_20_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_21_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_22_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_23_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_24_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_25_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_26_V_read {Type I LastRead 0 FirstWrite -1}
		x_t_27_V_read {Type I LastRead 0 FirstWrite -1}
		x_prev_V {Type I LastRead 1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "33", "Max" : "33"}
	, {"Name" : "Interval", "Min" : "33", "Max" : "33"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	x_t_0_V_read { ap_none {  { x_t_0_V_read in_data 0 16 } } }
	x_t_1_V_read { ap_none {  { x_t_1_V_read in_data 0 16 } } }
	x_t_2_V_read { ap_none {  { x_t_2_V_read in_data 0 16 } } }
	x_t_3_V_read { ap_none {  { x_t_3_V_read in_data 0 16 } } }
	x_t_4_V_read { ap_none {  { x_t_4_V_read in_data 0 16 } } }
	x_t_5_V_read { ap_none {  { x_t_5_V_read in_data 0 16 } } }
	x_t_6_V_read { ap_none {  { x_t_6_V_read in_data 0 16 } } }
	x_t_7_V_read { ap_none {  { x_t_7_V_read in_data 0 16 } } }
	x_t_8_V_read { ap_none {  { x_t_8_V_read in_data 0 16 } } }
	x_t_9_V_read { ap_none {  { x_t_9_V_read in_data 0 16 } } }
	x_t_10_V_read { ap_none {  { x_t_10_V_read in_data 0 16 } } }
	x_t_11_V_read { ap_none {  { x_t_11_V_read in_data 0 16 } } }
	x_t_12_V_read { ap_none {  { x_t_12_V_read in_data 0 16 } } }
	x_t_13_V_read { ap_none {  { x_t_13_V_read in_data 0 16 } } }
	x_t_14_V_read { ap_none {  { x_t_14_V_read in_data 0 16 } } }
	x_t_15_V_read { ap_none {  { x_t_15_V_read in_data 0 16 } } }
	x_t_16_V_read { ap_none {  { x_t_16_V_read in_data 0 16 } } }
	x_t_17_V_read { ap_none {  { x_t_17_V_read in_data 0 16 } } }
	x_t_18_V_read { ap_none {  { x_t_18_V_read in_data 0 16 } } }
	x_t_19_V_read { ap_none {  { x_t_19_V_read in_data 0 16 } } }
	x_t_20_V_read { ap_none {  { x_t_20_V_read in_data 0 16 } } }
	x_t_21_V_read { ap_none {  { x_t_21_V_read in_data 0 16 } } }
	x_t_22_V_read { ap_none {  { x_t_22_V_read in_data 0 16 } } }
	x_t_23_V_read { ap_none {  { x_t_23_V_read in_data 0 16 } } }
	x_t_24_V_read { ap_none {  { x_t_24_V_read in_data 0 16 } } }
	x_t_25_V_read { ap_none {  { x_t_25_V_read in_data 0 16 } } }
	x_t_26_V_read { ap_none {  { x_t_26_V_read in_data 0 16 } } }
	x_t_27_V_read { ap_none {  { x_t_27_V_read in_data 0 16 } } }
	x_prev_V { ap_memory {  { x_prev_V_address0 mem_address 1 8 }  { x_prev_V_ce0 mem_ce 1 1 }  { x_prev_V_q0 mem_dout 0 16 } } }
}
