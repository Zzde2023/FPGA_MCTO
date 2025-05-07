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

entity lstm_infer_Loop_3cjv_rom is 
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


architecture rtl of lstm_infer_Loop_3cjv_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000000", 1 => "0010110", 2 to 4=> "0000000", 5 => "0011001", 
    6 => "0000000", 7 => "1101001", 8 => "1100010", 9 => "0000000", 
    10 => "0010001", 11 => "1011100", 12 => "0000000", 13 => "1100001", 
    14 => "1101101", 15 => "1010010", 16 => "0010111", 17 => "0100011", 
    18 => "0000000", 19 => "1100101", 20 to 22=> "0000000", 23 => "1011111", 
    24 => "0000000", 25 => "1101001", 26 => "0011011", 27 => "1011000", 
    28 => "0000000", 29 => "1101000", 30 => "0010110", 31 => "1001111", 
    32 => "0000000", 33 => "1001111", 34 => "1010111", 35 => "0000000", 
    36 => "1100001", 37 => "1101001", 38 => "0000000", 39 => "1101011", 
    40 => "1100100", 41 => "0011011", 42 => "1011010", 43 => "1010011", 
    44 => "1101010", 45 => "1001111", 46 to 50=> "0000000", 51 => "0011000", 
    52 => "0010100", 53 => "0000000", 54 => "0010100", 55 => "0011011", 
    56 => "1001111", 57 => "0010110", 58 => "0011001", 59 => "1011001", 
    60 => "0011010", 61 => "1100011", 62 => "0100011", 63 to 64=> "0000000", 
    65 => "1011100", 66 => "0000000", 67 => "1100011", 68 => "0010111", 
    69 => "0000000", 70 => "0010001", 71 => "1101101", 72 to 73=> "0000000", 
    74 => "1011100", 75 to 76=> "0000000", 77 => "1010110", 78 => "1011101", 
    79 => "1100100", 80 => "0010010", 81 => "0000000", 82 => "0010011", 
    83 => "0000000", 84 => "1100001", 85 => "0100011", 86 => "1100001", 
    87 => "0000000", 88 => "1001110", 89 => "0000000", 90 => "1101010", 
    91 => "0000000", 92 => "1011111", 93 => "1100000", 94 => "0000000", 
    95 => "1011000", 96 => "0000000", 97 => "1010111", 98 to 99=> "0000000" );

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

entity lstm_infer_Loop_3cjv is
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

architecture arch of lstm_infer_Loop_3cjv is
    component lstm_infer_Loop_3cjv_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_infer_Loop_3cjv_rom_U :  component lstm_infer_Loop_3cjv_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


