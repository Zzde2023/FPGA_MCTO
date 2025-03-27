/**
* Module: ptp_sync_parse 
* Function: ptp sync frame parse 
* 
* author: zd
* 
*/

module ptp_sync_parse
#(
  parameter CLK_FREQ = 500000000,
  parameter NANOS_PER_SEC = 1000000000
)
(
    input                     clk,
    input   [63:0]            data,
    input   [2:0]             len,
    input                     sof,
    input                     eof,
    input                     vld,
    input   [63:0]            ptp_hw_time,
    
    output  reg               sync_rx_timestamp_valid,
    output  reg[63:0]         sync_rx_timestamp,

    output  reg               sync_clockidentity_valid,
    output  reg[79:0]         sync_clockidentity,
    output  reg               sync_sequenceid_valid,
    output  reg[15:0]         sync_sequenceid,

    output  reg               org_timestamp_valid,
    output  reg[79:0]         org_timestamp

);


localparam  ETHERTYPE_OFFSET         = 12;
localparam  ETHERTYPE_PTP            = 16'hf788;
localparam  PTP_MSG_TYPE_OFFSET      = 14;
localparam  PTP_MSG_TYPE_SYN         = 4'h0;

localparam  PTP_CLOCKIDENTITY_OFFSET = 34;
localparam  PTP_SEQUENCEID_OFFSET    = 44;
localparam  PTP_TIMESTAMP_OFFSET     = 48;



/* wire & reg */
wire [15:0] ethertype;
wire        ethertype_vld;

wire [7:0]  ptp_msg_type;
wire        ptp_msg_type_vld;

wire        ptp_clockidentity_vld;
wire [79:0] ptp_clockidentity;

wire        ptp_sequenceid_vld;
wire [15:0] ptp_sequenceid;

wire [79:0] ptp_timestamp    ;
wire        ptp_timestamp_vld;

reg is_ptp     = 0;
reg is_syn_msg = 0;

/* logic */
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
  .OFFSET(PTP_MSG_TYPE_OFFSET)
)
ptp_msg_type_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(ptp_msg_type),
  .field_vld(ptp_msg_type_vld)
);

field_extract
#
(
  .BYTES(10),
  .OFFSET(PTP_CLOCKIDENTITY_OFFSET)
)
ptp_clockidentity_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(ptp_clockidentity),
  .field_vld(ptp_clockidentity_vld)
);


field_extract
#
(
  .BYTES(2),
  .OFFSET(PTP_SEQUENCEID_OFFSET)
)
ptp_sequenceid_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(ptp_sequenceid),
  .field_vld(ptp_sequenceid_vld)
);

field_extract
#
(
  .BYTES(10),
  .OFFSET(PTP_TIMESTAMP_OFFSET)
)
ptp_timestamp_extract
(
  .clk(clk),
  .data(data),
  .sof(sof),
  .vld(vld),

  .field(ptp_timestamp),
  .field_vld(ptp_timestamp_vld)
);


always@(posedge clk)begin
  if(sof && vld)
    sync_rx_timestamp <= ptp_hw_time;
end

always@(posedge clk) begin
  org_timestamp_valid      <= 0;
  
  sync_rx_timestamp_valid  <= 0;
  sync_clockidentity_valid <= 0;
  sync_sequenceid_valid    <= 0;

  if(ethertype_vld)begin
    if(ethertype == ETHERTYPE_PTP)
        is_ptp <= 1'b1;
    else
        is_ptp <= 1'b0;
  end

  if(ptp_msg_type_vld)begin
    if(ptp_msg_type[3:0] == PTP_MSG_TYPE_SYN) 
        is_syn_msg <= 1'b1;
    else
        is_syn_msg <= 1'b0;
  end

  if(ptp_clockidentity_vld) begin
    sync_clockidentity <= ptp_clockidentity;
    if(is_ptp && is_syn_msg)
      sync_clockidentity_valid <=1'b1;
  end
  
  if(ptp_sequenceid_vld) begin
    sync_sequenceid <= ptp_sequenceid;
    if(is_ptp && is_syn_msg)
      sync_sequenceid_valid <=1'b1;
  end

  if(ptp_timestamp_vld) begin
    org_timestamp <= ptp_timestamp;
    if(is_ptp && is_syn_msg)begin
      org_timestamp_valid     <= 1'b1;
      sync_rx_timestamp_valid <= 1'b1;
    end
    is_ptp      <= 1'b0;
    is_syn_msg  <= 1'b0;
  end
end

endmodule


