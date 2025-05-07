# ==============================================================
# File generated on Sun Apr 20 02:45:57 +0800 2025
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../src/main.cpp -cflags { -Wno-unknown-pragmas}
add_files bi_lstm_exit/src/weight_sparse4.h
add_files bi_lstm_exit/src/weight_sparse3.h
add_files bi_lstm_exit/src/weight_sparse2.h
add_files bi_lstm_exit/src/weight.h
add_files bi_lstm_exit/src/utils.h
add_files bi_lstm_exit/src/rnn_top.cpp
add_files bi_lstm_exit/src/rnn.h
add_files bi_lstm_exit/src/rnn.cpp
set_part xc7z020clg400-2
create_clock -name default -period 10
config_export -format=ip_catalog
config_export -rtl=verilog
