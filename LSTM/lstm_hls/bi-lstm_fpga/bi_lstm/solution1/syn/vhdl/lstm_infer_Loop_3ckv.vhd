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

entity lstm_infer_Loop_3ckv_rom is 
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


architecture rtl of lstm_infer_Loop_3ckv_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0011000", 1 => "1101000", 2 => "1010101", 3 => "0010011", 
    4 => "0000000", 5 => "1011110", 6 to 7=> "0000000", 8 => "1100010", 
    9 => "0011001", 10 => "0000000", 11 => "1011111", 12 => "0000000", 
    13 => "0011011", 14 => "1010011", 15 => "0000000", 16 => "0011000", 
    17 => "0000000", 18 => "1001111", 19 => "1101101", 20 => "1100000", 
    21 => "0010111", 22 => "1100110", 23 => "0011100", 24 => "0000000", 
    25 => "0010110", 26 => "1010000", 27 => "0010110", 28 to 30=> "0000000", 
    31 => "1100010", 32 => "1010011", 33 => "1010010", 34 => "0000000", 
    35 => "1010010", 36 => "0000000", 37 => "1011100", 38 to 43=> "0000000", 
    44 => "1011001", 45 => "0000000", 46 => "1010010", 47 => "0010111", 
    48 => "1001000", 49 => "1001111", 50 => "0000000", 51 => "1101110", 
    52 => "1011100", 53 => "1101011", 54 => "0000000", 55 => "1010011", 
    56 => "1011111", 57 => "1101000", 58 => "0010101", 59 => "0010100", 
    60 => "1001000", 61 => "0011000", 62 => "1101100", 63 => "0000000", 
    64 => "1101010", 65 => "0000000", 66 => "1100011", 67 to 72=> "0000000", 
    73 => "0010010", 74 => "1001100", 75 => "0000000", 76 => "1001101", 
    77 => "0010011", 78 => "1010101", 79 => "1011110", 80 => "0000000", 
    81 => "0011001", 82 => "1100010", 83 to 85=> "0000000", 86 => "0011001", 
    87 => "0000000", 88 => "0010001", 89 => "0010010", 90 => "0010101", 
    91 => "1010100", 92 => "0011010", 93 => "0000000", 94 => "1101011", 
    95 => "0000000", 96 => "1010000", 97 => "0000000", 98 => "1001111", 
    99 => "1101001" );

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

entity lstm_infer_Loop_3ckv is
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

architecture arch of lstm_infer_Loop_3ckv is
    component lstm_infer_Loop_3ckv_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_infer_Loop_3ckv_rom_U :  component lstm_infer_Loop_3ckv_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


