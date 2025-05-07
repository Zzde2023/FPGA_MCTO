############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lstm_hls_opt
set_top LSTM_Top
add_files lstm_hls_opt/src/rnn.cpp
add_files lstm_hls_opt/src/rnn.h
add_files lstm_hls_opt/src/rnn_top.cpp
add_files lstm_hls_opt/src/utils.h
add_files lstm_hls_opt/src/weight.h
add_files -tb lstm_hls_opt/src/main.cpp -cflags "-Wl,--stack=1048576000 -mcmodel=medium -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg400-2} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
#source "./lstm_hls_opt/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
