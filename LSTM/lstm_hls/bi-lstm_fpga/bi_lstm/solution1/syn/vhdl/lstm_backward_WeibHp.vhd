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

entity lstm_backward_WeibHp_rom is 
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


architecture rtl of lstm_backward_WeibHp_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001011", 1 => "1101100", 2 => "0100000", 3 => "1110001", 
    4 to 5=> "0000000", 6 => "1101110", 7 => "0000000", 8 => "1110111", 
    9 to 10=> "0000000", 11 => "1010101", 12 => "0001111", 13 => "0000000", 
    14 => "1100001", 15 => "0010110", 16 => "1110100", 17 => "1110111", 
    18 to 21=> "0000000", 22 => "0001011", 23 => "0010100", 24 to 27=> "0000000", 
    28 => "1110111", 29 => "0000000", 30 => "1110001", 31 => "1110110", 
    32 => "1100110", 33 => "0001001", 34 => "1101001", 35 to 37=> "0000000", 
    38 => "1110001", 39 => "0010101", 40 => "1100100", 41 => "0010000", 
    42 => "1110011", 43 to 46=> "0000000", 47 => "1101011", 48 => "0100001", 
    49 => "0001110", 50 => "0001001", 51 => "1110001", 52 => "1101010", 
    53 => "0010110", 54 => "0001011", 55 => "1110110", 56 => "0000000", 
    57 => "1110111", 58 to 59=> "1110100", 60 => "0000000", 61 => "0010100", 
    62 => "1110010", 63 => "0011011", 64 => "0000000", 65 => "1110101", 
    66 => "0010101", 67 => "0000000", 68 => "0010001", 69 => "0101111", 
    70 => "0001000", 71 to 73=> "0000000", 74 => "1110100", 75 => "1110110", 
    76 => "0001000", 77 => "0000000", 78 => "0010101", 79 => "0000000", 
    80 => "1110110", 81 => "0010100", 82 => "0011001", 83 => "1101110", 
    84 => "1100110", 85 => "0000000", 86 => "1101100", 87 to 88=> "0000000" );

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

entity lstm_backward_WeibHp is
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

architecture arch of lstm_backward_WeibHp is
    component lstm_backward_WeibHp_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_backward_WeibHp_rom_U :  component lstm_backward_WeibHp_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


