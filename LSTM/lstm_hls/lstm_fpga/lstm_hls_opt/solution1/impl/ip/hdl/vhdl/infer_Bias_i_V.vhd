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

entity infer_Bias_i_V_rom is 
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


architecture rtl of infer_Bias_i_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001001", 1 => "00000011", 2 => "11101001", 3 => "11101110", 
    4 => "00110100", 5 => "11110101", 6 => "11110111", 7 => "11111011", 
    8 => "11111000", 9 => "11011100", 10 => "11000000", 11 => "11111111", 
    12 => "00101100", 13 => "00011011", 14 => "11010100", 15 => "11011010", 
    16 => "00001111", 17 => "11110001", 18 => "00000001", 19 => "11110111", 
    20 => "00010111", 21 => "11001010", 22 => "11101101", 23 to 24=> "00000010", 
    25 => "11101100", 26 => "00001111", 27 => "00010111", 28 => "11110110", 
    29 => "11010110", 30 => "00000011", 31 => "11110000", 32 => "00001100", 
    33 => "00011110", 34 => "00011001", 35 => "00011000", 36 => "00001110", 
    37 => "00000101", 38 => "11110110", 39 => "00001010", 40 => "00011110", 
    41 => "00100111", 42 => "00101111", 43 to 44=> "00110111", 45 => "00011010", 
    46 => "11111100", 47 => "11111110", 48 => "11101100", 49 => "11111010", 
    50 => "11110101", 51 => "11011011", 52 => "11110001", 53 => "11101011", 
    54 => "11110000", 55 => "11101000", 56 => "11011110", 57 => "11111010", 
    58 => "11101101", 59 => "11101000", 60 => "11110101", 61 => "00100000", 
    62 => "00010111", 63 => "00000011", 64 => "11101110", 65 => "00001001", 
    66 => "00001000", 67 => "11111111", 68 => "00010110", 69 => "11111010", 
    70 => "11101110", 71 => "00001011", 72 => "11111001", 73 => "00010000", 
    74 => "11110100", 75 => "11111000", 76 => "11111010", 77 => "00010101", 
    78 => "00000010", 79 => "11110000", 80 => "00000100", 81 => "00000011", 
    82 => "00001001", 83 => "11110010", 84 => "00000011", 85 => "11110001", 
    86 => "00001100", 87 => "00000000", 88 => "11111001", 89 => "00001101", 
    90 => "11001111", 91 => "11110011", 92 => "00000010", 93 => "11110111", 
    94 => "00000000", 95 => "11110010", 96 => "00010010", 97 => "11110111", 
    98 => "00001011", 99 => "11010111", 100 => "00000000", 101 => "11101101", 
    102 => "11110001", 103 => "00000011", 104 => "00000101", 105 => "00000010", 
    106 => "11100101", 107 => "11110111", 108 => "00000010", 109 to 110=> "00000100", 
    111 => "11111001", 112 => "11111101", 113 => "11101001", 114 => "11111011", 
    115 => "00001101", 116 => "00000101", 117 => "00001001", 118 => "11111000", 
    119 => "00000101", 120 => "11111000", 121 => "11110011", 122 => "11101111", 
    123 => "11111000", 124 => "11110010", 125 => "11111010", 126 => "11111100", 
    127 => "00000101" );

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

entity infer_Bias_i_V is
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

architecture arch of infer_Bias_i_V is
    component infer_Bias_i_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    infer_Bias_i_V_rom_U :  component infer_Bias_i_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


