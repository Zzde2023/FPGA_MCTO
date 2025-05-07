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

entity lstm_forward_WeigIfE_rom is 
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


architecture rtl of lstm_forward_WeigIfE_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000000", 1 => "0001011", 2 => "0000000", 3 => "1110001", 
    4 => "0001101", 5 => "0011111", 6 => "1110010", 7 => "1100110", 
    8 to 9=> "0000000", 10 => "1100111", 11 => "1101110", 12 => "0010011", 
    13 => "0011101", 14 => "0001110", 15 => "0000000", 16 => "0010101", 
    17 to 18=> "0000000", 19 => "1110011", 20 => "1110111", 21 => "0011001", 
    22 => "0000000", 23 => "0001001", 24 => "0001111", 25 => "0001100", 
    26 to 27=> "0000000", 28 => "0010000", 29 to 31=> "0000000", 32 => "0001011", 
    33 to 36=> "0000000", 37 => "0011000", 38 => "0000000", 39 => "0010000", 
    40 => "1101110", 41 => "1110110", 42 => "1110111", 43 => "0000000", 
    44 => "0001110", 45 => "0000000", 46 => "1101011", 47 => "1101001", 
    48 => "1110100", 49 => "0011101", 50 => "0000000", 51 => "0011001", 
    52 => "1110010", 53 to 55=> "0000000", 56 => "0010000", 57 => "1101101", 
    58 => "1111000", 59 => "1011001", 60 => "0000000", 61 => "1100110", 
    62 => "1110101", 63 => "0000000", 64 => "0001000", 65 => "0001010", 
    66 to 67=> "0000000", 68 => "1101111", 69 to 71=> "0000000", 72 => "1101111", 
    73 => "1101100", 74 to 75=> "0000000", 76 => "0001000", 77 => "0001001", 
    78 => "0000000", 79 => "1110100", 80 => "0001000", 81 => "0000000", 
    82 => "0001011", 83 to 84=> "0000000", 85 => "1110010", 86 => "0000000", 
    87 => "0001110", 88 => "0000000" );

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

entity lstm_forward_WeigIfE is
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

architecture arch of lstm_forward_WeigIfE is
    component lstm_forward_WeigIfE_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_forward_WeigIfE_rom_U :  component lstm_forward_WeigIfE_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


