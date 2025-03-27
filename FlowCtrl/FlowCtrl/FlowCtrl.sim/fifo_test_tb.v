`timescale 1ns / 1ns

module fifo_test_tb;

localparam WIDTH = 64;
parameter DEPTH = 16;
parameter IP_ADDR_SRC = {8'd27, 8'd45, 8'd224, 8'd10};
parameter IP_ADDR_DST = {8'd192, 8'd128, 8'd27, 8'd172};

parameter PORT_SRC = {8'h5e, 8'h58};
parameter PORT_DST = {8'h6b, 8'h1b};
parameter TOP = 220;
parameter BOTTOM = 180;
parameter FRAME_TYPE = 8'h02;

parameter  tx_len1    =3'd0,
            tx_len2    =3'd3;
            
reg clk_write	    	    ;
reg clk_read			    ;
wire [WIDTH -1: 0] data_in  ;


reg wren				    ;
reg rden				    ;


wire full				    ;
wire [WIDTH -1: 0] data_out ;
wire almost_empty			;

reg [63: 0] data_mem[49: 0] ;
reg [31: 0] data_mem_r[9: 0]    ;
reg [5: 0]  data_cnt        ;
reg start_flag              ;
reg rst_n                   ;

wire target_info_valid ;   
reg  [31: 0] target_ip_src_address  ;
reg  [31: 0] target_ip_dest_address ;
wire [15: 0] target_ip_len          ;       
reg  [15: 0] target_port_src        ;   
reg  [15: 0] target_port_dst        ;    
wire [31: 0] target_seq_number;
wire [31: 0] target_ack_number;

wire [WIDTH-1: 0] tx_data_net; 
wire [2:0]        tx_len_net ;  
wire              tx_sof_net ;  
wire              tx_eof_net ;  
wire              tx_vld_net ;  
reg               tx_ack_net ;


wire [WIDTH-1: 0] tx_data_host;
wire [2:0]        tx_len_host ;
wire              tx_sof_host ;
wire              tx_eof_host ;
wire              tx_vld_host ;
wire              tx_ack_host ;
integer i;
initial begin
    i = 0;
    $readmemh ("E:/Project/FlowCtrl/FlowCtrl/FlowCtrl.sim/data_org.txt", data_mem);//load from data file(232 bytes)
    $readmemh ("E:/Project/FlowCtrl/FlowCtrl/FlowCtrl.sim/data_reg.txt", data_mem_r);
    repeat(50)
        begin
            $display("The %d :%h\n", i+1, data_mem[i]);
            $display("The %d :%h\n", i+1, data_mem_r[i]);
            #10;
            i = i+1;
        end
end     

reg         reg_w_en   ;
reg [10: 0] reg_w_addr ;
reg [31: 0] reg_w_data ;
reg [10: 0] reg_r_addr ;
reg         reg_r_en   ;
wire [31: 0] reg_r_data ;
wire        reg_r_ack  ;



reg  [63: 0]                current_time = 0        ;
integer k;
localparam [31:0] CLK_FREQ = 32226560;

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

    clk_write        = 1  ;
    clk_read         = 1  ;
    rst_n            = 0  ; 
    wren             = 0  ;
    rden             = 0  ;
    start_flag       = 0  ;
    tx_ack_net       = 1  ;
    $display("Current date1: %0t", $time);
    #300   rst_n     = 1  ;
    //config register
    #100
    reg_w_addr = 2;
    reg_w_en   = 1;  
    for(k = 0; k<10; k=k+1)begin
        reg_w_data   =  data_mem_r[k];
        #20  
        reg_w_addr   =  reg_w_addr + 1;

    end
    reg_w_en     = 0;  
    
    #40
    reg_r_en     =  1;
    reg_r_addr   =  0;
    for(k = 0; k<11; k=k+1)begin 
        #20  
            reg_r_addr   =  reg_r_addr + 1;
    end
    reg_r_en     =  0;

    $display("Current date2: %0t", $time);
    #10;
    #2000000   start_flag = 1  ; //820 + 10   -->830
    #20   start_flag = 0  ;
    
    #680  start_flag = 1;
    #20   start_flag = 0;
    
    #1000 rden       = 1;
    #3000 rden       = 0;
    $display("Current date3: %0t", $time);
    #20000000 $stop;
end

always@(posedge clk_write) begin current_time = $time;end
always #10 clk_write = ~clk_write;
always #30 clk_read  = ~clk_read ;

assign tx_data_host = wren? htonll(data_mem[data_cnt]): 0 ;
assign tx_sof_host  = wren && (data_cnt == 0|| data_cnt == 29)? 1: 0 ;
assign tx_eof_host  = wren && (data_cnt == 28|| data_cnt ==49)? 1: 0;
assign tx_len_host  = tx_eof_host? (data_cnt == 28? tx_len1: tx_len2): 0 ;
assign tx_vld_host  = wren                        ;

always@(negedge clk_write or negedge rst_n)
begin 
    if(rst_n == 1'b0)
        data_cnt <= 0;
    else if(wren)
        data_cnt <= data_cnt + 1;
    else 
        data_cnt <= data_cnt;
end

always@(negedge clk_write or negedge rst_n)
begin
    if(rst_n == 1'b0 || data_cnt == 6'd28 ||  data_cnt == 6'd49)
        wren <= 0;
    else if(start_flag)
        wren <= 1;
    else 
        wren <= wren;
end

flow_ctrl  
#(
    .TIME_WIDTH(64)
)flow_ctrl_inst
(
    .clk_net(clk_write),
    .clk_host(clk_write),
    .rst_n(rst_n),


    /* User register interface at BAR0. */
    .reg_w_en  (reg_w_en  ),
    .reg_w_addr(reg_w_addr),
    .reg_w_data(reg_w_data),
    .reg_r_addr(reg_r_addr),
    .reg_r_en  (reg_r_en  ),
    .reg_r_data(reg_r_data),
    .reg_r_ack (reg_r_ack ),

    .hw_time_host(current_time),
    .hw_time_net (current_time),

    .rx_data_net     (0),
    .rx_len_net      (0),
    .rx_sof_net      (0),
    .rx_eof_net      (0),
    .rx_vld_net      (0),
    .rx_err_net      (0),
    .rx_crc_fail_net (0),
    .rx_timestamp_net(0),

    //rx_data_host,
    //rx_len_host,
    //rx_sof_host,
    //rx_eof_host,
    //rx_vld_host,
    //rx_err_host,
    //rx_crc_fail_host,
    //rx_timestamp_host,
    //rx_match_host,
    //rx_buffer_host,

    .tx_data_net(tx_data_net), 
    .tx_len_net (tx_len_net), 
    .tx_sof_net (tx_sof_net), 
    .tx_eof_net (tx_eof_net), 
    .tx_vld_net (tx_vld_net), 
    .tx_ack_net (tx_ack_net), 

    .tx_data_host(tx_data_host),
    .tx_len_host (tx_len_host ),
    .tx_sof_host (tx_sof_host ),
    .tx_eof_host (tx_eof_host ),
    .tx_vld_host (tx_vld_host ),
    .tx_ack_host (tx_ack_host )

);

endmodule