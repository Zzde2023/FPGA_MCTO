# This script segment is generated automatically by AutoPilot

set id 1
set name LSTM_Top_dcmp_64nbkb
set corename simcore_dcmp
set op dcmp
set stage_num 1
set max_latency -1
set registered_input 1
set Futype4reduceCEFanout 1
set in0_width 64
set in0_signed 0
set in1_width 64
set in1_signed 0
set opcode_width 5
set opcode_signed 0
set out_width 1
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_dcmp] == "ap_gen_simcore_dcmp"} {
eval "ap_gen_simcore_dcmp { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    opcode_width ${opcode_width} \
    opcode_signed ${opcode_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_dcmp, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op dcmp
set corename DCmp
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    opcode_width ${opcode_width} \
    opcode_signed ${opcode_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name x_prev_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename x_prev_V \
    op interface \
    ports { x_prev_V_address0 { O 8 vector } x_prev_V_ce0 { O 1 bit } x_prev_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'x_prev_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4 \
    name x_t_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_0_V_read \
    op interface \
    ports { x_t_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name x_t_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_1_V_read \
    op interface \
    ports { x_t_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
    name x_t_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_2_V_read \
    op interface \
    ports { x_t_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 7 \
    name x_t_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_3_V_read \
    op interface \
    ports { x_t_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8 \
    name x_t_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_4_V_read \
    op interface \
    ports { x_t_4_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
    name x_t_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_5_V_read \
    op interface \
    ports { x_t_5_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 10 \
    name x_t_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_6_V_read \
    op interface \
    ports { x_t_6_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 11 \
    name x_t_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_7_V_read \
    op interface \
    ports { x_t_7_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 12 \
    name x_t_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_8_V_read \
    op interface \
    ports { x_t_8_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 13 \
    name x_t_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_9_V_read \
    op interface \
    ports { x_t_9_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 14 \
    name x_t_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_10_V_read \
    op interface \
    ports { x_t_10_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name x_t_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_11_V_read \
    op interface \
    ports { x_t_11_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 16 \
    name x_t_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_12_V_read \
    op interface \
    ports { x_t_12_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 17 \
    name x_t_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_13_V_read \
    op interface \
    ports { x_t_13_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 18 \
    name x_t_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_14_V_read \
    op interface \
    ports { x_t_14_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name x_t_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_15_V_read \
    op interface \
    ports { x_t_15_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name x_t_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_16_V_read \
    op interface \
    ports { x_t_16_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name x_t_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_17_V_read \
    op interface \
    ports { x_t_17_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 22 \
    name x_t_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_18_V_read \
    op interface \
    ports { x_t_18_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 23 \
    name x_t_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_19_V_read \
    op interface \
    ports { x_t_19_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 24 \
    name x_t_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_20_V_read \
    op interface \
    ports { x_t_20_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 25 \
    name x_t_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_21_V_read \
    op interface \
    ports { x_t_21_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 26 \
    name x_t_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_22_V_read \
    op interface \
    ports { x_t_22_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 27 \
    name x_t_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_23_V_read \
    op interface \
    ports { x_t_23_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 28 \
    name x_t_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_24_V_read \
    op interface \
    ports { x_t_24_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 29 \
    name x_t_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_25_V_read \
    op interface \
    ports { x_t_25_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 30 \
    name x_t_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_26_V_read \
    op interface \
    ports { x_t_26_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 31 \
    name x_t_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_t_27_V_read \
    op interface \
    ports { x_t_27_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


