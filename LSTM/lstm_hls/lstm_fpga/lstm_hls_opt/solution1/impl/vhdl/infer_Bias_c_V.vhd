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

entity infer_Bias_c_V_rom is 
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


architecture rtl of infer_Bias_c_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011011", 1 => "11110001", 2 => "00011101", 3 => "00001100", 
    4 => "00101110", 5 => "00001110", 6 => "11110011", 7 => "11110010", 
    8 => "11100010", 9 => "00010001", 10 => "11110001", 11 => "11111000", 
    12 => "11111110", 13 => "11101000", 14 => "11100011", 15 => "00000111", 
    16 => "11111000", 17 => "11111001", 18 => "11111110", 19 => "00001110", 
    20 => "00000001", 21 => "00010011", 22 => "00000010", 23 => "11111100", 
    24 => "00000100", 25 => "11110100", 26 => "11000110", 27 => "11100010", 
    28 => "00001110", 29 => "11111000", 30 => "00010001", 31 => "11110000", 
    32 => "00001010", 33 => "00000101", 34 => "00001001", 35 => "11101010", 
    36 => "11110100", 37 => "00001111", 38 => "00000000", 39 => "00001101", 
    40 => "11110111", 41 => "00010010", 42 => "11111110", 43 => "00000111", 
    44 => "00001010", 45 => "11101101", 46 => "00011010", 47 => "00011111", 
    48 => "00000001", 49 => "11101100", 50 => "00000001", 51 => "00000011", 
    52 => "11110001", 53 => "00000011", 54 => "11101101", 55 => "00000010", 
    56 => "00011011", 57 => "00001010", 58 => "11110111", 59 => "11101101", 
    60 => "00000011", 61 => "11101110", 62 => "11110010", 63 => "11111001", 
    64 => "11110010", 65 => "11110100", 66 => "11111000", 67 => "00000000", 
    68 => "11111110", 69 => "11111101", 70 => "11111010", 71 => "00001011", 
    72 => "11010110", 73 => "11110110", 74 => "00101001", 75 => "00000001", 
    76 => "11010010", 77 => "11111001", 78 => "00011101", 79 => "00001011", 
    80 => "00000111", 81 => "00001011", 82 => "00001010", 83 => "00010001", 
    84 => "00010000", 85 => "11111001", 86 => "00011001", 87 to 88=> "00010000", 
    89 => "00000110", 90 => "00010010", 91 => "11111011", 92 => "00010010", 
    93 => "00001110", 94 => "11101100", 95 => "00000100", 96 => "00000001", 
    97 => "11100011", 98 => "00001001", 99 => "11111010", 100 => "11111011", 
    101 => "00011100", 102 => "11110011", 103 => "11111111", 104 => "11100100", 
    105 => "11110011", 106 => "00001100", 107 => "00000001", 108 => "00010001", 
    109 => "11001111", 110 => "00000100", 111 => "00000001", 112 => "00100001", 
    113 => "11101000", 114 => "00000000", 115 => "00001011", 116 => "00000101", 
    117 => "00001000", 118 => "11101111", 119 => "11110110", 120 => "11111100", 
    121 => "11110010", 122 => "11111100", 123 => "00001110", 124 => "00000101", 
    125 => "00001000", 126 => "11111010", 127 => "00001111" );

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

entity infer_Bias_c_V is
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

architecture arch of infer_Bias_c_V is
    component infer_Bias_c_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    infer_Bias_c_V_rom_U :  component infer_Bias_c_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


