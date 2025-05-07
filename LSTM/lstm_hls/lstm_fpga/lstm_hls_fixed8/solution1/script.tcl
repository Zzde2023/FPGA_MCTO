############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lstm_hls_fixed8
set_top LSTM_Top
add_files lstm_hls_fixed8/src/weight_sparse.h
add_files lstm_hls_fixed8/src/weight.h
add_files lstm_hls_fixed8/src/utils.h
add_files lstm_hls_fixed8/src/rnn_top.cpp
add_files lstm_hls_fixed8/src/rnn.h
add_files lstm_hls_fixed8/src/rnn.cpp
add_files -tb lstm_hls_fixed8/src/main.cpp -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg400-2} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
#source "./lstm_hls_fixed8/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
