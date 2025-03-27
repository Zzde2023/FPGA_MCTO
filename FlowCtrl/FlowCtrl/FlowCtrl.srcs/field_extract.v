/**
 * Extract a field of BYTES width from an incoming packet at offset OFFSET.
 * Provides the field and asserts valid when field has been extracted.
 *
 * Valid is asserted for a single cycle as soon as the field is 'valid'.
 *
 * (c) 2015 Exablaze Pty Ltd
 */
module field_extract
#
(
  parameter BYTES = 4,
  parameter OFFSET = 2,
  parameter MAX_OFFSET = BYTES + OFFSET
)
(
  input                     clk,
  input   [63:0]            data,
  input                     sof,
  input                     vld,

  output reg [BYTES*8-1:0]  field,
  output reg                field_vld = 0
);


/* Count of number of cycles (sets of 8 bytes). */
reg [7:0] count = 0;
reg [BYTES*8-1:0] field_reg = 0;
genvar i;

always @ (posedge clk) begin
  if (sof & vld) begin
    count <= 0;
  end else if (vld) begin
    count <= count + 1;
  end
end

/* Choose byte offset from input data. */
function [2:0] INPUT_OFFSET_THIS_BEAT;
  input [7:0] beat;
begin
  if (beat == OFFSET[10:3])
    INPUT_OFFSET_THIS_BEAT = OFFSET[2:0];
  else
    INPUT_OFFSET_THIS_BEAT = 0;
end endfunction

/* Get offset byte in the output data. */
function [7:0] OUTPUT_OFFSET_THIS_BEAT;
  input [7:0] beat;
  integer first_beat_bytes;
begin
  first_beat_bytes = 8 - OFFSET[2:0];
  OUTPUT_OFFSET_THIS_BEAT = 0;
  if (beat > OFFSET[10:3]) begin
    OUTPUT_OFFSET_THIS_BEAT = first_beat_bytes + (beat - OFFSET[10:3] - 1)*8;
  end
end endfunction

/* Determine the number of bytes we need to extract on a given beat of the
 * input data. */
function [7:0] BYTES_THIS_BEAT;
  input [7:0] beat;
begin

  if (beat == OFFSET[10:3]) begin
    /* First beat on any alignment. */
    BYTES_THIS_BEAT = (8 - OFFSET[2:0]) > BYTES ?
                        BYTES : (8 - OFFSET[2:0]);
  end else if (beat > OFFSET[10:3] && beat < MAX_OFFSET[10:3] + 1) begin
    /* Intermediate or last beat of valid data. */
    if (beat == MAX_OFFSET[10:3]) begin
      /* Final beat may not incorporate all bytes. */
      BYTES_THIS_BEAT = MAX_OFFSET[2:0];
    end else begin
      /* All intermediate beats include all bytes. */
      BYTES_THIS_BEAT = 8;
    end
  end else begin
    BYTES_THIS_BEAT = 0;
  end
end endfunction

generate begin : gen_extractor
  for (i = 0; i < 255; i = i + 1) begin : gen_extractor_loop
    /* Each generated register here examines beat I of the frame. */
    if (BYTES_THIS_BEAT(i) != 0) begin
      always @ (posedge clk) begin
        if ( ((sof && i == 0) || (i > 0 && count == i-1)) && vld) begin
          field[OUTPUT_OFFSET_THIS_BEAT(i)*8 + BYTES_THIS_BEAT(i)*8 - 1 -:
                      BYTES_THIS_BEAT(i)*8] <=
                        data[63:(INPUT_OFFSET_THIS_BEAT(i)*8)];
        end
      end
    end
  end
end endgenerate

always @ (posedge clk) begin
  if (MAX_OFFSET < 9)
    field_vld <= sof && vld;
  else
    field_vld <= vld && (count == MAX_OFFSET[10:3] - 1) && !sof;
end

endmodule
