-- ==============================================================
-- File generated on Sun Apr 27 23:37:32 +0800 2025
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


architecture rtl of infer_Bias_c_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0011011", 1 => "1110001", 2 => "0011101", 3 => "0001100", 
    4 => "0101110", 5 => "0001110", 6 => "1110011", 7 => "1110010", 
    8 => "1100010", 9 => "0010001", 10 => "1110001", 11 => "1111000", 
    12 => "1111110", 13 => "1101000", 14 => "1100011", 15 => "0000111", 
    16 => "1111000", 17 => "1111001", 18 => "1111110", 19 => "0001110", 
    20 => "0000001", 21 => "0010011", 22 => "0000010", 23 => "1111100", 
    24 => "0000100", 25 => "1110100", 26 => "1000110", 27 => "1100010", 
    28 => "0001110", 29 => "1111000", 30 => "0010001", 31 => "1110000", 
    32 => "0001010", 33 => "0000101", 34 => "0001001", 35 => "1101010", 
    36 => "1110100", 37 => "0001111", 38 => "0000000", 39 => "0001101", 
    40 => "1110111", 41 => "0010010", 42 => "1111110", 43 => "0000111", 
    44 => "0001010", 45 => "1101101", 46 => "0011010", 47 => "0011111", 
    48 => "0000001", 49 => "1101100", 50 => "0000001", 51 => "0000011", 
    52 => "1110001", 53 => "0000011", 54 => "1101101", 55 => "0000010", 
    56 => "0011011", 57 => "0001010", 58 => "1110111", 59 => "1101101", 
    60 => "0000011", 61 => "1101110", 62 => "1110010", 63 => "1111001", 
    64 => "1110010", 65 => "1110100", 66 => "1111000", 67 => "0000000", 
    68 => "1111110", 69 => "1111101", 70 => "1111010", 71 => "0001011", 
    72 => "1010110", 73 => "1110110", 74 => "0101001", 75 => "0000001", 
    76 => "1010010", 77 => "1111001", 78 => "0011101", 79 => "0001011", 
    80 => "0000111", 81 => "0001011", 82 => "0001010", 83 => "0010001", 
    84 => "0010000", 85 => "1111001", 86 => "0011001", 87 to 88=> "0010000", 
    89 => "0000110", 90 => "0010010", 91 => "1111011", 92 => "0010010", 
    93 => "0001110", 94 => "1101100", 95 => "0000100", 96 => "0000001", 
    97 => "1100011", 98 => "0001001", 99 => "1111010", 100 => "1111011", 
    101 => "0011100", 102 => "1110011", 103 => "1111111", 104 => "1100100", 
    105 => "1110011", 106 => "0001100", 107 => "0000001", 108 => "0010001", 
    109 => "1001111", 110 => "0000100", 111 => "0000001", 112 => "0100001", 
    113 => "1101000", 114 => "0000000", 115 => "0001011", 116 => "0000101", 
    117 => "0001000", 118 => "1101111", 119 => "1110110", 120 => "1111100", 
    121 => "1110010", 122 => "1111100", 123 => "0001110", 124 => "0000101", 
    125 => "0001000", 126 => "1111010", 127 => "0001111" );

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

entity infer_Bias_c_V is
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

architecture arch of infer_Bias_c_V is
    component infer_Bias_c_V_rom is
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
    infer_Bias_c_V_rom_U :  component infer_Bias_c_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1);

end architecture;


