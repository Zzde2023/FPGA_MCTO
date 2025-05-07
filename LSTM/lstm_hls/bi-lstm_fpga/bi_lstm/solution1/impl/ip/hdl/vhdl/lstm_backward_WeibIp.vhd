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

entity lstm_backward_WeibIp_rom is 
    generic(
             DWIDTH     : integer := 6; 
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


architecture rtl of lstm_backward_WeibIp_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "001011", 1 => "000000", 2 => "101011", 3 to 5=> "000000", 6 => "101111", 
    7 => "110110", 8 => "001001", 9 => "110001", 10 => "101000", 11 => "110001", 
    12 to 13=> "000000", 14 => "001011", 15 => "100101", 16 => "001000", 17 => "001110", 
    18 => "000000", 19 => "101111", 20 => "000111", 21 to 24=> "000000", 25 => "001110", 
    26 => "000000", 27 => "110111", 28 to 29=> "000000", 30 => "001111", 31 => "001110", 
    32 => "110101", 33 => "000000", 34 => "101011", 35 => "110100", 36 => "110111", 
    37 => "110010", 38 => "010001", 39 => "000000", 40 => "010011", 41 => "110111", 
    42 => "000000", 43 => "100101", 44 => "001010", 45 => "001110", 46 => "000000", 
    47 => "001110", 48 => "110110", 49 => "010001", 50 => "000000", 51 => "100011", 
    52 => "010011", 53 => "001101", 54 => "001111", 55 => "010000", 56 to 57=> "000000", 
    58 => "001000", 59 to 63=> "000000", 64 => "001110", 65 => "110110", 66 => "001111", 
    67 => "100001", 68 => "001101", 69 => "000000", 70 => "110100", 71 => "000000", 
    72 => "110011", 73 => "101111", 74 => "000000", 75 => "110010", 76 => "110100", 
    77 => "001100", 78 => "001010", 79 => "110110", 80 => "001000", 81 => "001010", 
    82 => "110101", 83 => "001110", 84 => "110000", 85 to 86=> "000000", 87 => "101100", 
    88 => "010011" );

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

entity lstm_backward_WeibIp is
    generic (
        DataWidth : INTEGER := 6;
        AddressRange : INTEGER := 89;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of lstm_backward_WeibIp is
    component lstm_backward_WeibIp_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_backward_WeibIp_rom_U :  component lstm_backward_WeibIp_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


