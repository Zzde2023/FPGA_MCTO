-- ==============================================================
-- File generated on Wed Apr 16 03:09:26 +0800 2025
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity infer_Bias_o_V_rom is 
    generic(
             DWIDTH     : integer := 8; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 128
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of infer_Bias_o_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00111001", 1 => "00011101", 2 => "11110001", 3 => "00000001", 
    4 => "00101001", 5 => "00101111", 6 => "00000101", 7 => "00010001", 
    8 => "00011100", 9 => "11110010", 10 => "11100100", 11 => "00000011", 
    12 => "00000110", 13 => "00100100", 14 => "00000101", 15 => "11101100", 
    16 => "00110100", 17 => "00000001", 18 => "00100110", 19 => "00001011", 
    20 => "01001011", 21 => "11001111", 22 => "00011011", 23 => "00000111", 
    24 => "11111100", 25 => "00101111", 26 => "00011010", 27 => "00000111", 
    28 => "00110110", 29 => "11110001", 30 => "00101011", 31 => "00010010", 
    32 => "00000010", 33 => "00100100", 34 => "11110110", 35 => "00001000", 
    36 => "00000101", 37 => "00101111", 38 => "11110011", 39 => "00100001", 
    40 => "00001100", 41 => "11101110", 42 => "00000010", 43 => "00001001", 
    44 => "00000000", 45 => "11100100", 46 => "00010111", 47 => "11110011", 
    48 => "00100000", 49 => "00001011", 50 => "00011000", 51 => "00001111", 
    52 => "00001011", 53 => "00001111", 54 => "00101110", 55 => "11111001", 
    56 => "11111101", 57 => "11111110", 58 => "00101110", 59 => "00000010", 
    60 => "00100101", 61 => "11111101", 62 => "11111110", 63 => "11110100", 
    64 => "00011001", 65 => "11110011", 66 => "00001110", 67 => "00001011", 
    68 => "00000001", 69 => "11111000", 70 => "11101101", 71 => "00000011", 
    72 => "00001111", 73 => "01010010", 74 => "00011000", 75 => "11110111", 
    76 => "11110101", 77 => "00000001", 78 => "00011101", 79 => "11110101", 
    80 => "11110001", 81 => "00001110", 82 => "11110011", 83 => "00000010", 
    84 => "01010010", 85 => "00001001", 86 => "00000011", 87 => "00010001", 
    88 => "11110100", 89 => "11111101", 90 => "11110100", 91 => "00001010", 
    92 => "00011010", 93 => "00011000", 94 => "11101011", 95 => "00101011", 
    96 => "00100000", 97 => "11100000", 98 => "00010110", 99 => "00000111", 
    100 => "11111111", 101 => "00000110", 102 => "00001011", 103 => "00000001", 
    104 => "00011110", 105 => "00000011", 106 => "00010101", 107 => "00001000", 
    108 => "00010111", 109 => "00000101", 110 => "00001110", 111 => "00011110", 
    112 => "00001110", 113 => "00000101", 114 => "00100011", 115 => "00010000", 
    116 => "00011100", 117 => "11100111", 118 => "00010101", 119 => "11111000", 
    120 => "00011101", 121 => "00010110", 122 => "11111101", 123 => "00001010", 
    124 => "11111101", 125 => "00001101", 126 => "00000000", 127 => "00100111" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity infer_Bias_o_V is
    generic (
        DataWidth : INTEGER := 8;
        AddressRange : INTEGER := 128;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of infer_Bias_o_V is
    component infer_Bias_o_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    infer_Bias_o_V_rom_U :  component infer_Bias_o_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


