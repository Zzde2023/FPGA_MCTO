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

entity lstm_infer_Loop_3cmv_rom is 
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


architecture rtl of lstm_infer_Loop_3cmv_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 2=> "0000000", 3 to 4=> "1010110", 5 => "0000000", 6 => "1011011", 
    7 => "0011011", 8 => "1101000", 9 => "1100001", 10 => "0010101", 
    11 to 12=> "0000000", 13 => "0010110", 14 to 15=> "0000000", 16 => "1101000", 
    17 to 18=> "0000000", 19 => "0010111", 20 => "0000000", 21 => "0010111", 
    22 => "1010100", 23 => "1101000", 24 => "0011000", 25 => "0010110", 
    26 => "1010110", 27 to 28=> "0000000", 29 => "0010010", 30 => "1011111", 
    31 => "1011001", 32 => "0000000", 33 => "0011000", 34 to 35=> "0000000", 
    36 => "0010111", 37 => "1100011", 38 => "1011100", 39 to 42=> "0000000", 
    43 => "0010010", 44 => "0010101", 45 => "1010111", 46 => "0000000", 
    47 => "1001110", 48 => "1010101", 49 to 50=> "1011011", 51 => "1100111", 
    52 => "0000000", 53 => "1000110", 54 => "0010010", 55 to 57=> "0000000", 
    58 => "0011100", 59 => "1100100", 60 => "1100101", 61 => "1101101", 
    62 => "0010011", 63 => "1100001", 64 => "1100101", 65 => "1101011", 
    66 => "1100001", 67 => "0000000", 68 => "0010010", 69 to 70=> "0000000", 
    71 => "1010010", 72 => "0010100", 73 => "1101011", 74 => "1101100", 
    75 => "1010110", 76 => "1010001", 77 => "0000000", 78 => "1001110", 
    79 => "1011010", 80 => "1100110", 81 to 82=> "0000000", 83 => "0010101", 
    84 => "0010010", 85 => "0011110", 86 => "1100111", 87 => "0011110", 
    88 to 90=> "0000000", 91 => "1100000", 92 => "0011001", 93 to 95=> "0000000", 
    96 => "1011010", 97 to 99=> "0000000" );

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

entity lstm_infer_Loop_3cmv is
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

architecture arch of lstm_infer_Loop_3cmv is
    component lstm_infer_Loop_3cmv_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_infer_Loop_3cmv_rom_U :  component lstm_infer_Loop_3cmv_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


