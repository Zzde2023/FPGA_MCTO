# ==============================================================
# File generated on Sat Apr 19 02:00:12 +0800 2025
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../test/main.cpp -cflags { -I../../../src  -Wno-unknown-pragmas}
add_files bi_lstm/src/weight_sparse.h
add_files bi_lstm/src/weight.h
add_files bi_lstm/src/utils.h
add_files bi_lstm/test/test_data.h
add_files bi_lstm/src/rnn_top.cpp
add_files bi_lstm/src/rnn.h
add_files bi_lstm/src/rnn.cpp
set_part xc7z020clg400-2
create_clock -name default -period 10
config_export -format=ip_catalog
config_export -rtl=verilog
