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

entity infer_Bias_f_V_rom is 
    generic(
             DWIDTH     : integer := 8; 
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


architecture rtl of infer_Bias_f_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111100", 1 => "00110010", 2 => "00001000", 3 => "00101110", 
    4 => "00001110", 5 => "00100001", 6 => "00100000", 7 => "00010001", 
    8 => "00011011", 9 => "00101100", 10 => "00000100", 11 => "00110011", 
    12 => "00010110", 13 => "01010011", 14 => "11111010", 15 => "00010110", 
    16 => "00100101", 17 => "00110011", 18 => "00111001", 19 => "00011011", 
    20 => "00000011", 21 => "11111000", 22 => "00100010", 23 => "00010000", 
    24 => "00100000", 25 => "01000100", 26 => "00010000", 27 => "00111100", 
    28 => "00101010", 29 => "00000100", 30 => "00101010", 31 => "00010111", 
    32 => "00101101", 33 => "00011011", 34 => "00001111", 35 => "00100101", 
    36 => "00010011", 37 => "00011100", 38 => "00110100", 39 => "00000111", 
    40 => "00010110", 41 => "00000100", 42 => "11111110", 43 => "00100100", 
    44 => "00101001", 45 => "11111100", 46 => "00100111", 47 => "11101011", 
    48 => "00011001", 49 => "00011011", 50 => "00100101", 51 => "00101101", 
    52 => "00110110", 53 => "01000111", 54 => "00001100", 55 => "00010101", 
    56 => "00000100", 57 => "00011110", 58 => "00100101", 59 => "00101111", 
    60 => "01000100", 61 => "00011110", 62 => "11111110", 63 => "00011100", 
    64 => "00010110", 65 => "00100001", 66 => "00001101", 67 => "00001111", 
    68 => "00001101", 69 => "00010011", 70 => "00001001", 71 => "00010010", 
    72 => "00001011", 73 => "00010001", 74 => "00001011", 75 => "00100001", 
    76 => "00010011", 77 => "00001101", 78 => "00010010", 79 => "00010101", 
    80 => "00100111", 81 => "00010101", 82 => "00100110", 83 => "00011011", 
    84 => "00011111", 85 => "00101010", 86 => "00100111", 87 => "00101011", 
    88 => "00010100", 89 => "00100000", 90 => "00110101", 91 => "00011010", 
    92 => "00001101", 93 => "00001000", 94 => "00000010", 95 => "00010110", 
    96 => "00100100", 97 => "00001100", 98 => "00011000", 99 => "00001111", 
    100 => "00100100", 101 => "00001101", 102 => "00110111", 103 => "11111111", 
    104 => "00000011", 105 => "00001100", 106 => "11111111", 107 => "00011001", 
    108 => "00001110", 109 => "11111010", 110 => "00110101", 111 => "00001010", 
    112 => "11111011", 113 => "00111011", 114 => "00110100", 115 => "00101011", 
    116 => "00100111", 117 => "11111100", 118 => "00011100", 119 => "01000000", 
    120 => "00010001", 121 => "00100111", 122 => "00101011", 123 => "00100011", 
    124 => "00101011", 125 => "00001111", 126 => "00100010", 127 => "00110110" );


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

entity infer_Bias_f_V is
    generic (
        DataWidth : INTEGER := 8;
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

architecture arch of infer_Bias_f_V is
    component infer_Bias_f_V_rom is
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
    infer_Bias_f_V_rom_U :  component infer_Bias_f_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1);

end architecture;


