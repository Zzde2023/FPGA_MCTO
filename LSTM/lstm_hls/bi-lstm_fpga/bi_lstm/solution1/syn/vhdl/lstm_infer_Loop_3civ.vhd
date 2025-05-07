-- ==============================================================
-- File generated on Sat Apr 19 01:59:58 +0800 2025
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity lstm_infer_Loop_3civ_rom is 
    generic(
             DWIDTH     : integer := 7; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 100
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of lstm_infer_Loop_3civ_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1001100", 1 to 2=> "0000000", 3 => "0010100", 4 => "1010001", 
    5 => "0010111", 6 => "0010001", 7 => "1101011", 8 => "0011101", 
    9 => "0011001", 10 => "0011101", 11 => "1010111", 12 => "1101000", 
    13 to 14=> "0000000", 15 => "1011000", 16 => "0000000", 17 => "1100010", 
    18 => "1011011", 19 => "1011111", 20 => "1010101", 21 => "0000000", 
    22 => "0011110", 23 to 24=> "0000000", 25 => "1010101", 26 => "0000000", 
    27 => "0100000", 28 to 30=> "0000000", 31 => "1001000", 32 => "1101010", 
    33 => "0000000", 34 => "0010100", 35 => "1101010", 36 => "1011101", 
    37 => "0010111", 38 => "1011111", 39 => "0000000", 40 => "1011100", 
    41 => "0000000", 42 => "1101000", 43 => "0000000", 44 => "1011001", 
    45 => "1001101", 46 => "1101100", 47 => "0010100", 48 to 49=> "0000000", 
    50 => "0010010", 51 => "1101100", 52 => "0000000", 53 => "1100001", 
    54 to 55=> "0000000", 56 => "0010110", 57 => "1011111", 58 => "1010101", 
    59 => "0000000", 60 => "1011110", 61 => "1101001", 62 => "0100010", 
    63 => "0000000", 64 => "1011110", 65 to 66=> "0000000", 67 => "0011010", 
    68 => "1101000", 69 => "1100000", 70 => "0000000", 71 => "1011111", 
    72 => "0000000", 73 => "0010101", 74 => "0010001", 75 to 76=> "0000000", 
    77 => "1011111", 78 => "0000000", 79 => "1010010", 80 => "1010101", 
    81 => "0000000", 82 => "1100010", 83 => "1011111", 84 => "0010101", 
    85 => "1011011", 86 => "1101101", 87 => "0010110", 88 to 89=> "0000000", 
    90 => "0010100", 91 => "0000000", 92 => "0010111", 93 => "0000000", 
    94 => "1100110", 95 => "0010101", 96 => "1011000", 97 => "0000000", 
    98 => "1010101", 99 => "0000000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "block";

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

entity lstm_infer_Loop_3civ is
    generic (
        DataWidth : INTEGER := 7;
        AddressRange : INTEGER := 100;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of lstm_infer_Loop_3civ is
    component lstm_infer_Loop_3civ_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_infer_Loop_3civ_rom_U :  component lstm_infer_Loop_3civ_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


