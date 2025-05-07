-- (c) Copyright 1995-2025 Xilinx, Inc. All rights reserved.
-- 
-- This file contains confidential and proprietary information
-- of Xilinx, Inc. and is protected under U.S. and
-- international copyright and other intellectual property
-- laws.
-- 
-- DISCLAIMER
-- This disclaimer is not a license and does not grant any
-- rights to the materials distributed herewith. Except as
-- otherwise provided in a valid license issued to you by
-- Xilinx, and to the maximum extent permitted by applicable
-- law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
-- WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
-- AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
-- BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
-- INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
-- (2) Xilinx shall not be liable (whether in contract or tort,
-- including negligence, or under any other theory of
-- liability) for any loss or damage of any kind or nature
-- related to, arising under or in connection with these
-- materials, including for any direct, or any indirect,
-- special, incidental, or consequential loss or damage
-- (including loss of data, profits, goodwill, or any type of
-- loss or damage suffered as a result of any action brought
-- by a third party) even if such damage or loss was
-- reasonably foreseeable or Xilinx had been advised of the
-- possibility of the same.
-- 
-- CRITICAL APPLICATIONS
-- Xilinx products are not designed or intended to be fail-
-- safe, or for use in any application requiring fail-safe
-- performance, such as life-support or safety devices or
-- systems, Class III medical devices, nuclear facilities,
-- applications related to the deployment of airbags, or any
-- other applications that could lead to death, personal
-- injury, or severe property or environmental damage
-- (individually and collectively, "Critical
-- Applications"). Customer assumes the sole risk and
-- liability of any use of Xilinx products in Critical
-- Applications, subject only to applicable laws and
-- regulations governing limitations on product liability.
-- 
-- THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
-- PART OF THIS FILE AT ALL TIMES.
-- 
-- DO NOT MODIFY THIS FILE.

-- IP VLNV: xilinx.com:hls:BiLSTM_Top:1.0
-- IP Revision: 2114047726

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY design_1_BiLSTM_Top_0_0 IS
  PORT (
    ap_clk : IN STD_LOGIC;
    ap_rst_n : IN STD_LOGIC;
    input_stream_TVALID : IN STD_LOGIC;
    input_stream_TREADY : OUT STD_LOGIC;
    input_stream_TDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    input_stream_TDEST : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    input_stream_TKEEP : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    input_stream_TSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    input_stream_TUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    input_stream_TLAST : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    input_stream_TID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    output_stream_TVALID : OUT STD_LOGIC;
    output_stream_TREADY : IN STD_LOGIC;
    output_stream_TDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    output_stream_TDEST : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
    output_stream_TKEEP : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    output_stream_TSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    output_stream_TUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
    output_stream_TLAST : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
    output_stream_TID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0)
  );
END design_1_BiLSTM_Top_0_0;

ARCHITECTURE design_1_BiLSTM_Top_0_0_arch OF design_1_BiLSTM_Top_0_0 IS
  ATTRIBUTE DowngradeIPIdentifiedWarnings : STRING;
  ATTRIBUTE DowngradeIPIdentifiedWarnings OF design_1_BiLSTM_Top_0_0_arch: ARCHITECTURE IS "yes";
  COMPONENT BiLSTM_Top IS
    PORT (
      ap_clk : IN STD_LOGIC;
      ap_rst_n : IN STD_LOGIC;
      input_stream_TVALID : IN STD_LOGIC;
      input_stream_TREADY : OUT STD_LOGIC;
      input_stream_TDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      input_stream_TDEST : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      input_stream_TKEEP : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
      input_stream_TSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
      input_stream_TUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      input_stream_TLAST : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      input_stream_TID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      output_stream_TVALID : OUT STD_LOGIC;
      output_stream_TREADY : IN STD_LOGIC;
      output_stream_TDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      output_stream_TDEST : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      output_stream_TKEEP : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      output_stream_TSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      output_stream_TUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      output_stream_TLAST : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      output_stream_TID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0)
    );
  END COMPONENT BiLSTM_Top;
  ATTRIBUTE IP_DEFINITION_SOURCE : STRING;
  ATTRIBUTE IP_DEFINITION_SOURCE OF design_1_BiLSTM_Top_0_0_arch: ARCHITECTURE IS "HLS";
  ATTRIBUTE X_INTERFACE_INFO : STRING;
  ATTRIBUTE X_INTERFACE_PARAMETER : STRING;
  ATTRIBUTE X_INTERFACE_INFO OF output_stream_TID: SIGNAL IS "xilinx.com:interface:axis:1.0 output_stream TID";
  ATTRIBUTE X_INTERFACE_INFO OF output_stream_TLAST: SIGNAL IS "xilinx.com:interface:axis:1.0 output_stream TLAST";
  ATTRIBUTE X_INTERFACE_INFO OF output_stream_TUSER: SIGNAL IS "xilinx.com:interface:axis:1.0 output_stream TUSER";
  ATTRIBUTE X_INTERFACE_INFO OF output_stream_TSTRB: SIGNAL IS "xilinx.com:interface:axis:1.0 output_stream TSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF output_stream_TKEEP: SIGNAL IS "xilinx.com:interface:axis:1.0 output_stream TKEEP";
  ATTRIBUTE X_INTERFACE_INFO OF output_stream_TDEST: SIGNAL IS "xilinx.com:interface:axis:1.0 output_stream TDEST";
  ATTRIBUTE X_INTERFACE_INFO OF output_stream_TDATA: SIGNAL IS "xilinx.com:interface:axis:1.0 output_stream TDATA";
  ATTRIBUTE X_INTERFACE_INFO OF output_stream_TREADY: SIGNAL IS "xilinx.com:interface:axis:1.0 output_stream TREADY";
  ATTRIBUTE X_INTERFACE_PARAMETER OF output_stream_TVALID: SIGNAL IS "XIL_INTERFACENAME output_stream, TDATA_NUM_BYTES 4, TDEST_WIDTH 1, TID_WIDTH 1, TUSER_WIDTH 1, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}} TDATA {datatype {name {attribs {res" & 
"olve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 32} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value false}}}} TDATA_WIDTH 32 TUSER {datatype {name {attribs {resolve_type immediate dependency {} format string minim" & 
"um {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value false}}}} TUSER_WIDTH 1}, HAS_TREADY 1, HAS_TSTRB 1, HAS_TKEEP 1, HAS_TLAST 1, FREQ_HZ 5e+07, PHASE 0.000, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, INSERT" & 
"_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF output_stream_TVALID: SIGNAL IS "xilinx.com:interface:axis:1.0 output_stream TVALID";
  ATTRIBUTE X_INTERFACE_INFO OF input_stream_TID: SIGNAL IS "xilinx.com:interface:axis:1.0 input_stream TID";
  ATTRIBUTE X_INTERFACE_INFO OF input_stream_TLAST: SIGNAL IS "xilinx.com:interface:axis:1.0 input_stream TLAST";
  ATTRIBUTE X_INTERFACE_INFO OF input_stream_TUSER: SIGNAL IS "xilinx.com:interface:axis:1.0 input_stream TUSER";
  ATTRIBUTE X_INTERFACE_INFO OF input_stream_TSTRB: SIGNAL IS "xilinx.com:interface:axis:1.0 input_stream TSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF input_stream_TKEEP: SIGNAL IS "xilinx.com:interface:axis:1.0 input_stream TKEEP";
  ATTRIBUTE X_INTERFACE_INFO OF input_stream_TDEST: SIGNAL IS "xilinx.com:interface:axis:1.0 input_stream TDEST";
  ATTRIBUTE X_INTERFACE_INFO OF input_stream_TDATA: SIGNAL IS "xilinx.com:interface:axis:1.0 input_stream TDATA";
  ATTRIBUTE X_INTERFACE_INFO OF input_stream_TREADY: SIGNAL IS "xilinx.com:interface:axis:1.0 input_stream TREADY";
  ATTRIBUTE X_INTERFACE_PARAMETER OF input_stream_TVALID: SIGNAL IS "XIL_INTERFACENAME input_stream, TDATA_NUM_BYTES 4, TDEST_WIDTH 1, TID_WIDTH 1, TUSER_WIDTH 1, LAYERED_METADATA undef, HAS_TREADY 1, HAS_TSTRB 1, HAS_TKEEP 1, HAS_TLAST 1, FREQ_HZ 5e+07, PHASE 0.000, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF input_stream_TVALID: SIGNAL IS "xilinx.com:interface:axis:1.0 input_stream TVALID";
  ATTRIBUTE X_INTERFACE_PARAMETER OF ap_rst_n: SIGNAL IS "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {RST {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF ap_rst_n: SIGNAL IS "xilinx.com:signal:reset:1.0 ap_rst_n RST";
  ATTRIBUTE X_INTERFACE_PARAMETER OF ap_clk: SIGNAL IS "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF input_stream:output_stream, ASSOCIATED_RESET ap_rst_n, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 5e+07, PHASE 0.000, CL" & 
"K_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF ap_clk: SIGNAL IS "xilinx.com:signal:clock:1.0 ap_clk CLK";
BEGIN
  U0 : BiLSTM_Top
    PORT MAP (
      ap_clk => ap_clk,
      ap_rst_n => ap_rst_n,
      input_stream_TVALID => input_stream_TVALID,
      input_stream_TREADY => input_stream_TREADY,
      input_stream_TDATA => input_stream_TDATA,
      input_stream_TDEST => input_stream_TDEST,
      input_stream_TKEEP => input_stream_TKEEP,
      input_stream_TSTRB => input_stream_TSTRB,
      input_stream_TUSER => input_stream_TUSER,
      input_stream_TLAST => input_stream_TLAST,
      input_stream_TID => input_stream_TID,
      output_stream_TVALID => output_stream_TVALID,
      output_stream_TREADY => output_stream_TREADY,
      output_stream_TDATA => output_stream_TDATA,
      output_stream_TDEST => output_stream_TDEST,
      output_stream_TKEEP => output_stream_TKEEP,
      output_stream_TSTRB => output_stream_TSTRB,
      output_stream_TUSER => output_stream_TUSER,
      output_stream_TLAST => output_stream_TLAST,
      output_stream_TID => output_stream_TID
    );
END design_1_BiLSTM_Top_0_0_arch;
