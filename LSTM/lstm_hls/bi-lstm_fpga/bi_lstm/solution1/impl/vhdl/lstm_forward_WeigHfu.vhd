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

entity lstm_forward_WeigHfu_rom is 
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


architecture rtl of lstm_forward_WeigHfu_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0011110", 1 => "1100001", 2 => "0100000", 3 => "1100001", 
    4 to 6=> "0000000", 7 => "0001110", 8 to 11=> "0000000", 12 => "1010010", 
    13 to 14=> "1100111", 15 => "0010101", 16 => "0000000", 17 => "1100000", 
    18 to 19=> "0000000", 20 => "1101000", 21 => "0000000", 22 => "0010100", 
    23 to 24=> "0000000", 25 => "0100010", 26 => "0000000", 27 => "0001011", 
    28 => "0001010", 29 to 31=> "0000000", 32 => "0001101", 33 => "1101011", 
    34 => "1100111", 35 to 36=> "0000000", 37 => "1101111", 38 => "0000000", 
    39 => "1110110", 40 => "0011000", 41 => "0010100", 42 => "0001010", 
    43 => "0011110", 44 => "0000000", 45 => "1110010", 46 => "0010000", 
    47 => "1110010", 48 => "1101010", 49 => "0000000", 50 => "1011110", 
    51 to 52=> "0000000", 53 => "1101001", 54 => "1101111", 55 => "0100110", 
    56 => "0000000", 57 => "0100001", 58 => "1101101", 59 => "0000000", 
    60 => "1100010", 61 => "0001010", 62 => "1101101", 63 => "0000000", 
    64 => "1110101", 65 => "0000000", 66 => "0001001", 67 => "0000000", 
    68 => "0001011", 69 => "1110011", 70 => "0000000", 71 => "1101101", 
    72 => "1110001", 73 => "1101101", 74 to 75=> "0000000", 76 => "0001010", 
    77 => "0000000", 78 => "0010110", 79 => "0100000", 80 => "1110101", 
    81 => "0000000", 82 => "1011101", 83 => "0000000", 84 => "1101101", 
    85 => "1110111", 86 => "0001001", 87 => "1110010", 88 => "1101110" );

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

entity lstm_forward_WeigHfu is
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

architecture arch of lstm_forward_WeigHfu is
    component lstm_forward_WeigHfu_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_forward_WeigHfu_rom_U :  component lstm_forward_WeigHfu_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


