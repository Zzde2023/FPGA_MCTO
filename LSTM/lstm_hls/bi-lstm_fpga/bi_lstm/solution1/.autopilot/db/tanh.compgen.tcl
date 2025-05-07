# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 38
set hasByteEnable 0
set MemName tanh_tanh_lut_V163
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 16
set AddrRange 256
set AddrWd 8
set impl_style block
set TrueReset 0
set IsROM 1
set ROMData { "1000000000010101" "1000000000010111" "1000000000011000" "1000000000011010" "1000000000011100" "1000000000011110" "1000000000100000" "1000000000100010" "1000000000100100" "1000000000100110" "1000000000101001" "1000000000101011" "1000000000101110" "1000000000110001" "1000000000110100" "1000000000111000" "1000000000111011" "1000000000111111" "1000000001000011" "1000000001001000" "1000000001001101" "1000000001010010" "1000000001010111" "1000000001011100" "1000000001100010" "1000000001101001" "1000000001110000" "1000000001110111" "1000000001111111" "1000000010000111" "1000000010010000" "1000000010011001" "1000000010100011" "1000000010101101" "1000000010111001" "1000000011000101" "1000000011010001" "1000000011011111" "1000000011101101" "1000000011111101" "1000000100001101" "1000000100011110" "1000000100110001" "1000000101000100" "1000000101011001" "1000000101110000" "1000000110000111" "1000000110100000" "1000000110111011" "1000000111011000" "1000000111110110" "1000001000010110" "1000001000111001" "1000001001011101" "1000001010000100" "1000001010101101" "1000001011011001" "1000001100001000" "1000001100111010" "1000001101101111" "1000001110100111" "1000001111100010" "1000010000100010" "1000010001100101" "1000010010101101" "1000010011111001" "1000010101001001" "1000010110011111" "1000010111111010" "1000011001011011" "1000011011000001" "1000011100101110" "1000011110100010" "1000100000011100" "1000100010011110" "1000100100101000" "1000100110111010" "1000101001010101" "1000101011111001" "1000101110100110" "1000110001011110" "1000110100100001" "1000110111101111" "1000111011001000" "1000111110101110" "1001000010100001" "1001000110100010" "1001001010110001" "1001001111001111" "1001010011111100" "1001011000111010" "1001011110001001" "1001100011101001" "1001101001011011" "1001101111100001" "1001110101111010" "1001111100100111" "1010000011101001" "1010001011000001" "1010010010101110" "1010011010110010" "1010100011001110" "1010101100000000" "1010110101001011" "1010111110101110" "1011001000101010" "1011010010111110" "1011011101101011" "1011101000110001" "1011110100001111" "1100000000000111" "1100001100010110" "1100011000111101" "1100100101111011" "1100110011010000" "1101000000111010" "1101001110111001" "1101011101001100" "1101101011110001" "1101111010100111" "1110001001101101" "1110011001000001" "1110101000100001" "1110111000001100" "1111001000000000" "1111010111111011" "1111100111111011" "1111110111111110" "0000001000000001" "0000011000000100" "0000101000000100" "0000110111111111" "0001000111110011" "0001010111011110" "0001100110111110" "0001110110010010" "0010000101011000" "0010010100001110" "0010100010110011" "0010110001000110" "0010111111000101" "0011001100101111" "0011011010000100" "0011100111000010" "0011110011101001" "0011111111111000" "0100001011110000" "0100010111001110" "0100100010010100" "0100101101000001" "0100110111010101" "0101000001010001" "0101001010110100" "0101010011111111" "0101011100110001" "0101100101001101" "0101101101010001" "0101110100111110" "0101111100010110" "0110000011011000" "0110001010000101" "0110010000011110" "0110010110100100" "0110011100010110" "0110100001110110" "0110100111000101" "0110101100000011" "0110110000110000" "0110110101001110" "0110111001011101" "0110111101011110" "0111000001010001" "0111000100110111" "0111001000010000" "0111001011011110" "0111001110100001" "0111010001011001" "0111010100000110" "0111010110101010" "0111011001000101" "0111011011010111" "0111011101100001" "0111011111100011" "0111100001011101" "0111100011010001" "0111100100111110" "0111100110100100" "0111101000000101" "0111101001100000" "0111101010110110" "0111101100000110" "0111101101010010" "0111101110011010" "0111101111011101" "0111110000011101" "0111110001011000" "0111110010010000" "0111110011000101" "0111110011110111" "0111110100100110" "0111110101010010" "0111110101111011" "0111110110100010" "0111110111000110" "0111110111101001" "0111111000001001" "0111111000100111" "0111111001000100" "0111111001011111" "0111111001111000" "0111111010001111" "0111111010100110" "0111111010111011" "0111111011001110" "0111111011100001" "0111111011110010" "0111111100000010" "0111111100010010" "0111111100100000" "0111111100101110" "0111111100111010" "0111111101000110" "0111111101010010" "0111111101011100" "0111111101100110" "0111111101101111" "0111111101111000" "0111111110000000" "0111111110001000" "0111111110001111" "0111111110010110" "0111111110011101" "0111111110100011" "0111111110101000" "0111111110101101" "0111111110110010" "0111111110110111" "0111111110111100" "0111111111000000" "0111111111000100" "0111111111000111" "0111111111001011" "0111111111001110" "0111111111010001" "0111111111010100" "0111111111010110" "0111111111011001" "0111111111011011" "0111111111011101" "0111111111011111" "0111111111100001" "0111111111100011" "0111111111100101" "0111111111100111" "0111111111101000" "0111111111101010" }
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
    id 39 \
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
    id 40 \
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
    id 41 \
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
    id 42 \
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
    id 43 \
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
    id 44 \
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
    id 45 \
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
    id 46 \
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


