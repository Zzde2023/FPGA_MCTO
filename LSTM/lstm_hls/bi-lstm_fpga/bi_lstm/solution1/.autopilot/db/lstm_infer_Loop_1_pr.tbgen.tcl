set moduleName lstm_infer_Loop_1_pr
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
set C_modelName {lstm_infer_Loop_1_pr}
set C_modelType { void 0 }
set C_modelArgList {
	{ p_read int 7 regular  }
	{ input_b_V int 16 regular {array 3900 { 0 3 } 0 1 }  }
	{ input_f_V int 16 regular {array 3900 { 0 0 } 0 1 }  }
	{ input_r float 32 regular {array 3900 { 1 3 } 1 1 }  }
	{ valid_len_out int 7 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "p_read", "interface" : "wire", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "input_b_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "input_f_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "input_r", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "valid_len_out", "interface" : "fifo", "bitwidth" : 7, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ p_read sc_in sc_lv 7 signal 0 } 
	{ input_b_V_address0 sc_out sc_lv 12 signal 1 } 
	{ input_b_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_b_V_we0 sc_out sc_logic 1 signal 1 } 
	{ input_b_V_d0 sc_out sc_lv 16 signal 1 } 
	{ input_f_V_address0 sc_out sc_lv 12 signal 2 } 
	{ input_f_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ input_f_V_we0 sc_out sc_logic 1 signal 2 } 
	{ input_f_V_d0 sc_out sc_lv 16 signal 2 } 
	{ input_f_V_address1 sc_out sc_lv 12 signal 2 } 
	{ input_f_V_ce1 sc_out sc_logic 1 signal 2 } 
	{ input_f_V_we1 sc_out sc_logic 1 signal 2 } 
	{ input_f_V_d1 sc_out sc_lv 16 signal 2 } 
	{ input_r_address0 sc_out sc_lv 12 signal 3 } 
	{ input_r_ce0 sc_out sc_logic 1 signal 3 } 
	{ input_r_q0 sc_in sc_lv 32 signal 3 } 
	{ valid_len_out_din sc_out sc_lv 7 signal 4 } 
	{ valid_len_out_full_n sc_in sc_logic 1 signal 4 } 
	{ valid_len_out_write sc_out sc_logic 1 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "p_read", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "p_read", "role": "default" }} , 
 	{ "name": "input_b_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "input_b_V", "role": "address0" }} , 
 	{ "name": "input_b_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_b_V", "role": "ce0" }} , 
 	{ "name": "input_b_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_b_V", "role": "we0" }} , 
 	{ "name": "input_b_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_b_V", "role": "d0" }} , 
 	{ "name": "input_f_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "input_f_V", "role": "address0" }} , 
 	{ "name": "input_f_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_f_V", "role": "ce0" }} , 
 	{ "name": "input_f_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_f_V", "role": "we0" }} , 
 	{ "name": "input_f_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_f_V", "role": "d0" }} , 
 	{ "name": "input_f_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "input_f_V", "role": "address1" }} , 
 	{ "name": "input_f_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_f_V", "role": "ce1" }} , 
 	{ "name": "input_f_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_f_V", "role": "we1" }} , 
 	{ "name": "input_f_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_f_V", "role": "d1" }} , 
 	{ "name": "input_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "input_r", "role": "address0" }} , 
 	{ "name": "input_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_r", "role": "ce0" }} , 
 	{ "name": "input_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_r", "role": "q0" }} , 
 	{ "name": "valid_len_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "valid_len_out", "role": "din" }} , 
 	{ "name": "valid_len_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "valid_len_out", "role": "full_n" }} , 
 	{ "name": "valid_len_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "valid_len_out", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "lstm_infer_Loop_1_pr",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "4957",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_read", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "input_b_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "input_f_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "valid_len_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "valid_len_out_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_fpext_cud_U19", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	lstm_infer_Loop_1_pr {
		p_read {Type I LastRead 0 FirstWrite -1}
		input_b_V {Type O LastRead -1 FirstWrite 4}
		input_f_V {Type O LastRead -1 FirstWrite 3}
		input_r {Type I LastRead 1 FirstWrite -1}
		valid_len_out {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2", "Max" : "4957"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "4957"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	p_read { ap_none {  { p_read in_data 0 7 } } }
	input_b_V { ap_memory {  { input_b_V_address0 mem_address 1 12 }  { input_b_V_ce0 mem_ce 1 1 }  { input_b_V_we0 mem_we 1 1 }  { input_b_V_d0 mem_din 1 16 } } }
	input_f_V { ap_memory {  { input_f_V_address0 mem_address 1 12 }  { input_f_V_ce0 mem_ce 1 1 }  { input_f_V_we0 mem_we 1 1 }  { input_f_V_d0 mem_din 1 16 }  { input_f_V_address1 MemPortADDR2 1 12 }  { input_f_V_ce1 MemPortCE2 1 1 }  { input_f_V_we1 MemPortWE2 1 1 }  { input_f_V_d1 MemPortDIN2 1 16 } } }
	input_r { ap_memory {  { input_r_address0 mem_address 1 12 }  { input_r_ce0 mem_ce 1 1 }  { input_r_q0 mem_dout 0 32 } } }
	valid_len_out { ap_fifo {  { valid_len_out_din fifo_data 1 7 }  { valid_len_out_full_n fifo_status 0 1 }  { valid_len_out_write fifo_update 1 1 } } }
}
