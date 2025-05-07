-- ==============================================================
-- File generated on Sat Apr 19 01:59:53 +0800 2025
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity lstm_forward_WeigGfk_rom is 
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


architecture rtl of lstm_forward_WeigGfk_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101010", 1 to 3=> "0000000", 4 => "1110110", 5 => "0001111", 
    6 => "0000000", 7 => "1110001", 8 => "0011001", 9 to 10=> "0010111", 
    11 => "0001101", 12 to 13=> "0000000", 14 => "0001110", 15 => "0011010", 
    16 to 17=> "0000000", 18 => "0100110", 19 => "1110011", 20 => "1101110", 
    21 => "1010111", 22 => "1110011", 23 => "0000000", 24 => "1100001", 
    25 => "0001011", 26 => "1110010", 27 to 31=> "0000000", 32 => "0101001", 
    33 to 34=> "0000000", 35 => "0010100", 36 => "0001101", 37 to 38=> "0000000", 
    39 => "0001001", 40 => "0000000", 41 => "0010110", 42 to 43=> "0000000", 
    44 => "0001010", 45 => "1110010", 46 to 47=> "0000000", 48 => "1110001", 
    49 => "1100100", 50 => "0010100", 51 => "1101110", 52 => "1110111", 
    53 => "1101000", 54 => "1100100", 55 => "0000000", 56 => "0001011", 
    57 => "0001000", 58 => "0001010", 59 to 62=> "0000000", 63 => "1101101", 
    64 to 66=> "0000000", 67 => "0001111", 68 => "0001110", 69 => "0000000", 
    70 => "0001001", 71 => "0000000", 72 => "0001011", 73 => "0001110", 
    74 => "1110011", 75 to 78=> "0000000", 79 => "1101111", 80 => "0000000", 
    81 => "1101011", 82 => "0000000", 83 => "0001111", 84 => "0000000", 
    85 => "0001101", 86 to 87=> "0000000", 88 => "1101001" );

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

entity lstm_forward_WeigGfk is
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

architecture arch of lstm_forward_WeigGfk is
    component lstm_forward_WeigGfk_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_forward_WeigGfk_rom_U :  component lstm_forward_WeigGfk_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


