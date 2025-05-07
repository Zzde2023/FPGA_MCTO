# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 10
set hasByteEnable 0
set MemName Block_proc_data_lbkb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 7
set AddrRange 300
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "0011110" "0011011" "0100001" "0100100" "0100010" "0101001" "0011100" "0011000" "0101101" "0100111" "0101011" "0100011" "0010011" "0010001" "0011011" "0011001" "0100100" "0100000" "0010011" "0100110" "0101101" "0011101" "0100111" "0010111" "0100111" "0011111" "0010011" "0011110" "0011111" "0011010" "0100111" "0011001" "0101110" "0011111" "0101100" "1010001" "0010111" "0100110" "0010101" "0011100" "0011111" "0101100" "0100001" "0011111" "0100000" "0010110" "0011100" "0100110" "0010100" "0011111" "0100101" "0101011" "0101110" "0100010" "0010111" "0011011" "0100011" "0011111" "0100101" "0100111" "0100111" "0101010" "0101011" "0100001" "0011100" "0111100" "0100000" "0010110" "0010101" "0100100" "0101001" "0101100" "0110101" "0111000" "0100100" "0011001" "0100100" "0101001" "0010101" "0011111" "0100100" "0011101" "0100111" "0110011" "0101100" "0011100" "0011010" "0100100" "0111000" "0011101" "0011111" "0100011" "0101100" "0100010" "0101001" "0011101" "0011100" "0110001" "0111111" "0101101" "0100011" "0011001" "0100101" "0100010" "0011110" "0010110" "0110010" "0011010" "0011100" "0011000" "0111001" "0010000" "0010101" "0011000" "0011101" "0011100" "0101010" "0010110" "0011100" "0101000" "0100000" "0011000" "0011011" "0110110" "0101001" "0101001" "0101110" "0100000" "0010110" "0011010" "0010110" "0010000" "0110110" "0101011" "0101010" "0100100" "0011001" "0011111" "0100001" "0011101" "0010111" "0010101" "0100101" "0011101" "0100110" "0100011" "0001111" "0101110" "0100000" "0110111" "0100011" "0101111" "0011111" "0011100" "0100001" "0011101" "0010110" "0100101" "0100011" "0100101" "0010110" "0100100" "0010100" "0101000" "0101110" "0011101" "0110000" "0101011" "0010110" "0011011" "0010110" "0100011" "0011111" "0110100" "0100000" "0011100" "0010010" "0100000" "0100111" "0101010" "0100111" "0011010" "0011001" "0011110" "0100100" "0100110" "0011001" "0100100" "0100001" "0011100" "0010110" "0100111" "0011101" "0011011" "0011101" "0100001" "0100010" "0110010" "0100010" "0100010" "0101001" "0110010" "0110100" "0101010" "0100011" "0101111" "0101000" "0011100" "0101001" "0011010" "0011010" "0100001" "0100010" "0010000" "0101000" "0010101" "0101111" "0011100" "0100101" "0110000" "0101011" "0101000" "0101010" "0011011" "0100100" "0101010" "0011100" "0011000" "0011001" "0010111" "0101111" "0011011" "0011100" "0010111" "0011101" "0100000" "0011010" "0100000" "0101100" "0100101" "0100100" "0100001" "0100000" "0011111" "0100110" "0100000" "0100011" "0100000" "0101111" "0110011" "0101001" "0011000" "0100101" "0011110" "0101011" "0101001" "0101001" "0101111" "0100001" "0100010" "0100001" "0101010" "0011010" "0011110" "0100000" "0011000" "0011001" "0101100" "0011011" "0011101" "0010110" "0111111" "0011010" "0011101" "0101010" "0010101" "0100010" "0100110" "0110110" "0100011" "0011011" "0011110" "0010101" "0100110" "0111100" "0101001" "0100111" "0011011" "0100001" "0110011" "0101000" "0011011" "0110000" "0101011" "0100110" "0101011" "0010100" "0100001" "0100001" "0100011" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.771
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 11 \
    name input_stream_V_data_V \
    reset_level 1 \
    sync_rst true \
    corename {input_stream} \
    metadata {  } \
    op interface \
    ports { input_stream_TDATA { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_stream_V_data_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 12 \
    name input_stream_V_keep_V \
    reset_level 1 \
    sync_rst true \
    corename {input_stream} \
    metadata {  } \
    op interface \
    ports { input_stream_TKEEP { I 4 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_stream_V_keep_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 13 \
    name input_stream_V_strb_V \
    reset_level 1 \
    sync_rst true \
    corename {input_stream} \
    metadata {  } \
    op interface \
    ports { input_stream_TSTRB { I 4 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_stream_V_strb_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 14 \
    name input_stream_V_user_V \
    reset_level 1 \
    sync_rst true \
    corename {input_stream} \
    metadata {  } \
    op interface \
    ports { input_stream_TUSER { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_stream_V_user_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 15 \
    name input_stream_V_last_V \
    reset_level 1 \
    sync_rst true \
    corename {input_stream} \
    metadata {  } \
    op interface \
    ports { input_stream_TLAST { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_stream_V_last_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 16 \
    name input_stream_V_id_V \
    reset_level 1 \
    sync_rst true \
    corename {input_stream} \
    metadata {  } \
    op interface \
    ports { input_stream_TID { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_stream_V_id_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 17 \
    name input_stream_V_dest_V \
    reset_level 1 \
    sync_rst true \
    corename {input_stream} \
    metadata {  } \
    op interface \
    ports { input_stream_TVALID { I 1 bit } input_stream_TREADY { O 1 bit } input_stream_TDEST { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_stream_V_dest_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 18 \
    name input_ping \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename input_ping \
    op interface \
    ports { input_ping_address0 { O 12 vector } input_ping_ce0 { O 1 bit } input_ping_we0 { O 1 bit } input_ping_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_ping'"
}
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
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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
    ports { ap_return { O 7 vector } } \
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


