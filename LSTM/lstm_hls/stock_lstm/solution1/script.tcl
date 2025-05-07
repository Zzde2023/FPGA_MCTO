############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project stock_lstm
set_top LSTM_TOP
add_files stock_lstm/src/lstm.cpp
add_files stock_lstm/src/lstm.h
add_files stock_lstm/src/lstm_top.cpp
add_files stock_lstm/src/utils.h
add_files stock_lstm/src/weight.h
open_solution "solution1"
set_part {xc7z020clg400-2} -tool vivado
create_clock -period 10 -name default
config_array_partition   -maximum_size 4096  
#source "./stock_lstm/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
