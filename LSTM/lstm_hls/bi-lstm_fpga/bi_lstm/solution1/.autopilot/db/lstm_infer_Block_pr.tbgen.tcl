set moduleName lstm_infer_Block_pr
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
set C_modelName {lstm_infer_Block_.pr}
set C_modelType { void 0 }
set C_modelArgList {
	{ p_read int 16 regular  }
	{ ress_0 float 32 regular {pointer 1}  }
	{ p_read1 int 16 regular  }
	{ ress_1 float 32 regular {pointer 1}  }
	{ p_read2 int 16 regular  }
	{ ress_2 float 32 regular {pointer 1}  }
	{ p_read3 int 16 regular  }
	{ ress_3 float 32 regular {pointer 1}  }
	{ p_read4 int 16 regular  }
	{ ress_4 float 32 regular {pointer 1}  }
	{ p_read5 int 16 regular  }
	{ ress_5 float 32 regular {pointer 1}  }
	{ p_read6 int 16 regular  }
	{ ress_6 float 32 regular {pointer 1}  }
	{ p_read7 int 16 regular  }
	{ ress_7 float 32 regular {pointer 1}  }
	{ p_read8 int 16 regular  }
	{ ress_8 float 32 regular {pointer 1}  }
	{ p_read9 int 16 regular  }
	{ ress_9 float 32 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "p_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ress_0", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read1", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ress_1", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read2", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ress_2", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read3", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ress_3", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read4", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ress_4", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read5", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ress_5", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read6", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ress_6", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read7", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ress_7", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read8", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ress_8", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read9", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ress_9", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 37
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ p_read sc_in sc_lv 16 signal 0 } 
	{ ress_0 sc_out sc_lv 32 signal 1 } 
	{ ress_0_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ p_read1 sc_in sc_lv 16 signal 2 } 
	{ ress_1 sc_out sc_lv 32 signal 3 } 
	{ ress_1_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ p_read2 sc_in sc_lv 16 signal 4 } 
	{ ress_2 sc_out sc_lv 32 signal 5 } 
	{ ress_2_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ p_read3 sc_in sc_lv 16 signal 6 } 
	{ ress_3 sc_out sc_lv 32 signal 7 } 
	{ ress_3_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ p_read4 sc_in sc_lv 16 signal 8 } 
	{ ress_4 sc_out sc_lv 32 signal 9 } 
	{ ress_4_ap_vld sc_out sc_logic 1 outvld 9 } 
	{ p_read5 sc_in sc_lv 16 signal 10 } 
	{ ress_5 sc_out sc_lv 32 signal 11 } 
	{ ress_5_ap_vld sc_out sc_logic 1 outvld 11 } 
	{ p_read6 sc_in sc_lv 16 signal 12 } 
	{ ress_6 sc_out sc_lv 32 signal 13 } 
	{ ress_6_ap_vld sc_out sc_logic 1 outvld 13 } 
	{ p_read7 sc_in sc_lv 16 signal 14 } 
	{ ress_7 sc_out sc_lv 32 signal 15 } 
	{ ress_7_ap_vld sc_out sc_logic 1 outvld 15 } 
	{ p_read8 sc_in sc_lv 16 signal 16 } 
	{ ress_8 sc_out sc_lv 32 signal 17 } 
	{ ress_8_ap_vld sc_out sc_logic 1 outvld 17 } 
	{ p_read9 sc_in sc_lv 16 signal 18 } 
	{ ress_9 sc_out sc_lv 32 signal 19 } 
	{ ress_9_ap_vld sc_out sc_logic 1 outvld 19 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "p_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read", "role": "default" }} , 
 	{ "name": "ress_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ress_0", "role": "default" }} , 
 	{ "name": "ress_0_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ress_0", "role": "ap_vld" }} , 
 	{ "name": "p_read1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read1", "role": "default" }} , 
 	{ "name": "ress_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ress_1", "role": "default" }} , 
 	{ "name": "ress_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ress_1", "role": "ap_vld" }} , 
 	{ "name": "p_read2", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read2", "role": "default" }} , 
 	{ "name": "ress_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ress_2", "role": "default" }} , 
 	{ "name": "ress_2_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ress_2", "role": "ap_vld" }} , 
 	{ "name": "p_read3", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read3", "role": "default" }} , 
 	{ "name": "ress_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ress_3", "role": "default" }} , 
 	{ "name": "ress_3_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ress_3", "role": "ap_vld" }} , 
 	{ "name": "p_read4", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read4", "role": "default" }} , 
 	{ "name": "ress_4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ress_4", "role": "default" }} , 
 	{ "name": "ress_4_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ress_4", "role": "ap_vld" }} , 
 	{ "name": "p_read5", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read5", "role": "default" }} , 
 	{ "name": "ress_5", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ress_5", "role": "default" }} , 
 	{ "name": "ress_5_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ress_5", "role": "ap_vld" }} , 
 	{ "name": "p_read6", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read6", "role": "default" }} , 
 	{ "name": "ress_6", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ress_6", "role": "default" }} , 
 	{ "name": "ress_6_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ress_6", "role": "ap_vld" }} , 
 	{ "name": "p_read7", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read7", "role": "default" }} , 
 	{ "name": "ress_7", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ress_7", "role": "default" }} , 
 	{ "name": "ress_7_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ress_7", "role": "ap_vld" }} , 
 	{ "name": "p_read8", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read8", "role": "default" }} , 
 	{ "name": "ress_8", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ress_8", "role": "default" }} , 
 	{ "name": "ress_8_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ress_8", "role": "ap_vld" }} , 
 	{ "name": "p_read9", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read9", "role": "default" }} , 
 	{ "name": "ress_9", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ress_9", "role": "default" }} , 
 	{ "name": "ress_9_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ress_9", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "lstm_infer_Block_pr",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_read", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "ress_0", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "ress_1", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "ress_2", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "ress_3", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "ress_4", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "ress_5", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "ress_6", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "ress_7", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "ress_8", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "ress_9", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"}]}]}


set ArgLastReadFirstWriteLatency {
	lstm_infer_Block_pr {
		p_read {Type I LastRead 0 FirstWrite -1}
		ress_0 {Type O LastRead -1 FirstWrite 2}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		ress_1 {Type O LastRead -1 FirstWrite 2}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		ress_2 {Type O LastRead -1 FirstWrite 2}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		ress_3 {Type O LastRead -1 FirstWrite 2}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		ress_4 {Type O LastRead -1 FirstWrite 2}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		ress_5 {Type O LastRead -1 FirstWrite 2}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		ress_6 {Type O LastRead -1 FirstWrite 2}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		ress_7 {Type O LastRead -1 FirstWrite 2}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		ress_8 {Type O LastRead -1 FirstWrite 2}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		ress_9 {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2", "Max" : "2"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "2"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	p_read { ap_none {  { p_read in_data 0 16 } } }
	ress_0 { ap_vld {  { ress_0 out_data 1 32 }  { ress_0_ap_vld out_vld 1 1 } } }
	p_read1 { ap_none {  { p_read1 in_data 0 16 } } }
	ress_1 { ap_vld {  { ress_1 out_data 1 32 }  { ress_1_ap_vld out_vld 1 1 } } }
	p_read2 { ap_none {  { p_read2 in_data 0 16 } } }
	ress_2 { ap_vld {  { ress_2 out_data 1 32 }  { ress_2_ap_vld out_vld 1 1 } } }
	p_read3 { ap_none {  { p_read3 in_data 0 16 } } }
	ress_3 { ap_vld {  { ress_3 out_data 1 32 }  { ress_3_ap_vld out_vld 1 1 } } }
	p_read4 { ap_none {  { p_read4 in_data 0 16 } } }
	ress_4 { ap_vld {  { ress_4 out_data 1 32 }  { ress_4_ap_vld out_vld 1 1 } } }
	p_read5 { ap_none {  { p_read5 in_data 0 16 } } }
	ress_5 { ap_vld {  { ress_5 out_data 1 32 }  { ress_5_ap_vld out_vld 1 1 } } }
	p_read6 { ap_none {  { p_read6 in_data 0 16 } } }
	ress_6 { ap_vld {  { ress_6 out_data 1 32 }  { ress_6_ap_vld out_vld 1 1 } } }
	p_read7 { ap_none {  { p_read7 in_data 0 16 } } }
	ress_7 { ap_vld {  { ress_7 out_data 1 32 }  { ress_7_ap_vld out_vld 1 1 } } }
	p_read8 { ap_none {  { p_read8 in_data 0 16 } } }
	ress_8 { ap_vld {  { ress_8 out_data 1 32 }  { ress_8_ap_vld out_vld 1 1 } } }
	p_read9 { ap_none {  { p_read9 in_data 0 16 } } }
	ress_9 { ap_vld {  { ress_9 out_data 1 32 }  { ress_9_ap_vld out_vld 1 1 } } }
}
