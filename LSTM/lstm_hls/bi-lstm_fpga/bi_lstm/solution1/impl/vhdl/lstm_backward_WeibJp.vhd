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

entity lstm_backward_WeibJp_rom is 
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


architecture rtl of lstm_backward_WeibJp_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0010100", 1 => "1101001", 2 => "0010110", 3 => "0000000", 
    4 => "1100011", 5 => "0000000", 6 => "1101011", 7 => "1110000", 
    8 => "1101011", 9 to 11=> "0000000", 12 to 13=> "1110110", 14 => "0000000", 
    15 => "0010001", 16 => "1110010", 17 to 18=> "0000000", 19 => "0001100", 
    20 => "1101110", 21 => "0001100", 22 => "0010000", 23 => "1110101", 
    24 => "0011111", 25 to 26=> "0000000", 27 => "0010010", 28 => "0010110", 
    29 to 30=> "0011010", 31 => "0001011", 32 => "0001101", 33 => "1100101", 
    34 to 37=> "0000000", 38 => "1110110", 39 => "0001111", 40 => "1100001", 
    41 => "0011110", 42 to 43=> "1110011", 44 => "1110101", 45 => "1010101", 
    46 => "0000000", 47 => "1101101", 48 => "0100000", 49 => "1100101", 
    50 => "1101110", 51 => "0001100", 52 => "1101001", 53 => "1110001", 
    54 => "0000000", 55 => "1101111", 56 => "1110101", 57 => "0010001", 
    58 => "0000000", 59 => "1110110", 60 to 62=> "0000000", 63 => "0010011", 
    64 to 65=> "0001000", 66 => "0001101", 67 => "0000000", 68 => "0011000", 
    69 => "0011101", 70 => "0101100", 71 => "1101001", 72 => "0100000", 
    73 => "0100100", 74 => "1110111", 75 => "1110010", 76 => "0001010", 
    77 => "0000000", 78 => "0010101", 79 => "0100000", 80 => "0001010", 
    81 => "0010001", 82 => "0001110", 83 => "1110000", 84 => "1011000", 
    85 => "1100011", 86 to 87=> "0000000", 88 => "1110011" );

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

entity lstm_backward_WeibJp is
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

architecture arch of lstm_backward_WeibJp is
    component lstm_backward_WeibJp_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_backward_WeibJp_rom_U :  component lstm_backward_WeibJp_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


