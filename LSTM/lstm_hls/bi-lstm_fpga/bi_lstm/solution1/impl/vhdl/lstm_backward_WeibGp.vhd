-- ==============================================================
-- File generated on Sat Apr 19 01:59:55 +0800 2025
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity lstm_backward_WeibGp_rom is 
    generic(
             DWIDTH     : integer := 7; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 89
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of lstm_backward_WeibGp_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110110", 1 to 2=> "0000000", 3 => "1011111", 4 => "1110111", 
    5 => "1101101", 6 => "0000000", 7 => "0001100", 8 => "0010100", 
    9 => "0010110", 10 => "0001101", 11 to 12=> "0000000", 13 => "0011010", 
    14 => "0001100", 15 => "1101011", 16 => "0001011", 17 to 18=> "0000000", 
    19 => "0001101", 20 to 21=> "0000000", 22 => "0011010", 23 to 24=> "0000000", 
    25 => "0010101", 26 to 28=> "0000000", 29 => "1101110", 30 => "0000000", 
    31 => "1110101", 32 => "0001011", 33 => "0100101", 34 => "0001001", 
    35 => "1101101", 36 => "1110010", 37 to 38=> "0000000", 39 => "1101100", 
    40 => "0000000", 41 => "1101010", 42 => "0000000", 43 => "1100101", 
    44 => "0001011", 45 => "0001000", 46 => "0011001", 47 to 48=> "0000000", 
    49 => "1100100", 50 => "1101110", 51 => "0000000", 52 => "0010110", 
    53 => "0011110", 54 => "0001100", 55 to 56=> "0000000", 57 => "1110011", 
    58 to 59=> "0011011", 60 => "1100000", 61 to 64=> "0000000", 65 => "0001100", 
    66 => "0001011", 67 => "1110101", 68 => "0101100", 69 => "0000000", 
    70 => "0001110", 71 => "1101000", 72 => "1101001", 73 => "0001001", 
    74 => "0011001", 75 => "1101001", 76 => "1110110", 77 => "0011110", 
    78 => "0001001", 79 => "1100010", 80 => "0001101", 81 => "0000000", 
    82 => "0001011", 83 => "0001100", 84 => "1100011", 85 => "0000000", 
    86 => "1110100", 87 => "1101101", 88 => "0001001" );

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

entity lstm_backward_WeibGp is
    generic (
        DataWidth : INTEGER := 7;
        AddressRange : INTEGER := 89;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of lstm_backward_WeibGp is
    component lstm_backward_WeibGp_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_backward_WeibGp_rom_U :  component lstm_backward_WeibGp_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


