############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project bi_lstm
set_top BiLSTM_Top
add_files bi_lstm/src/rnn.cpp
add_files bi_lstm/src/rnn.h
add_files bi_lstm/src/rnn_top.cpp
add_files bi_lstm/test/test_data.h
add_files bi_lstm/src/utils.h
add_files bi_lstm/src/weight.h
add_files bi_lstm/src/weight_sparse2.h
add_files -tb bi_lstm/test/main.cpp -cflags "-I../src -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg400-2} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
#source "./bi_lstm/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
