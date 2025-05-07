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

entity lstm_infer_Block_chv_rom is 
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


architecture rtl of lstm_infer_Block_chv_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110110", 1 => "0010000", 2 => "0010010", 3 => "0000000", 
    4 => "1101101", 5 => "0001011", 6 => "0010001", 7 => "0001000", 
    8 => "1101010", 9 => "1110001", 10 => "1110110", 11 => "0001110", 
    12 => "0001010", 13 => "1110001", 14 => "0000000", 15 => "0001101", 
    16 to 17=> "0000000", 18 => "1110101", 19 => "1110011", 20 => "1100100", 
    21 => "1110100", 22 => "1100110", 23 => "0000000", 24 => "1110110", 
    25 => "1100110", 26 => "1110010", 27 => "0000000", 28 => "0010111", 
    29 => "0000000", 30 => "0011010", 31 => "1110100", 32 => "0100100", 
    33 => "1101111", 34 => "1101011", 35 => "0001100", 36 => "1110110", 
    37 => "0001000", 38 => "0011110", 39 => "1100111", 40 => "0000000", 
    41 => "1110100", 42 => "0011000", 43 to 44=> "0000000", 45 => "0100010", 
    46 => "1100101", 47 => "0000000", 48 => "0001011", 49 => "0001101", 
    50 => "0000000", 51 => "0010011", 52 => "0000000", 53 => "0011001", 
    54 => "0000000", 55 => "1110011", 56 => "0000000", 57 => "1110110", 
    58 to 60=> "0000000", 61 => "1110111", 62 to 63=> "0000000", 64 => "1011101", 
    65 => "0000000", 66 => "1100100", 67 to 68=> "0000000", 69 => "1110001", 
    70 => "0000000", 71 => "0010110", 72 => "1110100", 73 => "1101010", 
    74 => "0001101", 75 => "1101111", 76 => "1011111", 77 => "1101110", 
    78 => "0010010", 79 => "1110100", 80 => "0011010", 81 => "0001001", 
    82 => "0010110", 83 to 84=> "0000000", 85 => "1110110", 86 to 88=> "0000000", 
    89 => "1110111", 90 => "0000000", 91 to 92=> "1101100", 93 to 96=> "0000000", 
    97 => "1101100", 98 => "0010101", 99 => "0000000" );

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

entity lstm_infer_Block_chv is
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

architecture arch of lstm_infer_Block_chv is
    component lstm_infer_Block_chv_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_infer_Block_chv_rom_U :  component lstm_infer_Block_chv_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


