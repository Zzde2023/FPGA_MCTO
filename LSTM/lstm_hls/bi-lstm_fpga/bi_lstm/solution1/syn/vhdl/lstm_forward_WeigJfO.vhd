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

entity lstm_forward_WeigJfO_rom is 
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


architecture rtl of lstm_forward_WeigJfO_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 3=> "0000000", 4 => "1101000", 5 to 6=> "0000000", 7 => "0001110", 
    8 => "0001100", 9 => "1110000", 10 => "1110101", 11 to 13=> "0000000", 
    14 => "1110100", 15 => "0010100", 16 => "0011111", 17 => "1110100", 
    18 to 19=> "0000000", 20 => "1110101", 21 => "0000000", 22 => "0010001", 
    23 => "1110100", 24 to 26=> "0000000", 27 => "0011100", 28 to 29=> "0000000", 
    30 => "1101110", 31 => "0000000", 32 => "1110111", 33 => "1101001", 
    34 => "1110101", 35 => "0000000", 36 => "1110101", 37 => "1101101", 
    38 => "0000000", 39 => "0001111", 40 => "0010001", 41 => "0010100", 
    42 => "0001100", 43 => "0100111", 44 => "0010000", 45 => "0010001", 
    46 => "0001101", 47 => "1110101", 48 => "0001011", 49 to 50=> "0000000", 
    51 => "1110010", 52 => "0000000", 53 => "1100001", 54 => "1101010", 
    55 => "0011110", 56 to 57=> "0000000", 58 => "0001100", 59 to 60=> "1110101", 
    61 to 62=> "0001010", 63 to 65=> "0000000", 66 => "0010011", 67 => "1110010", 
    68 => "0000000", 69 => "1100001", 70 => "0000000", 71 => "1100001", 
    72 => "0000000", 73 => "1110111", 74 => "0000000", 75 => "0001011", 
    76 => "0011001", 77 => "0000000", 78 => "0010010", 79 => "0001110", 
    80 => "1101010", 81 to 82=> "0000000", 83 => "0011001", 84 to 86=> "0000000", 
    87 => "1110100", 88 => "1110101" );

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

entity lstm_forward_WeigJfO is
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

architecture arch of lstm_forward_WeigJfO is
    component lstm_forward_WeigJfO_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_forward_WeigJfO_rom_U :  component lstm_forward_WeigJfO_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


