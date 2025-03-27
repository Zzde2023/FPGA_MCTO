/**
*   Model: ptp_syn
*   Function: ptp timestamp sync
*   author: zd
*/  


/** 4-class frames *
sync frame
0000   01 1b 19 00 00 00 00 0f 53 8b 21 90 88 f7 00 02   ........S.!.....
0010   00 2c 00 00 02 00 00 00 00 00 00 00 00 00 00 00   .,..............
0020   00 00 00 0f 53 ff fe 8b 21 90 00 01 00 07 00 00   ....S...!.......
0030   00 00 00 00 00 00 00 00 00 00 00 00               ............

flup frame
0000   01 1b 19 00 00 00 00 0f 53 8b 21 90 88 f7 08 02   ........S.!.....
0010   00 2c 00 00 00 00 00 00 00 00 00 00 00 00 00 00   .,..............
0020   00 00 00 0f 53 ff fe 8b 21 90 00 01 00 07 02 00   ....S...!.......
0030   00 00 66 46 b2 a8 39 27 3d 84 00 00               ..fF..9'=...
66 46 b2 a8

delay_req frame
0000   01 1b 19 00 00 00 64 3f 5f 02 11 8d 88 f7 01 12   ......d?_.......
0010   00 2c 00 00 00 00 00 00 00 00 00 00 00 00 00 00   .,..............
0020   00 00 64 3f 5f ff fe 02 11 8d 00 01 00 00 00 7f   ..d?_...........
0030   00 00 00 00 00 00 00 00 00 00                     ..........

delay_resp frame
0000   01 1b 19 00 00 00 00 0f 53 8b 21 90 88 f7 09 02   ........S.!.....
0010   00 36 00 00 00 00 00 00 00 00 00 00 00 00 00 00   .6..............
0020   00 00 00 0f 53 ff fe 8b 21 90 00 01 00 00 03 00   ....S...!.......
0030   00 00 66 46 b2 a9 2f 95 4a 22 64 3f 5f ff fe 02   ..fF../.J"d?_...
0040   11 8d 00 01                                       ....
*  00 00 66 46 b2 a8   39 27 3d 84
*  00 00 66 46 b2 a9   2f 95 4a 22 

*/

module ptp_syn
#
(
  parameter [31:0]          SYNTH_DATECODE = 0,
  parameter FIRMWARE_ID           = 32'hEB000001,
  parameter VERSION               = 3
)
(
  input             clk_host,
  input             clk_net,
  input             rst_n,
  
  input             reg_w_en,
  input  [7:0]      reg_w_addr,
  input  [31:0]     reg_w_data,

  input  [7:0]      reg_r_addr,
  input             reg_r_en,
  output reg [31:0] reg_r_data,
  output reg        reg_r_ack,
  
  input  [63:0]     rx_data_net,
  input             rx_sof_net,
  input             rx_eof_net,
  input  [2:0]      rx_len_net,
  input             rx_vld_net,
  input             rx_err_net,
  input             rx_crc_fail_net,
  input  [31:0]     rx_timestamp_net,

  output [63:0]     rx_data_host,
  output            rx_sof_host,
  output            rx_eof_host,
  output [2:0]      rx_len_host,
  output            rx_vld_host,
  output            rx_err_host,
  output            rx_crc_fail_host,
  output [31:0]     rx_timestamp_host,
  output [7:0]      rx_match_host,
  output [5:0]      rx_buffer_host,

  output [63:0]     tx_data_net,
  output            tx_sof_net,
  output            tx_eof_net,
  output [2:0]      tx_len_net,
  output            tx_vld_net,
  input             tx_ack_net,

  input  [63:0]     tx_data_host,
  input             tx_sof_host,
  input             tx_eof_host,
  input  [2:0]      tx_len_host,
  input             tx_vld_host,
  output            tx_ack_host
);

/* Paramter*/
localparam STATE_PTP_IDLE = 0,
           STATE_PTP_SYN_PARSE  = 1,
           STATE_PTP_FLUP_PARSE = 2,
           STATE_PTP_REQ_SEND   = 3,
           STATE_PTP_RESP_PARSE = 4,
           STATE_PTP_CAL        = 5;

localparam  NANOS_PER_SEC   = 1000000000;
localparam  MAC_ADDR_SLAVE  = {8'h8d, 8'h11, 8'h02, 8'h5f, 8'h3f, 8'h64}; //64 3f 5f 02 11 8d
localparam  MAC_ADDR_MASTER = {8'h90, 8'h21, 8'h8b, 8'h53, 8'h0f, 8'h00};//00 0f 53 8b 21 90
localparam  CLK_FREQ              = 250000000;//161132800;
/* Register & Wire*/
reg [3:0] state;
reg [3:0] next_state;
reg ptp_trigger,
    sw_en,
    err_en;

reg        [63:0]   hw_time_r = 0   ;
reg signed [63:0]   offset    = 0   ;

//MSG_TYPE(4b) + CLOCKID(10B) + SEQUENCEID(2B) + TS(8B) 
(* ram_style = "distributed" *) reg [163:0]  ptp_timestamps[0:3];


/* bit counter time out in about 127 seconds at 250MHz*/
reg [6:0] timeout_counter = 0;
reg [31:0] cycles_counter ;


reg [31:0]  precise_timestamp_ns;
reg         precise_timestamp_valid_r1;
reg         precise_timestamp_valid_r2;
reg         precise_timestamp_valid_r3;
reg         precise_timestamp_valid_r4;

reg [31:0]  receive_timestamp_ns;
reg         receive_timestamp_valid_r1;
reg         receive_timestamp_valid_r2;
reg         receive_timestamp_valid_r3;
reg         receive_timestamp_valid_r4;
reg         receive_timestamp_finished;


wire [63:0]     tx_data_ptp;
wire            tx_sof_ptp ;
wire            tx_eof_ptp ;
wire [2:0]      tx_len_ptp ;
wire            tx_vld_ptp ;
wire            tx_ack_ptp ;

wire         sync_rx_timestamp_valid ;
wire [63:0]  sync_rx_timestamp       ;

wire        sync_clockidentity_valid;
wire [79:0] sync_clockidentity;
wire        sync_sequenceid_valid;
wire [15:0] sync_sequenceid;

wire        flup_clockidentity_valid;
wire [79:0] flup_clockidentity;
wire        flup_sequenceid_valid;
wire [15:0] flup_sequenceid;

wire         org_timestamp_valid     ;
wire [79:0]  org_timestamp           ;
wire         precise_timestamp_valid ;
wire [79:0]  precise_timestamp       ;
wire [63:0]  ptp_timestamp1;


wire        req_clockidentity_valid;
wire [79:0] req_clockidentity;
wire        req_sequenceid_valid;
wire [15:0] req_sequenceid;



wire         req_tx_timestamp_valid  ;
wire [63:0]  req_tx_timestamp        ;
wire         req_stall               ;

wire        resp_clockidentity_valid ;
wire [79:0] resp_clockidentity       ;
wire        resp_sequenceid_valid    ;
wire [15:0] resp_sequenceid          ;

wire         receive_timestamp_valid ;
wire [79:0]  receive_timestamp       ;
wire [63:0]  ptp_timestamp3          ;

wire         req_port_id_valid       ;
wire [63:0]  req_port_id             ;



/* function & task */
function [63:0]   cycles_to_timens;
    input [63:0]  cycles;
    integer time_s, time_ns;
begin
    time_s = cycles / CLK_FREQ;
    time_ns = (cycles % CLK_FREQ) * NANOS_PER_SEC / CLK_FREQ;

    cycles_to_timens = {time_s * NANOS_PER_SEC + time_ns};
end
endfunction

function [63:0]  ptp_to_cycles;
    input [79:0] ptp_t;
begin
    ptp_to_cycles = ptp_t[79: 32] * CLK_FREQ + ptp_t[31:0]>>2;
end
endfunction
//5ns -> 2c    5 * 500000000 / 1000000000 =2 
//50  -> 25c   50 * 

function [79: 0] ntohll;
    input [79: 0] x;
begin
    ntohll = {x[7:0],  x[15: 8], x[23: 16], x[31:24], x[39: 32], x[47: 40],
              x[55:48], x[63:56], x[71: 64], x[79: 72]};
end
endfunction


function [79: 0] htonll;
  input [79: 0] x;
begin
  htonll = ((x>>72) | ((x<<72) & 80'hff000000000000000000)|
  ((x>>56) & 80'h0000000000000000ff00) | ((x<<56) & 80'h00ff0000000000000000) |
  ((x>>40) & 80'h00000000000000ff0000) | ((x<<40) & 80'h0000ff00000000000000) |
  ((x>>24) & 80'h000000000000ff000000) | ((x<<24) & 80'h000000ff000000000000) |
  ((x>>8) &  80'h0000000000ff00000000) | ((x<<8)  & 80'h00000000ff0000000000));
end
endfunction

/* Register Interface*/
reg start=1;
reg [31:0] sync_counter=0;

always @(posedge clk_host)begin
    if(reg_w_en)begin
        case(reg_w_addr)
            8'h1f:
                start <= reg_w_data;
        default:;
        endcase
    end
end
always @(posedge clk_host )begin
    reg_r_ack <= reg_r_en;
    if(reg_r_en)begin
        case(reg_r_addr)
            8'h10:
                reg_r_data <= FIRMWARE_ID;
            8'h11:
                reg_r_data <= VERSION;
            8'h12:
                reg_r_data <= hw_time_r[63:32];
            8'h13:
                reg_r_data <= hw_time_r[31:0] ;
            8'h14:
                reg_r_data <= sync_counter;
            8'h15:
                reg_r_data <= offset >0 ?offset: -offset;
            8'h1f:
                reg_r_data <= start;
            default:;
        endcase
    end
end

/* Clock(Generate Spontaneously Add) With PTP TimeStamp Calibrate */
always@(posedge clk_host or negedge rst_n)begin
    if(rst_n == 1'b0)
        hw_time_r <= 0;
    else if(ptp_trigger)
        hw_time_r <= hw_time_r - offset;
    else
        hw_time_r <= hw_time_r + 1;
end

/** Main Module **/
/* TSU */
always@(posedge clk_host)begin
    if(sync_rx_timestamp_valid) begin
        ptp_timestamps[0][163:160] <= 4'h0;
        ptp_timestamps[0][63:0]   <= sync_rx_timestamp;
    end
    if(sync_clockidentity_valid)
        ptp_timestamps[0][159:80]  <= sync_clockidentity;

    if(sync_sequenceid_valid)
        ptp_timestamps[0][79:64]   <= sync_sequenceid;
end


ptp_sync_parse ptp_sync_parse_inst
(
.clk                     (clk_host               ),
.data                    (rx_data_net            ),
.len                     (rx_len_net             ),
.sof                     (rx_sof_net             ),
.eof                     (rx_eof_net             ),
.vld                     (rx_vld_net             ),
.ptp_hw_time             (hw_time_r              ),

.sync_rx_timestamp_valid (sync_rx_timestamp_valid),
.sync_rx_timestamp       (sync_rx_timestamp      ),
.sync_clockidentity_valid(sync_clockidentity_valid),
.sync_clockidentity      (sync_clockidentity),
.sync_sequenceid_valid   (sync_sequenceid_valid),
.sync_sequenceid         (sync_sequenceid),

.org_timestamp_valid     (org_timestamp_valid    ),
.org_timestamp           (org_timestamp          )
);

/* TSU */
mult_gen_0 mult_gen_flup(
    .CLK(clk_host),
    .A(precise_timestamp[79:32]),
    .P(ptp_timestamp1)
);

always@(posedge clk_host)begin
    precise_timestamp_valid_r1 <= precise_timestamp_valid;
    precise_timestamp_valid_r2 <= precise_timestamp_valid_r1;
    precise_timestamp_valid_r3 <= precise_timestamp_valid_r2;
    precise_timestamp_valid_r4 <= precise_timestamp_valid_r3;
end


always@(posedge clk_host) begin
    if(flup_clockidentity_valid)
        ptp_timestamps[1][159:80]  <= flup_clockidentity;

    if(flup_sequenceid_valid)
        ptp_timestamps[1][79:64]   <= flup_sequenceid;
    
    if(precise_timestamp_valid)
        precise_timestamp_ns       <= precise_timestamp[31:0]>>2;

    if(precise_timestamp_valid_r4) begin
        ptp_timestamps[1][163:160]   <= 4'h8;
        ptp_timestamps[1][63:0]      <= ptp_timestamp1 + precise_timestamp_ns;
    end

end

ptp_flup_parse ptp_flup_parse_inst
(
.clk                    (clk_host               ),
.data                   (rx_data_net            ),
.len                    (rx_len_net             ),
.sof                    (rx_sof_net             ),
.eof                    (rx_eof_net             ),
.vld                    (rx_vld_net             ),
.flup_clockidentity_valid(flup_clockidentity_valid),
.flup_clockidentity(flup_clockidentity),
.flup_sequenceid_valid(flup_sequenceid_valid),
.flup_sequenceid(flup_sequenceid),
.precise_timestamp_valid(precise_timestamp_valid),
.precise_timestamp      (precise_timestamp      )

);


ptp_resp_parse ptp_resp_parse_inst
(
.clk                     (clk_host               ),
.data                    (rx_data_net            ),
.len                     (rx_len_net             ),
.sof                     (rx_sof_net             ),
.eof                     (rx_eof_net             ),
.vld                     (rx_vld_net             ),
.resp_clockidentity_valid(resp_clockidentity_valid),
.resp_clockidentity(resp_clockidentity),
.resp_sequenceid_valid(resp_sequenceid_valid),
.resp_sequenceid(resp_sequenceid),
.receive_timestamp_valid (receive_timestamp_valid),
.receive_timestamp       (receive_timestamp),
.req_port_id_valid       (req_port_id_valid),
.req_port_id             (req_port_id)

);

mult_gen_0 mult_gen_resp(
    .CLK(clk_host),
    .A(receive_timestamp[79:32]),
    .P(ptp_timestamp3)
);

always@(posedge clk_host)begin
    receive_timestamp_valid_r1 <= receive_timestamp_valid;
    receive_timestamp_valid_r2 <= receive_timestamp_valid_r1;
    receive_timestamp_valid_r3 <= receive_timestamp_valid_r2;
    receive_timestamp_valid_r4 <= receive_timestamp_valid_r3;
end


always@(posedge clk_host) begin
    receive_timestamp_finished <= 1'b0;
    if(receive_timestamp_valid)
        receive_timestamp_ns   <= receive_timestamp[31:0]>>2;

    if(resp_clockidentity_valid)
        ptp_timestamps[3][159:80] <= resp_clockidentity;

    if(resp_sequenceid_valid)
        ptp_timestamps[3][79:64] <= resp_sequenceid;
    
    if(receive_timestamp_valid_r4)begin
        ptp_timestamps[3][163:160] <= 4'h9;
        ptp_timestamps[3][63:0]    <= ptp_timestamp3 + receive_timestamp_ns;
        receive_timestamp_finished <= 1'b1;
    end
end

ptp_req_framegen ptp_req_framegen_inst
(
.clk                    (clk_host           ),
.rst_n                  (rst_n              ),
.mac_dst                (MAC_ADDR_MASTER    ),
.mac_src                (MAC_ADDR_SLAVE     ),
.ptp_hw_time            (hw_time_r          ),
.go                     (state == STATE_PTP_REQ_SEND),
.data                   (tx_data_ptp        ),
.len                    (tx_len_ptp         ),
.sof                    (tx_sof_ptp         ),
.eof                    (tx_eof_ptp         ),
.vld                    (tx_vld_ptp         ),
.stall                  (req_stall          ),
.req_clockidentity_valid(req_clockidentity_valid),
.req_clockidentity      (req_clockidentity),
.req_sequenceid_valid   (req_sequenceid_valid),
.req_sequenceid         (req_sequenceid),      
.timestamp              (req_tx_timestamp   ),
.timestamp_valid        (req_tx_timestamp_valid)
);

assign  req_stall = ~tx_ack_ptp;


always@(posedge clk_host)begin
    if(req_tx_timestamp_valid)begin
        ptp_timestamps[2][163:160]    <= 4'b1;
        ptp_timestamps[2][63:0]       <= req_tx_timestamp;
    end
    if(req_clockidentity_valid)
        ptp_timestamps[2][159:80]     <= req_clockidentity;

    if(req_sequenceid_valid)
        ptp_timestamps[2][79:64]     <= req_sequenceid;

end


/** Clock-M Module *
*   offset = ((T2-T1) - (T4-T3))/2 = (T2+T3-T1 -T4)/2
*   
*/

reg signed [63:0] offset_tmp;
always@(posedge clk_host)begin
    ptp_trigger     <= 0;
    if(state == STATE_PTP_CAL && receive_timestamp_finished)begin
        offset_tmp <= ptp_timestamps[0][63:0] + ptp_timestamps[2][63:0] - ptp_timestamps[1][63:0] - ptp_timestamps[3][63:0];
        if(ptp_timestamps[0][79:64] == ptp_timestamps[1][79:64] &&
            ptp_timestamps[2][79:64] == {ptp_timestamps[3][71:64], ptp_timestamps[3][79:72]})
            ptp_trigger   <= 1; 
    end
end

always@(*)  offset = offset_tmp / 2;

always@(posedge clk_host or negedge rst_n)begin
    if(start == 1'b0 || rst_n == 1'b0)
        sync_counter  <= 0;
    else if(ptp_trigger)
        sync_counter  <= sync_counter + 1;
    else
        sync_counter  <= sync_counter;

end 

//State Transfer
always@(posedge clk_host or negedge rst_n)begin
    if(rst_n == 1'b0)
        state <= STATE_PTP_IDLE;
    else
        state <= next_state;
end

//State Switch
always@(*)begin
    next_state = 0;
    case(state)
        STATE_PTP_IDLE:
            if(sw_en)
                next_state = STATE_PTP_SYN_PARSE;
            else 
                next_state = STATE_PTP_IDLE;

        STATE_PTP_SYN_PARSE:
            if(sw_en)
                next_state = STATE_PTP_FLUP_PARSE;
            else if(err_en)
                next_state = STATE_PTP_IDLE;
            else 
                next_state = STATE_PTP_SYN_PARSE;
        STATE_PTP_FLUP_PARSE:
            if(sw_en)
                next_state = STATE_PTP_REQ_SEND;
            else if(err_en)
                next_state = STATE_PTP_IDLE;
            else 
                next_state = STATE_PTP_FLUP_PARSE;
        
        STATE_PTP_REQ_SEND:
            next_state = STATE_PTP_RESP_PARSE;
        
        STATE_PTP_RESP_PARSE:
            if(sw_en)
                next_state = STATE_PTP_CAL;
            else if(err_en)
                next_state = STATE_PTP_REQ_SEND;
            else 
                next_state = STATE_PTP_RESP_PARSE;

        STATE_PTP_CAL:
            if(sw_en)
                next_state = STATE_PTP_IDLE;
            else 
                next_state = STATE_PTP_CAL;

        default:next_state = STATE_PTP_IDLE;
    endcase
end

/* sw_en\sw_err logic */
always@(posedge clk_host or negedge rst_n)
    if(rst_n == 1'b0) begin
        sw_en  <= 1'b0;
        err_en <= 1'b0;
    end
    else begin
        sw_en   <= 1'b0;
        err_en  <= 1'b0;
        case(next_state) 
            STATE_PTP_IDLE:
                if(start)
                    sw_en <= 1'b1;
            STATE_PTP_SYN_PARSE:  
                if(org_timestamp_valid)
                    sw_en <= 1'b1;
            STATE_PTP_FLUP_PARSE:
                if(precise_timestamp_valid)
                    sw_en <= 1'b1;

            STATE_PTP_RESP_PARSE:begin
                if(req_port_id_valid)begin
                    if(req_port_id == {MAC_ADDR_SLAVE[47:24], 16'hfeff, MAC_ADDR_SLAVE[23:0]})
                        sw_en <= 1'b1;
                    else 
                        err_en <= 1'b1;//port_identity unmatch
                end
                if(&timeout_counter)
                    err_en <= 1'b1;//timeout
            end
            
            STATE_PTP_CAL:
                if(receive_timestamp_finished)
                    sw_en <= 1'b1;
            default:;
        endcase
    end

/* Time out when wait for respond frame over 127's*/

always@(posedge clk_host) begin
    if(state != STATE_PTP_RESP_PARSE)
        cycles_counter  <= 0;
    else if(cycles_counter == CLK_FREQ -1)
        cycles_counter <= 0;
    else 
        cycles_counter <= cycles_counter + 1;
end

always@(posedge clk_host) begin
    if(state != STATE_PTP_RESP_PARSE)
        timeout_counter <= 0;
    
    else if(cycles_counter == CLK_FREQ -1)
        timeout_counter <= timeout_counter + 1;
    
    else 
        timeout_counter <= timeout_counter;
end

/* wire cross */
vabus_mux vabus_mux_inst
(
  .clk(clk_host),
  .rst_n(1'b1),

  .in1_vld(tx_vld_host),
  .in1_data({tx_eof_host, tx_sof_host, tx_len_host, tx_data_host}),
  .in1_ack(tx_ack_host),

  .in2_vld(tx_vld_ptp),
  .in2_data({tx_eof_ptp, tx_sof_ptp, tx_len_ptp, tx_data_ptp}),
  .in2_ack(tx_ack_ptp),

  .out_vld(tx_vld_net),
  .out_data({tx_eof_net, tx_sof_net, tx_len_net, tx_data_net}),
  .out_ack(tx_ack_net)
);

assign rx_data_host      = rx_data_net     ;
assign rx_sof_host       = rx_sof_net      ;
assign rx_eof_host       = rx_eof_net      ;
assign rx_len_host       = rx_len_net      ;
assign rx_vld_host       = rx_vld_net      ;
assign rx_err_host       = rx_err_net      ;
assign rx_crc_fail_host  = rx_crc_fail_net ;
assign rx_timestamp_host = rx_timestamp_net;
assign rx_match_host     = 8'h0            ;
assign rx_buffer_host    = 0               ;




endmodule