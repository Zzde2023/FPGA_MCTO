/**
* Module: ptp_flup_parse 
* Function: ptp follow-up frame parse 
* 
* author: zd
* 
*/

module ptp_flup_parse
(
    input                     clk,
    input   [63:0]            data,
    input   [2:0]             len,
    input                     sof,
    input                     eof,
    input                     vld,

    output  reg               flup_clockidentity_valid,
    output  reg[79:0]         flup_clockidentity,
    output  reg               flup_sequenceid_valid,
    output  reg[15:0]         flup_sequenceid,

    output  reg               precise_timestamp_valid,
    output  reg[79:0]         precise_timestamp

);

localparam  ETHERTYPE_OFFSET      = 12;
localparam  ETHERTYPE_PTP         = 16'hf788;
localparam  PTP_MSG_TYPE_OFFSET   = 14;
localparam  PTP_MSG_TYPE_FLUP     = 4'h8;

localparam  PTP_CLOCKIDENTITY_OFFSET = 34;
localparam  PTP_SEQUENCEID_OFFSET    = 44;
localparam  PTP_TIMESTAMP_OFFSET  = 48;

/* wire & reg */

wire [15:0] ethertype          ;
wire        ethertype_vld      ;

wire [7:0]  ptp_msg_type       ;
wire        ptp_msg_type_vld   ;

wire        ptp_clockidentity_vld;
wire [79:0] ptp_clockidentity;

wire        ptp_sequenceid_vld;
wire [15:0] ptp_sequenceid;


wire [79:0] ptp_timestamp      ;
wire        ptp_timestamp_vld;

reg is_ptp      = 0;
reg is_flup_msg = 0;



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
  precise_timestamp_valid  <= 0;
  flup_clockidentity_valid <= 0;
  flup_sequenceid_valid    <= 0;

  if(ethertype_vld)begin
    if(ethertype == ETHERTYPE_PTP)
        is_ptp <= 1'b1;
    else
        is_ptp <= 1'b0;
  end

  if(ptp_msg_type_vld)begin
    if(ptp_msg_type[3:0] == PTP_MSG_TYPE_FLUP)
        is_flup_msg <= 1'b1;
    else
        is_flup_msg <= 1'b0;
  end

  if(ptp_clockidentity_vld) begin
    flup_clockidentity <= ptp_clockidentity;
    if(is_ptp && is_flup_msg)
      flup_clockidentity_valid <=1'b1;
  end
  
  if(ptp_sequenceid_vld) begin
    flup_sequenceid <= ptp_sequenceid;
    if(is_ptp && is_flup_msg)
      flup_sequenceid_valid <=1'b1;
  end

  if(ptp_timestamp_vld)begin
    precise_timestamp <= {ptp_timestamp[7:0],  ptp_timestamp[15: 8], ptp_timestamp[23: 16], ptp_timestamp[31:24], ptp_timestamp[39: 32], ptp_timestamp[47: 40],
                    ptp_timestamp[55:48], ptp_timestamp[63:56], ptp_timestamp[71: 64], ptp_timestamp[79: 72]};
    if(is_ptp && is_flup_msg)
        precise_timestamp_valid <= 1'b1;
    is_ptp      <= 1'b0;
    is_flup_msg  <= 1'b0;
  end
end

endmodule


