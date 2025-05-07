# ==============================================================
# File generated on Wed Apr 16 03:09:30 +0800 2025
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../src/main.cpp -cflags { -Wl,--stack=1048576000 -mcmodel=medium -Wno-unknown-pragmas}
add_files lstm_hls_opt/src/rnn.cpp
add_files lstm_hls_opt/src/rnn.h
add_files lstm_hls_opt/src/rnn_top.cpp
add_files lstm_hls_opt/src/utils.h
add_files lstm_hls_opt/src/weight.h
set_part xc7z020clg400-2
create_clock -name default -period 10
config_export -format=ip_catalog
config_export -rtl=verilog
