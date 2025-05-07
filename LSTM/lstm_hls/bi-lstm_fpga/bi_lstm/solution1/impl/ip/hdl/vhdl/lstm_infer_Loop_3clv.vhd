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

entity lstm_infer_Loop_3clv_rom is 
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


architecture rtl of lstm_infer_Loop_3clv_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1010010", 1 => "0000000", 2 => "1101001", 3 => "0010101", 
    4 => "1011101", 5 => "0011011", 6 to 10=> "0000000", 11 => "0010111", 
    12 => "0000000", 13 => "1011010", 14 => "0010111", 15 => "0000000", 
    16 => "1011101", 17 => "1010001", 18 => "0000000", 19 => "0011011", 
    20 => "1100100", 21 => "0010001", 22 => "0000000", 23 => "1101000", 
    24 => "0000000", 25 => "1101011", 26 to 27=> "0000000", 28 => "1011101", 
    29 => "0000000", 30 => "1011101", 31 => "0000000", 32 => "0010100", 
    33 => "0011011", 34 => "1101011", 35 => "0000000", 36 => "0011101", 
    37 => "0000000", 38 => "1010111", 39 => "1011011", 40 => "1011100", 
    41 => "0000000", 42 => "1101100", 43 => "0000000", 44 => "1101100", 
    45 => "1001111", 46 => "0010100", 47 => "1101110", 48 to 49=> "0000000", 
    50 => "0011010", 51 => "0011000", 52 to 56=> "0000000", 57 => "0011000", 
    58 => "1101001", 59 => "0011110", 60 => "0000000", 61 => "1101010", 
    62 => "1101110", 63 to 65=> "0000000", 66 => "1011000", 67 to 69=> "0000000", 
    70 => "0010011", 71 => "0000000", 72 => "1101100", 73 => "1101001", 
    74 => "1011011", 75 to 76=> "0000000", 77 => "1101000", 78 => "1001011", 
    79 => "0010110", 80 => "1101000", 81 => "0000000", 82 => "1100001", 
    83 to 84=> "0000000", 85 => "1100111", 86 => "0000000", 87 => "1100101", 
    88 => "0010001", 89 => "1011111", 90 => "0000000", 91 => "0010010", 
    92 => "0000000", 93 => "1100011", 94 => "0010111", 95 to 96=> "0000000", 
    97 => "1011000", 98 => "0000000", 99 => "0010001" );

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

entity lstm_infer_Loop_3clv is
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

architecture arch of lstm_infer_Loop_3clv is
    component lstm_infer_Loop_3clv_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_infer_Loop_3clv_rom_U :  component lstm_infer_Loop_3clv_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


