/**
* parse frame from host 
* zd
* cause delay about 6 cycles(332MHZ)  18ns
*/
 
module frame_parse#(
    /*0x00:heart        0x01:probe       0x02:order */
    parameter [7:0]   FRAME_TYPE = 8'h02
    
)
(
  input              clk,
  
  input [63:0]       data,
  input [2:0]        len ,
  input              sof ,
  input              eof ,
  input              vld ,
  input [15: 0]      bottom,
  input [15: 0]      top,
  output reg [15: 0] target_ip_len,
  input      [31: 0] target_ip_src_address,  
  input      [31: 0] target_ip_dest_address,
  input      [15: 0] target_port_src,
  input      [15: 0] target_port_dst,
  output reg [31: 0] target_seq_number,
  output reg [31: 0] target_ack_number,
  output reg         target_info_valid,
  output reg         finished
);

localparam  ETHERTYPE_OFFSET       = 12;
localparam  ETHERTYPE_IP           = 16'h0008;

localparam  IP_HEAD_LEN_OFFSET     = 14;
localparam  IP_HEAD_LEN            = 4'h5;
localparam  IP_LEN_OFFSET          = 16;
localparam  IP_TAG_OFFSET          = 18;

localparam  IP_PROTOCOL_OFFSET     = 23;
localparam  IP_PROTOCOL_TCP        = 8'h06;//ICMP=0x01 TCP =0x06 UDP = 0x11

localparam  IP_SRC_OFFSET          = 26;
localparam  IP_DEST_OFFSET         = 30;

localparam  PORT_SRC_OFFSET        = 34;
localparam  PORT_DST_OFFSET        = 36;

localparam  SEQ_NUMBER_OFFSET      = 38;
localparam  ACK_NUMBER_OFFSET      = 42;



wire [15:0] ethertype;
wire        ethertype_vld;

wire [7:0]  ip_head_len1;
wire        ip_head_len1_vld;


wire [15:0] ip_len;
wire        ip_len_vld;

wire [7:0]  ip_protocol;
wire        ip_protocol_vld;

wire [31:0] ip_src_address;
wire        ip_src_address_vld;
wire [31:0] ip_dest_address;
wire        ip_dest_address_vld;

wire [15:0] port_src;
wire        port_src_vld;
wire [15:0] port_dst;
wire        port_dst_vld;

wire [31:0] seq_number;
wire        seq_number_vld;
wire [31:0] ack_number;
wire        ack_number_vld;


/* required judgement logic*/
reg         is_ip         = 0;
reg         is_tcp        = 0;
reg         ip_head_noext = 0;
reg         is_match      = 0;
reg [15: 0] length_min, length_max;


/* length bottom & top 
*        heart:93      +10
*         probe:148   +-10
*        order:198     +15/-10
*/
always@(*) begin
    if(!top || !bottom) begin
        case(FRAME_TYPE)
        8'h00:
            begin
                length_min <= 8'd83;
                length_max <= 8'd103;
            end
        8'h01:
            begin
                length_min <= 8'd138;
                length_max <= 8'd158;
            end
        8'h02:
            begin
                length_min <= 8'd193;
                length_max <= 8'd213;
            end
        endcase
    end
    else
        length_min <= bottom;
        length_max <= top;
end

field_extract
#
(
  .BYTES(2),
  .OFFSET(ETHERTYPE_OFFSET)
)
ethertype_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(ethertype),
  .field_vld(ethertype_vld)
);

field_extract
#
(
  .BYTES(1),
  .OFFSET(IP_HEAD_LEN_OFFSET)
)
ip_head_len_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(ip_head_len1),
  .field_vld(ip_head_len1_vld)
);


field_extract
#
(
  .BYTES(2),
  .OFFSET(IP_LEN_OFFSET)
)
ip_len_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(ip_len),
  .field_vld(ip_len_vld)
);

field_extract
#
(
  .BYTES(1),
  .OFFSET(IP_PROTOCOL_OFFSET)
)
ip_protocol_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(ip_protocol),
  .field_vld(ip_protocol_vld)
);

field_extract
#
(
  .BYTES(4),
  .OFFSET(IP_SRC_OFFSET)
)
ip_src_address_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(ip_src_address),
  .field_vld(ip_src_address_vld)
);

field_extract
#
(
  .BYTES(4),
  .OFFSET(IP_DEST_OFFSET)
)
ip_dest_address_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(ip_dest_address),
  .field_vld(ip_dest_address_vld)
);

field_extract
#
(
  .BYTES(2),
  .OFFSET(PORT_SRC_OFFSET)
)
port_src_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(port_src),
  .field_vld(port_src_vld)
);

field_extract
#
(
  .BYTES(2),
  .OFFSET(PORT_DST_OFFSET)
)
port_dst_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(port_dst),
  .field_vld(port_dst_vld)
);

field_extract
#
(
  .BYTES(4),
  .OFFSET(SEQ_NUMBER_OFFSET)
)
seq_number_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(seq_number),
  .field_vld(seq_number_vld)
);

field_extract
#
(
  .BYTES(4),
  .OFFSET(ACK_NUMBER_OFFSET)
)
ack_number_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(ack_number),
  .field_vld(ack_number_vld)
);



always @ (posedge clk) begin
  target_seq_number <= 1'b0;
  target_ack_number <= 1'b0;
  target_info_valid <= 1'b0;
  finished          <= 1'b0;
  if (ethertype_vld) begin
    if (ethertype == ETHERTYPE_IP)
      is_ip <= 1'b1;
    else
      is_ip <= 1'b0;
  end
  
  if(ip_head_len1_vld) begin
    if(ip_head_len1[3:0]  == IP_HEAD_LEN)
        ip_head_noext <= 1'b1;
    else
        ip_head_noext <= 1'b0;
  end

  if (ip_protocol_vld) begin
    if (ip_protocol == IP_PROTOCOL_TCP)
      is_tcp <= 1'b1;
    else
      is_tcp <= 1'b0;
  end

  if(ip_len_vld)begin
    target_ip_len <= ip_len;
  end

  if (port_dst_vld) begin
    if(({ip_len[7:0], ip_len[15:8]} >= length_min &&
        {ip_len[7:0], ip_len[15:8]} <= length_max) &&
        (ip_src_address  == target_ip_src_address) &&
        (ip_dest_address == target_ip_dest_address) &&
        (port_src == target_port_src) &&
        (port_dst == target_port_dst))
        is_match <= 1'b1;
  end
  if (seq_number_vld)
    target_seq_number <= seq_number;
  
  if (ack_number_vld) begin
    target_ack_number <= ack_number;
    /* Once we have the ip-address & port-number, and if it's an ip frame, assert valid
     * info externally. Also reset our state so we're ready for the next
     * packet. */
    if (is_ip && is_tcp && ip_head_noext && is_match)
      target_info_valid <= 1'b1;
    finished       <= 1'b1;
    is_ip          <= 1'b0;
    is_tcp         <= 1'b0;
    ip_head_noext  <= 1'b0;
    is_match       <= 1'b0;
  end
end
endmodule

