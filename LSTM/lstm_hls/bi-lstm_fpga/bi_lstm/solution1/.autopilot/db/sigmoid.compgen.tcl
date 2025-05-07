# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 29
set hasByteEnable 0
set MemName sigmoid_sigmoid_ldEe
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 15
set AddrRange 256
set AddrWd 8
set impl_style block
set TrueReset 0
set IsROM 1
set ROMData { "000000000001010" "000000000001011" "000000000001100" "000000000001101" "000000000001110" "000000000001111" "000000000010000" "000000000010001" "000000000010010" "000000000010011" "000000000010100" "000000000010101" "000000000010111" "000000000011000" "000000000011010" "000000000011100" "000000000011101" "000000000011111" "000000000100001" "000000000100100" "000000000100110" "000000000101000" "000000000101011" "000000000101110" "000000000110001" "000000000110100" "000000000111000" "000000000111011" "000000000111111" "000000001000011" "000000001001000" "000000001001100" "000000001010001" "000000001010110" "000000001011100" "000000001100010" "000000001101000" "000000001101111" "000000001110110" "000000001111110" "000000010000110" "000000010001111" "000000010011000" "000000010100010" "000000010101100" "000000010111000" "000000011000011" "000000011010000" "000000011011101" "000000011101100" "000000011111011" "000000100001011" "000000100011100" "000000100101110" "000000101000010" "000000101010110" "000000101101100" "000000110000100" "000000110011101" "000000110110111" "000000111010011" "000000111110001" "000001000010001" "000001000110010" "000001001010110" "000001001111100" "000001010100100" "000001011001111" "000001011111101" "000001100101101" "000001101100000" "000001110010111" "000001111010001" "000010000001110" "000010001001111" "000010010010100" "000010011011101" "000010100101010" "000010101111100" "000010111010011" "000011000101111" "000011010010000" "000011011110111" "000011101100100" "000011111010111" "000100001010000" "000100011010001" "000100101011000" "000100111100111" "000101001111110" "000101100011101" "000101111000100" "000110001110100" "000110100101101" "000110111110000" "000111010111101" "000111110010011" "001000001110100" "001000101100000" "001001001010111" "001001101011001" "001010001100111" "001010110000000" "001011010100101" "001011111010111" "001100100010101" "001101001011111" "001101110110101" "001110100011000" "001111010000111" "010000000000011" "010000110001011" "010001100011110" "010010010111101" "010011001101000" "010100000011101" "010100111011100" "010101110100110" "010110101111000" "010111101010011" "011000100110110" "011001100100000" "011010100010000" "011011100000110" "011100100000000" "011101011111101" "011110011111101" "011111011111111" "100000100000000" "100001100000010" "100010100000010" "100011011111111" "100100011111001" "100101011101111" "100110011011111" "100111011001001" "101000010101100" "101001010000111" "101010001011001" "101011000100011" "101011111100010" "101100110010111" "101101101000010" "101110011100001" "101111001110100" "101111111111100" "110000101111000" "110001011100111" "110010001001010" "110010110100000" "110011011101010" "110100000101000" "110100101011010" "110101001111111" "110101110011000" "110110010100110" "110110110101000" "110111010011111" "110111110001011" "111000001101100" "111000101000010" "111001000001111" "111001011010010" "111001110001011" "111010000111011" "111010011100010" "111010110000001" "111011000011000" "111011010100111" "111011100101110" "111011110101111" "111100000101000" "111100010011011" "111100100001000" "111100101101111" "111100111010000" "111101000101100" "111101010000011" "111101011010101" "111101100100010" "111101101101011" "111101110110000" "111101111110001" "111110000101110" "111110001101000" "111110010011111" "111110011010010" "111110100000010" "111110100110000" "111110101011011" "111110110000011" "111110110101001" "111110111001101" "111110111101110" "111111000001110" "111111000101100" "111111001001000" "111111001100010" "111111001111011" "111111010010011" "111111010101001" "111111010111101" "111111011010001" "111111011100011" "111111011110100" "111111100000100" "111111100010011" "111111100100010" "111111100101111" "111111100111100" "111111101000111" "111111101010011" "111111101011101" "111111101100111" "111111101110000" "111111101111001" "111111110000001" "111111110001001" "111111110010000" "111111110010111" "111111110011101" "111111110100011" "111111110101001" "111111110101110" "111111110110011" "111111110110111" "111111110111100" "111111111000000" "111111111000100" "111111111000111" "111111111001011" "111111111001110" "111111111010001" "111111111010100" "111111111010111" "111111111011001" "111111111011011" "111111111011110" "111111111100000" "111111111100010" "111111111100011" "111111111100101" "111111111100111" "111111111101000" "111111111101010" "111111111101011" "111111111101100" "111111111101101" "111111111101110" "111111111101111" "111111111110000" "111111111110001" "111111111110010" "111111111110011" "111111111110100" "111111111110101" }
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
    style ${impl_style} \
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


set CoreName ROM_1P_BRAM
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
    style ${impl_style} \
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

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name res_0_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename res_0_V \
    op interface \
    ports { res_0_V_address0 { O 3 vector } res_0_V_ce0 { O 1 bit } res_0_V_we0 { O 1 bit } res_0_V_d0 { O 16 vector } res_0_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'res_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name res_1_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename res_1_V \
    op interface \
    ports { res_1_V_address0 { O 3 vector } res_1_V_ce0 { O 1 bit } res_1_V_we0 { O 1 bit } res_1_V_d0 { O 16 vector } res_1_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'res_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name res_2_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename res_2_V \
    op interface \
    ports { res_2_V_address0 { O 3 vector } res_2_V_ce0 { O 1 bit } res_2_V_we0 { O 1 bit } res_2_V_d0 { O 16 vector } res_2_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'res_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name res_3_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename res_3_V \
    op interface \
    ports { res_3_V_address0 { O 3 vector } res_3_V_ce0 { O 1 bit } res_3_V_we0 { O 1 bit } res_3_V_d0 { O 16 vector } res_3_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'res_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name res_4_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename res_4_V \
    op interface \
    ports { res_4_V_address0 { O 3 vector } res_4_V_ce0 { O 1 bit } res_4_V_we0 { O 1 bit } res_4_V_d0 { O 16 vector } res_4_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'res_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name res_5_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename res_5_V \
    op interface \
    ports { res_5_V_address0 { O 3 vector } res_5_V_ce0 { O 1 bit } res_5_V_we0 { O 1 bit } res_5_V_d0 { O 16 vector } res_5_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'res_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name res_6_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename res_6_V \
    op interface \
    ports { res_6_V_address0 { O 3 vector } res_6_V_ce0 { O 1 bit } res_6_V_we0 { O 1 bit } res_6_V_d0 { O 16 vector } res_6_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'res_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name res_7_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename res_7_V \
    op interface \
    ports { res_7_V_address0 { O 3 vector } res_7_V_ce0 { O 1 bit } res_7_V_we0 { O 1 bit } res_7_V_d0 { O 16 vector } res_7_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'res_7_V'"
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
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
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
    id -3 \
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


