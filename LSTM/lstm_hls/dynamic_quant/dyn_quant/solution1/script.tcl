############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project dyn_quant
set_top lstm_top
add_files dyn_quant/src/fixed_lstm.cpp
add_files dyn_quant/src/fixed_lstm.h
add_files dyn_quant/src/infer_fixed.cpp
add_files dyn_quant/src/utils.h
add_files dyn_quant/src/weight.cpp
add_files -tb dyn_quant/src/main.cpp
add_files -tb dyn_quant/src/test_mixed_precision_lstm.cpp
open_solution "solution1"
set_part {xc7z020clg400-2} -tool vivado
create_clock -period 10 -name default
#source "./dyn_quant/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
