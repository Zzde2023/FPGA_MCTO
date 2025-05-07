############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project bi_lstm_exit
set_top BiLSTM_Top
add_files bi_lstm_exit/src/weight_sparse4.h
add_files bi_lstm_exit/src/weight_sparse3.h
add_files bi_lstm_exit/src/weight_sparse2.h
add_files bi_lstm_exit/src/weight.h
add_files bi_lstm_exit/src/utils.h
add_files bi_lstm_exit/src/rnn_top.cpp
add_files bi_lstm_exit/src/rnn.h
add_files bi_lstm_exit/src/rnn.cpp
add_files -tb bi_lstm_exit/src/main.cpp -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg400-2} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
#source "./bi_lstm_exit/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
