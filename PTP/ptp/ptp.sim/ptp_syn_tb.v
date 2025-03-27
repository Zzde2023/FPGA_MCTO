`timescale 1ns/1ns
module ptp_syn_tb;

parameter    WIDTH   = 64;
parameter  [2:0]  TX_LEN1 = 2;
parameter  [2:0]  TX_LEN2 = 2;
parameter  [2:0]  TX_LEN3 = 4;



reg         reg_w_en  ;
reg [7:0]   reg_w_addr;
reg [31:0]  reg_w_data;

reg [7:0]   reg_r_addr;
reg         reg_r_en  ;
wire [31:0] reg_r_data;
wire        reg_r_ack ;

wire [WIDTH-1: 0] tx_data_net;
wire [2:0]        tx_len_net ;
wire              tx_sof_net ;
wire              tx_eof_net ;
wire              tx_vld_net ;
reg              tx_ack_net ;

reg   [WIDTH-1: 0] tx_data_host;
reg   [2:0]        tx_len_host ;
reg                tx_sof_host ;
reg                tx_eof_host ;
reg                tx_vld_host ;
wire               tx_ack_host ;

wire [63:0]  rx_data_net     ;
wire [2:0]   rx_len_net      ;
wire         rx_sof_net      ;
wire         rx_eof_net      ;
wire         rx_vld_net      ;
wire         rx_err_net      ;
wire         rx_crc_fail_net ;
wire [31:0]  rx_timestamp_net;

wire [63:0]  rx_data_host     ;
wire [2:0]   rx_len_host      ;
wire         rx_sof_host      ;
wire         rx_eof_host      ;
wire         rx_vld_host      ;
wire         rx_err_host      ;
wire         rx_crc_fail_host ;
wire [31:0]  rx_timestamp_host;

reg [63:0] ptp_data_mem[0:74];


reg clk_in=0;
reg rst_n;
reg wren;
reg start_flag;

wire [63:0] data_in;
reg  [9:0]   data_cnt;
reg [31:0] out1 = 32'hffffffff;
always#2 clk_in = ~clk_in; //250Mhz 4ns


integer i;
initial begin
    i=0;
    $readmemh("E:/Project/PTP/ptp/ptp.sim/ptp_data_patch.txt", ptp_data_mem);
   
    repeat(50)
        begin
            $display("The ptp_data[%d] :%h\n", i+1, ptp_data_mem[i]);
            #10;
            i = i+1;
        end
end


function [63: 0] htonll;
  input [63: 0] x;
begin
  htonll = ((x>>56) | ((x<<56) & 64'hff00000000000000) |
  ((x>>40) & 64'h000000000000ff00) | ((x<<40) & 64'h00ff000000000000) |
  ((x>>24) & 64'h0000000000ff0000) | ((x<<24) & 64'h0000ff0000000000) |
  ((x>>8) &  64'h00000000ff000000) | ((x<<8)  & 64'h000000ff00000000));
end
endfunction

initial begin
    clk_in = 0;
    rst_n  = 0;
    wren   = 0;
    start_flag = 0;

    tx_ack_net = 1;
   
    tx_data_host = 0;
    tx_len_host  = 0;
    tx_sof_host  = 0;
    tx_eof_host  = 0;
    tx_vld_host  = 0;
    
    #20 rst_n  = 1;
    reg_w_en   = 0;
    reg_w_addr = 0;
    reg_w_data = 0;

    #12
    reg_r_addr = 8'h12;
    reg_r_en   = 1;
    #4
    reg_r_addr = 8'h13;    
    #4
    reg_r_addr = 8'h15;    

    #4  start_flag = 1;
    #4  start_flag = 0;

    #40 start_flag = 1;
    #4  start_flag = 0;
    
    @(tx_eof_net) $display($time, " req1 frame transmit successful!");
    #39000 start_flag = 1;
    #4  start_flag = 0;
    
   
    
    #60
    $display($time, "go on next ptp test!");
    
    #4
    reg_r_addr = 8'h15;
    #4
    reg_r_addr = 8'h12;    
    #4
    reg_r_addr = 8'h13;  
    
    #4  start_flag = 1;
    #4  start_flag = 0;

    #40 start_flag = 1;
    #4  start_flag = 0;
    
    @(tx_eof_net) $display($time, " req2 frame transmit successful!");
    #25000 start_flag = 1;
    #4  start_flag = 0;
    
    #60
    $display($time, "go on next ptp test!");
    #4
    reg_r_addr = 8'h15;
    #4
    reg_r_addr = 8'h12;    
    #4
    reg_r_addr = 8'h13;  
    
    #4  start_flag = 1;
    #4  start_flag = 0;

    #40 start_flag = 1;
    #4  start_flag = 0;
    
    @(tx_eof_net) $display($time, " req3 frame transmit successful!");
    #19000 start_flag = 1;
    #4  start_flag = 0;
    
    #60
    #4
    reg_r_addr = 8'h15;
    #4
    reg_r_addr = 8'h12;    
    #4
    reg_r_addr = 8'h13;  
    
    tx_data_host = 64'hffffffffffffffff;
    tx_len_host  = 0;
    tx_sof_host  = 1;
    tx_eof_host  = 0;
    tx_vld_host  = 1;
    #4 tx_sof_host = 0;tx_data_host = 64'h7fffffffffffffff;
    #20 
    tx_eof_host = 1;
    #4 tx_eof_host = 0;tx_vld_host = 0;
    #20
    $display($time, "finished!");
    $stop;

end
assign    rx_err_net = 0;
assign    rx_crc_fail_net  = 0;
assign    rx_timestamp_net = 0;
always@(negedge clk_in)begin
    if(start_flag)
        wren <= 1;
    else if(data_cnt == 7 || data_cnt == 15|| data_cnt == 24 || data_cnt == 32 || data_cnt == 40 || data_cnt == 49 || data_cnt == 57 || data_cnt == 65 || data_cnt == 74 )
        wren <= 0;
    else
        wren <= wren;
end

always@(negedge clk_in)begin
    if(rst_n == 1'b0 )
        data_cnt <= 0;
    else if(wren)
        data_cnt <= data_cnt + 1;
    else 
        data_cnt <= data_cnt;
end

assign rx_data_net = wren?  htonll(ptp_data_mem[data_cnt]):rx_data_net      ;
assign rx_sof_net  = wren && (data_cnt == 0 || data_cnt == 8 || data_cnt == 16 || data_cnt == 25 || data_cnt == 33 || data_cnt == 41 || data_cnt == 50 || data_cnt == 58 || data_cnt == 66)? 1: 0     ;
assign rx_eof_net  = wren && (data_cnt == 7 || data_cnt == 15|| data_cnt == 24 || data_cnt == 32 || data_cnt == 40 || data_cnt == 49 || data_cnt == 57 || data_cnt == 65 || data_cnt == 74)? 1: 0     ;
assign rx_len_net  = (data_cnt == 7  || data_cnt == 32 || data_cnt == 57)?  TX_LEN1: 
                     (data_cnt == 15 || data_cnt == 40 || data_cnt == 65)? TX_LEN2: 
                     (data_cnt == 24 || data_cnt == 49 || data_cnt == 74)? TX_LEN3:
                     0;
                     
assign rx_vld_net  = wren ;


ptp_syn ptp_syn_inst(
    .clk_host(clk_in),
    .rst_n(rst_n),
    .reg_w_en   (reg_w_en),
    .reg_w_addr (reg_w_addr),
    .reg_w_data (reg_w_data),
    .reg_r_addr (reg_r_addr),
    .reg_r_en   (reg_r_en),
    .reg_r_data (reg_r_data),
    .reg_r_ack  (reg_r_ack),
    .rx_data_net(rx_data_net),
    .rx_len_net(rx_len_net),
    .rx_sof_net(rx_sof_net),
    .rx_eof_net(rx_eof_net),
    .rx_vld_net(rx_vld_net),
    .rx_err_net(rx_err_net),
    .rx_crc_fail_net(rx_crc_fail_net),
    .rx_timestamp_net(rx_timestamp_net),

    .tx_data_net(tx_data_net),
    .tx_len_net(tx_len_net),
    .tx_sof_net(tx_sof_net),
    .tx_eof_net(tx_eof_net),
    .tx_vld_net(tx_vld_net),
    .tx_ack_net(tx_ack_net),

    .tx_data_host(tx_data_host),
    .tx_sof_host(tx_sof_host),
    .tx_eof_host(tx_eof_host),
    .tx_len_host(tx_len_host),
    .tx_vld_host(tx_vld_host),
    .tx_ack_host(tx_ack_host),
    
    .rx_data_host(rx_data_host),
    .rx_len_host(rx_len_host),
    .rx_sof_host(rx_sof_host),
    .rx_eof_host(rx_eof_host),
    .rx_vld_host(rx_vld_host),
    .rx_err_host(rx_err_host),
    .rx_crc_fail_host(rx_crc_fail_host),
    .rx_timestamp_host(rx_timestamp_host)

 );


endmodule
