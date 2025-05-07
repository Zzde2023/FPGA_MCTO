-- ==============================================================
-- File generated on Sun Apr 27 23:37:31 +0800 2025
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
             DWIDTH     : integer := 7; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 128
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          addr1      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce1       : in std_logic; 
          q1         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of infer_Bias_i_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001001", 1 => "0000011", 2 => "1101001", 3 => "1101110", 
    4 => "0110100", 5 => "1110101", 6 => "1110111", 7 => "1111011", 
    8 => "1111000", 9 => "1011100", 10 => "1000000", 11 => "1111111", 
    12 => "0101100", 13 => "0011011", 14 => "1010100", 15 => "1011010", 
    16 => "0001111", 17 => "1110001", 18 => "0000001", 19 => "1110111", 
    20 => "0010111", 21 => "1001010", 22 => "1101101", 23 to 24=> "0000010", 
    25 => "1101100", 26 => "0001111", 27 => "0010111", 28 => "1110110", 
    29 => "1010110", 30 => "0000011", 31 => "1110000", 32 => "0001100", 
    33 => "0011110", 34 => "0011001", 35 => "0011000", 36 => "0001110", 
    37 => "0000101", 38 => "1110110", 39 => "0001010", 40 => "0011110", 
    41 => "0100111", 42 => "0101111", 43 to 44=> "0110111", 45 => "0011010", 
    46 => "1111100", 47 => "1111110", 48 => "1101100", 49 => "1111010", 
    50 => "1110101", 51 => "1011011", 52 => "1110001", 53 => "1101011", 
    54 => "1110000", 55 => "1101000", 56 => "1011110", 57 => "1111010", 
    58 => "1101101", 59 => "1101000", 60 => "1110101", 61 => "0100000", 
    62 => "0010111", 63 => "0000011", 64 => "1101110", 65 => "0001001", 
    66 => "0001000", 67 => "1111111", 68 => "0010110", 69 => "1111010", 
    70 => "1101110", 71 => "0001011", 72 => "1111001", 73 => "0010000", 
    74 => "1110100", 75 => "1111000", 76 => "1111010", 77 => "0010101", 
    78 => "0000010", 79 => "1110000", 80 => "0000100", 81 => "0000011", 
    82 => "0001001", 83 => "1110010", 84 => "0000011", 85 => "1110001", 
    86 => "0001100", 87 => "0000000", 88 => "1111001", 89 => "0001101", 
    90 => "1001111", 91 => "1110011", 92 => "0000010", 93 => "1110111", 
    94 => "0000000", 95 => "1110010", 96 => "0010010", 97 => "1110111", 
    98 => "0001011", 99 => "1010111", 100 => "0000000", 101 => "1101101", 
    102 => "1110001", 103 => "0000011", 104 => "0000101", 105 => "0000010", 
    106 => "1100101", 107 => "1110111", 108 => "0000010", 109 to 110=> "0000100", 
    111 => "1111001", 112 => "1111101", 113 => "1101001", 114 => "1111011", 
    115 => "0001101", 116 => "0000101", 117 => "0001001", 118 => "1111000", 
    119 => "0000101", 120 => "1111000", 121 => "1110011", 122 => "1101111", 
    123 => "1111000", 124 => "1110010", 125 => "1111010", 126 => "1111100", 
    127 => "0000101" );

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

memory_access_guard_1: process (addr1) 
begin
      addr1_tmp <= addr1;
--synthesis translate_off
      if (CONV_INTEGER(addr1) > mem_size-1) then
           addr1_tmp <= (others => '0');
      else 
           addr1_tmp <= addr1;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
        if (ce1 = '1') then 
            q1 <= mem(CONV_INTEGER(addr1_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity infer_Bias_i_V is
    generic (
        DataWidth : INTEGER := 7;
        AddressRange : INTEGER := 128;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address1 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of infer_Bias_i_V is
    component infer_Bias_i_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR;
            addr1 : IN STD_LOGIC_VECTOR;
            ce1 : IN STD_LOGIC;
            q1 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    infer_Bias_i_V_rom_U :  component infer_Bias_i_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1);

end architecture;


