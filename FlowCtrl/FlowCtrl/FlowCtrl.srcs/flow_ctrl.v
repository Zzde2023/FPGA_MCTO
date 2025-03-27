/**
 * ExaNIC X10 my_app example.
 * brief: stream control.
 * zd
 *   freq = 332Mhz(full)   33.2Mhz(free)
 */ //32 * 332Mhz = 9.89Gps 
module flow_ctrl
#
(
  parameter [31:0] SYNTH_DATECODE = 0,
  parameter FIRMWARE_ID           = 32'hEB000001,
  parameter VERSION               = 3,
  parameter TIME_WIDTH            = 32
)
(
  input             clk_host,
  input             clk_net,
  input             rst_n,
  /* User register interface at BAR0. */
  input             reg_w_en,
  input  [10:0]     reg_w_addr,
  input  [31:0]     reg_w_data,

  input  [10:0]     reg_r_addr,
  input             reg_r_en,
  output reg [31:0] reg_r_data,
  output reg        reg_r_ack,

  input [TIME_WIDTH-1:0]    hw_time_host,
  input [TIME_WIDTH-1:0]    hw_time_net,

  input  [63:0]     rx_data_net,
  input  [2:0]      rx_len_net,
  input             rx_sof_net,
  input             rx_eof_net,
  input             rx_vld_net,
  input             rx_err_net,
  input             rx_crc_fail_net,
  input  [31:0]     rx_timestamp_net,

  output [63:0]     rx_data_host,
  output [2:0]      rx_len_host,
(* mark_debug="true" *) output            rx_sof_host,
(* mark_debug="true" *) output            rx_eof_host,
(* mark_debug="true" *) output            rx_vld_host,
  output            rx_err_host,
  output            rx_crc_fail_host,
  output [31:0]     rx_timestamp_host,
  output [7:0]      rx_match_host,
  output [5:0]      rx_buffer_host,

  output [63:0]     tx_data_net,
  output [2:0]      tx_len_net,
  output            tx_sof_net,
  output            tx_eof_net,
  output            tx_vld_net,
  input             tx_ack_net,

  input  [63:0]     tx_data_host,
  input  [2:0]      tx_len_host,
  input             tx_sof_host,
  input             tx_eof_host,
  input             tx_vld_host,
  output            tx_ack_host
);

localparam DATA_WIDTH = 64;
localparam [31: 0] CLK_FREQ = 32226560;  // Hz. free:1/10

/* function */
function during_period;
  input [TIME_WIDTH-1:0] send_t, cur_t, delt_1, delt_2;
begin
  during_period = (cur_t <=send_t + delt_2) && (cur_t >=send_t + delt_1);

end

endfunction

function [63: 0] htonll;
  input [63: 0] x;
begin
  htonll = ((x>>56) | ((x<<56) & 64'hff00000000000000) |
  ((x>>40) & 64'h000000000000ff00) | ((x<<40) & 64'h00ff000000000000) |
  ((x>>24) & 64'h0000000000ff0000) | ((x<<24) & 64'h0000ff0000000000) |
  ((x>>8) &  64'h00000000ff000000) | ((x<<8)  & 64'h000000ff00000000));
end
endfunction

/* The state machine */
localparam STATE_IDLE            = 0,
           STATE_DELAY_READY     = 1,
           STATE_TIMEPROBE       = 2,
           STATE_ORDER_JUDGE     = 3,
           STATE_ORDER_HANDLE    = 4;
           
reg [2: 0] state = STATE_IDLE, next_state;



/* Register Region. */
reg [TIME_WIDTH -1: 0]     hw_time_send;//number of cycles(number of ns) since Unix Epoch.
reg [31:0]                 delt_t; //number of cycles(number of ns)
reg [31:0]                 delt_1 = 32'd3000000000;
reg [31:0]                 delt_2 = 32'd3000000000;
reg [31:0]                 trigger_count = 0;
reg sw_en,
    trigger,
    start;
reg buffering = 0      ,
    sending1  = 0      ,
    sending2  = 0      ;
reg timestamp_ready =0 ;

wire [15: 0] target_ip_len          ;
reg  [31: 0] target_ip_src_address  ;
reg  [31: 0] target_ip_dest_address ;
reg  [15: 0] target_port_src        ;
reg  [15: 0] target_port_dst        ;

reg  [15: 0] order_len_t            ;
reg  [15: 0] order_len_b            ;

reg  [TIME_WIDTH -1: 0]     hw_time_net_r;
reg  [TIME_WIDTH -1: 0]     hw_time_host_r;

/* Wire */
wire target_info_valid  ;
wire finished           ;
wire [31: 0] target_seq_number      ;
wire [31: 0] target_ack_number      ;

wire [DATA_WIDTH+5 -1: 0] data_out_f1;
wire [DATA_WIDTH+5 -1: 0] data_out_f2;
wire [DATA_WIDTH+5 -1: 0] data_out_ff;

//Wire-fifo
wire tx_fifo_full_f1,
     tx_fifo_almost_full_f1,
     tx_fifo_empty_f1,
     tx_ack_s1,
     tx_fifo_full_f2,
     tx_fifo_almost_full_f2,
     tx_fifo_empty_f2,
     tx_ack_s2,
     tx_vld_s1,
     tx_vld_s2;
//Wire-tx
wire tx_vld_ss,
     tx_ack_ss,
     tx_ack_hh;
/* Register Write */
always @(posedge clk_host) begin
  if(rst_n == 1'b0) begin
    target_ip_src_address  <= 0;
    target_ip_dest_address <= 0;
    target_port_src        <= 0;
    target_port_dst        <= 0;
    order_len_t            <= 0;
    order_len_b            <= 0;
    delt_t                 <= 0;
    hw_time_send           <= 0;
    
  end
  else begin
    if (reg_w_en) begin
      case(reg_w_addr)
        'h2:
            hw_time_send           <= reg_w_data;
        'h3:begin 
            delt_t                 <= reg_w_data;
            timestamp_ready        <= 1;
        end
        'h4:
            target_ip_src_address  <= reg_w_data;
        'h5:
            target_ip_dest_address <= reg_w_data;
        'h6:
            target_port_src        <= reg_w_data[15: 0];
        'h7:
            target_port_dst        <= reg_w_data[15: 0];
        'h8:
            order_len_b            <= reg_w_data[15: 0];
        'h9: 
            order_len_t            <= reg_w_data[15: 0];
        'ha:
            delt_1                 <= reg_w_data;
        'hb:
            delt_2                 <= reg_w_data;
        default:;
      endcase  
    end
  end
end

/*Register Read */
always @(posedge clk_host) begin
    reg_r_ack <= reg_r_en;
    case(reg_r_addr)
      'h0:
          reg_r_data <= FIRMWARE_ID;
      'h1:
          reg_r_data <= VERSION;
      'h2:
          reg_r_data <= hw_time_send;
      'h3:
          reg_r_data <= delt_t;
      'h4:
          reg_r_data <= target_ip_src_address;
      'h5:
          reg_r_data <= target_ip_dest_address;
      'h6:
          reg_r_data <= target_port_src;
      'h7:
          reg_r_data <= target_port_dst;   
      'h8:
          reg_r_data <= order_len_b;   
      'h9:
          reg_r_data <= order_len_t;   
      'ha:
          reg_r_data <= delt_1;         
      'hb:
          reg_r_data <= delt_2;         
      'hc:
          reg_r_data <= trigger_count; 
      'hd:
          reg_r_data <= hw_time_host_r;
      'he:
          reg_r_data <= hw_time_net_r;        
    default: reg_r_data <= 0;
    endcase
end

/* Memory Region (unused)*/ 

/* Timer & Trigger Logic */
/*
* clk:host_clk net_clk 
* clk_mode:host native (dual) 
* clk_freq:clk_host->250MHZ         clk_net/clk_rx_net/clk_tx_net 
*  
*/ 

always@(posedge clk_host or negedge rst_n)begin
  if(rst_n == 1'b0) begin
    hw_time_host_r <= 0;
    hw_time_net_r  <= 0;
  end
  else begin
    hw_time_host_r <= hw_time_host;
    hw_time_net_r  <= hw_time_net;
  end
end

/* 0.probed delay. unit: ns*/
/* 1.hw_time send-order (net domain)*/
/* trigger */

always@(posedge clk_net or negedge rst_n )begin
  if(rst_n == 1'b0)
    trigger <= 1'b0;
  else if(start && (hw_time_net > hw_time_send - delt_t))
    trigger <= 1'b1;
  else
    trigger <= 1'b0;
end

/* triggered counter */
always@(posedge trigger or negedge rst_n)
begin
  if(!rst_n)
    trigger_count = 0;
  else 
    trigger_count = trigger_count + 1;
end

/*********** STATE Machine ***********/
/* State Transfer */
always@(posedge clk_host or negedge rst_n) begin
  if(!rst_n)
    state <= STATE_IDLE;
  else
    state <= next_state;
end

/* State Switch */
always@(*) begin
    next_state = STATE_IDLE; //remove latch
    case(state)
      STATE_IDLE:begin
        if(sw_en)
          next_state = STATE_ORDER_JUDGE;
        else
          next_state = STATE_IDLE;
      end
      STATE_ORDER_JUDGE:begin
        if(sw_en)
          next_state = STATE_ORDER_HANDLE;
        else
          next_state = STATE_ORDER_JUDGE;
      end
      STATE_ORDER_HANDLE:begin
        if(sw_en)
          next_state = STATE_IDLE;
        else
          next_state = STATE_ORDER_HANDLE;
      end
      default:
        next_state = STATE_IDLE;
    endcase
end

/* sw_en */
always@(posedge clk_host or negedge rst_n)begin
  if(rst_n == 1'b0)
    sw_en <= 0;
  else begin
    sw_en <= 0;
    case(next_state)
      STATE_IDLE:begin
        if(start && tx_sof_host)
          sw_en <= 1;
        else  
          sw_en <= 0;
      end
      STATE_ORDER_JUDGE:begin
        if(finished)
          sw_en <= 1;
        else
          sw_en <= 0;
      end
      STATE_ORDER_HANDLE:begin
        if(tx_eof_host)
          sw_en <= 1;
        else
          sw_en <= 0;

      end

      default:;   
    endcase
  end
end


/** Dont't need machine during other period(turn off the machin to make less delay)
*   cond1: after the  order send base-time lasting 5s.
*   cond2: befor the machine starting 3s. 
*/  //(send_time - 8ms ,send_time + 10ms) //ex.st=10ms 
reg signed [63: 0] delt_time = 0;
always@(posedge clk_host) delt_time = hw_time_net - hw_time_send;
wire [63: 0] time_b, time_t;
assign time_b = hw_time_send - delt_1;
assign time_t = hw_time_send + delt_2;
always @(posedge clk_host or negedge rst_n) begin
  if(rst_n == 1'b0 || hw_time_send == 0)
    start <= 0;
  else if(hw_time_host >= hw_time_send - delt_1 && hw_time_host <= hw_time_send + delt_2)
    start <= (!tx_vld_host || (tx_vld_host && tx_eof_host)) ? 1: start;
  else if(hw_time_host > hw_time_send + delt_2)
    start <= (!tx_vld_host || (tx_vld_host && tx_eof_host)) ? 0: start;
  else  
    start <= 0;
end
/* frame parse */
frame_parse#(
    .FRAME_TYPE (8'h02)  
)frame_parse_inst
(
  .clk                   (clk_host              ) ,
  .data                  (tx_data_host          ) ,
  .len                   (tx_len_host           ) ,
  .sof                   (tx_sof_host           ) ,
  .eof                   (tx_eof_host           ) ,
  .vld                   (tx_vld_host & start   ) ,
  
  .top                   (order_len_t           ) ,
  .bottom                (order_len_b           ) ,
  
  .target_ip_len         (target_ip_len         ) ,
  .target_ip_src_address (target_ip_src_address ) ,  
  .target_ip_dest_address(target_ip_dest_address) ,
  .target_port_src       (target_port_src       ) ,
  .target_port_dst       (target_port_dst       ) ,
  
  .target_seq_number     (target_seq_number     ) ,
  .target_ack_number     (target_ack_number     ) ,
  .target_info_valid     (target_info_valid     ) ,
  .finished              (finished              )
);


/* temporary sync-fifo  16*8B = 128B */
sync_fifo #
(
  .DATA_WIDTH(DATA_WIDTH + 1+1+3)
)
sync_fifo_filter
(
  .clk(clk_host),
  .data_in({
              tx_eof_host,
              tx_sof_host,
              tx_len_host,
              tx_data_host
           }),
  .wren(tx_vld_host & start),
  .reset(!rst_n),
  .full(tx_fifo_full_f1),
  .almost_full(tx_fifo_almost_full_f1),
  .data_out(data_out_f1),
  .empty(tx_fifo_empty_f1),
  .rden((buffering && !tx_fifo_full_f2) || (sending1 && tx_ack_s1))
);


/* storing orders. RAMD 1024 * 8B(8KB) =  256B * 32*/
sync_fifo #
(
  .DATA_WIDTH(DATA_WIDTH + 1+1+3),
  .FIFO_DEPTH(512),
  .ALMOST_FULL_THRESH(500)
)
sync_fifo_ramd
(
  .clk(clk_host),
  .data_in(data_out_f1),
  .wren(buffering && !tx_fifo_empty_f1),
  .reset(!rst_n),
  .full(tx_fifo_full_f2),
  .almost_full(tx_fifo_almost_full_f2),
  .data_out(data_out_f2),
  .empty(tx_fifo_empty_f2),
  .rden(tx_ack_s2 & sending2)
);
assign tx_vld_s1 = sending1 && !tx_fifo_empty_f1;
assign tx_vld_s2 = sending2 && !tx_fifo_empty_f2;


/* Mux order-frame and other frame. */
vabus_mux vabus_mux_inst
(
  .clk(clk_host),
  .rst_n(rst_n),
  .in1_vld(tx_vld_s1),
  .in1_data(data_out_f1),
  .in1_ack(tx_ack_s1),
  .in2_vld(tx_vld_s2),
  .in2_data(data_out_f2),
  .in2_ack(tx_ack_s2),

  .out_vld(tx_vld_ss),
  .out_data(data_out_ff),
  .out_ack(tx_ack_ss)
);


/* Mux transmit engine and host transmit datapath */
vabus_mux vabus_mux_inst2
(
  .clk(clk_host),
  .rst_n(rst_n),
  .in1_vld(tx_vld_host & !start),
  .in1_data({
              tx_eof_host,
              tx_sof_host,
              tx_len_host,
              tx_data_host
           }),
  .in1_ack(tx_ack_hh),

  .in2_vld(tx_vld_ss),
  .in2_data(data_out_ff),
  .in2_ack(tx_ack_ss),

  .out_vld(tx_vld_net),
  .out_data({tx_eof_net, tx_sof_net, tx_len_net, tx_data_net}),
  .out_ack(tx_ack_net)
);


/* buffering flag */
always@(posedge clk_host) begin
  if(finished && target_info_valid)
    buffering <= 1;
  else if(data_out_f1[DATA_WIDTH+5 -1] ==1'b1)
    buffering <= 0;
  else 
    buffering <= buffering;
end

/* common sending flag */
always@(posedge clk_host) begin
  if(finished && !target_info_valid)
    sending1 <= 1;
  else if(data_out_f1[DATA_WIDTH+5 -1] ==1'b1)
    sending1 <= 0;
  else 
    sending1 <= sending1;
end

/* order-sending flag */
always@(posedge clk_host or negedge rst_n) begin
  if(!rst_n || (!start && tx_fifo_empty_f2))
    sending2 <= 0;
  else if(trigger)
    sending2 <= 1;
  else 
    sending2 <= sending2;
end

assign tx_ack_host = (start & !tx_fifo_full_f1) || (!start & tx_ack_hh) ;

/* unuse wire cross directly*/
assign rx_data_host =  rx_data_net;      
assign rx_len_host  =  rx_len_net ;      
assign rx_sof_host  =  rx_sof_net ;      
assign rx_eof_host  =  rx_eof_net ;      
assign rx_vld_host  =  rx_vld_net ;      

assign rx_err_host = rx_err_net;
assign rx_crc_fail_host = rx_crc_fail_net;
assign rx_timestamp_host = rx_timestamp_net;
assign rx_match_host = 8'h0;
assign rx_buffer_host = 0;

endmodule

