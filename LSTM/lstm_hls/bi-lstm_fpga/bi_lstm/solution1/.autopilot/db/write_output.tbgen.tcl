set moduleName write_output
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
set C_modelName {write_output}
set C_modelType { void 0 }
set C_modelArgList {
	{ output_stream_V_data_V int 32 regular {axi_s 1 volatile  { output_stream Data } }  }
	{ output_stream_V_keep_V int 4 regular {axi_s 1 volatile  { output_stream Keep } }  }
	{ output_stream_V_strb_V int 4 regular {axi_s 1 volatile  { output_stream Strb } }  }
	{ output_stream_V_user_V int 1 regular {axi_s 1 volatile  { output_stream User } }  }
	{ output_stream_V_last_V int 1 regular {axi_s 1 volatile  { output_stream Last } }  }
	{ output_stream_V_id_V int 1 regular {axi_s 1 volatile  { output_stream ID } }  }
	{ output_stream_V_dest_V int 1 regular {axi_s 1 volatile  { output_stream Dest } }  }
	{ res_0 float 32 regular {pointer 0}  }
	{ res_1 float 32 regular {pointer 0}  }
	{ res_2 float 32 regular {pointer 0}  }
	{ res_3 float 32 regular {pointer 0}  }
	{ res_4 float 32 regular {pointer 0}  }
	{ res_5 float 32 regular {pointer 0}  }
	{ res_6 float 32 regular {pointer 0}  }
	{ res_7 float 32 regular {pointer 0}  }
	{ res_8 float 32 regular {pointer 0}  }
	{ res_9 float 32 regular {pointer 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_stream_V_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_stream_V_keep_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_stream_V_strb_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_stream_V_user_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_stream_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_stream_V_id_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_stream_V_dest_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_0", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "res_1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "res_2", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "res_3", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "res_4", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "res_5", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "res_6", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "res_7", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "res_8", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "res_9", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
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
	{ output_stream_TDATA sc_out sc_lv 32 signal 0 } 
	{ output_stream_TVALID sc_out sc_logic 1 outvld 6 } 
	{ output_stream_TREADY sc_in sc_logic 1 outacc 0 } 
	{ output_stream_TKEEP sc_out sc_lv 4 signal 1 } 
	{ output_stream_TSTRB sc_out sc_lv 4 signal 2 } 
	{ output_stream_TUSER sc_out sc_lv 1 signal 3 } 
	{ output_stream_TLAST sc_out sc_lv 1 signal 4 } 
	{ output_stream_TID sc_out sc_lv 1 signal 5 } 
	{ output_stream_TDEST sc_out sc_lv 1 signal 6 } 
	{ res_0 sc_in sc_lv 32 signal 7 } 
	{ res_1 sc_in sc_lv 32 signal 8 } 
	{ res_2 sc_in sc_lv 32 signal 9 } 
	{ res_3 sc_in sc_lv 32 signal 10 } 
	{ res_4 sc_in sc_lv 32 signal 11 } 
	{ res_5 sc_in sc_lv 32 signal 12 } 
	{ res_6 sc_in sc_lv 32 signal 13 } 
	{ res_7 sc_in sc_lv 32 signal 14 } 
	{ res_8 sc_in sc_lv 32 signal 15 } 
	{ res_9 sc_in sc_lv 32 signal 16 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_stream_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_stream_V_data_V", "role": "default" }} , 
 	{ "name": "output_stream_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "output_stream_V_dest_V", "role": "default" }} , 
 	{ "name": "output_stream_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "output_stream_V_data_V", "role": "default" }} , 
 	{ "name": "output_stream_TKEEP", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_stream_V_keep_V", "role": "default" }} , 
 	{ "name": "output_stream_TSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_stream_V_strb_V", "role": "default" }} , 
 	{ "name": "output_stream_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "output_stream_V_user_V", "role": "default" }} , 
 	{ "name": "output_stream_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "output_stream_V_last_V", "role": "default" }} , 
 	{ "name": "output_stream_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "output_stream_V_id_V", "role": "default" }} , 
 	{ "name": "output_stream_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "output_stream_V_dest_V", "role": "default" }} , 
 	{ "name": "res_0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_0", "role": "default" }} , 
 	{ "name": "res_1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_1", "role": "default" }} , 
 	{ "name": "res_2", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_2", "role": "default" }} , 
 	{ "name": "res_3", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_3", "role": "default" }} , 
 	{ "name": "res_4", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_4", "role": "default" }} , 
 	{ "name": "res_5", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_5", "role": "default" }} , 
 	{ "name": "res_6", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_6", "role": "default" }} , 
 	{ "name": "res_7", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_7", "role": "default" }} , 
 	{ "name": "res_8", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_8", "role": "default" }} , 
 	{ "name": "res_9", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_9", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "write_output",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "13", "EstimateLatencyMax" : "13",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "output_stream_V_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "output_stream_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "output_stream_V_keep_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "output_stream_V_strb_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "output_stream_V_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "output_stream_V_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "output_stream_V_id_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "output_stream_V_dest_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "res_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BiLSTM_Top_mux_10cJz_U949", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	write_output {
		output_stream_V_data_V {Type O LastRead -1 FirstWrite 2}
		output_stream_V_keep_V {Type O LastRead -1 FirstWrite 2}
		output_stream_V_strb_V {Type O LastRead -1 FirstWrite 2}
		output_stream_V_user_V {Type O LastRead -1 FirstWrite 2}
		output_stream_V_last_V {Type O LastRead -1 FirstWrite 2}
		output_stream_V_id_V {Type O LastRead -1 FirstWrite 2}
		output_stream_V_dest_V {Type O LastRead -1 FirstWrite 2}
		res_0 {Type I LastRead 1 FirstWrite -1}
		res_1 {Type I LastRead 1 FirstWrite -1}
		res_2 {Type I LastRead 1 FirstWrite -1}
		res_3 {Type I LastRead 1 FirstWrite -1}
		res_4 {Type I LastRead 1 FirstWrite -1}
		res_5 {Type I LastRead 1 FirstWrite -1}
		res_6 {Type I LastRead 1 FirstWrite -1}
		res_7 {Type I LastRead 1 FirstWrite -1}
		res_8 {Type I LastRead 1 FirstWrite -1}
		res_9 {Type I LastRead 1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "13", "Max" : "13"}
	, {"Name" : "Interval", "Min" : "13", "Max" : "13"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	output_stream_V_data_V { axis {  { output_stream_TDATA out_data 1 32 }  { output_stream_TREADY out_acc 0 1 } } }
	output_stream_V_keep_V { axis {  { output_stream_TKEEP out_data 1 4 } } }
	output_stream_V_strb_V { axis {  { output_stream_TSTRB out_data 1 4 } } }
	output_stream_V_user_V { axis {  { output_stream_TUSER out_data 1 1 } } }
	output_stream_V_last_V { axis {  { output_stream_TLAST out_data 1 1 } } }
	output_stream_V_id_V { axis {  { output_stream_TID out_data 1 1 } } }
	output_stream_V_dest_V { axis {  { output_stream_TVALID out_vld 1 1 }  { output_stream_TDEST out_data 1 1 } } }
	res_0 { ap_none {  { res_0 in_data 0 32 } } }
	res_1 { ap_none {  { res_1 in_data 0 32 } } }
	res_2 { ap_none {  { res_2 in_data 0 32 } } }
	res_3 { ap_none {  { res_3 in_data 0 32 } } }
	res_4 { ap_none {  { res_4 in_data 0 32 } } }
	res_5 { ap_none {  { res_5 in_data 0 32 } } }
	res_6 { ap_none {  { res_6 in_data 0 32 } } }
	res_7 { ap_none {  { res_7 in_data 0 32 } } }
	res_8 { ap_none {  { res_8 in_data 0 32 } } }
	res_9 { ap_none {  { res_9 in_data 0 32 } } }
}
