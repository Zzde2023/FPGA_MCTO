/**
 * Simple synchronous FIFO module.
 *
 * xilinx xpm fifo takes 3 cycles for wren -> empty. This module takes 1 cycle.
 *
 */
module sync_fifo
#
(
  parameter DATA_WIDTH = 64,
  parameter FIFO_DEPTH = 16,
  parameter FIFO_DEPTH_LOG2 = $clog2(FIFO_DEPTH),
  parameter ALMOST_FULL_THRESH = 11
)
(
  input         clk,

  input [DATA_WIDTH-1:0]  data_in,
  input         wren,
  input         reset,
  output        full,
  output reg    almost_full,

  output [DATA_WIDTH-1:0] data_out,
  output        empty,
  input         rden
);

  localparam [FIFO_DEPTH_LOG2-1:0] AFULL_THRESHOLD = FIFO_DEPTH - ALMOST_FULL_THRESH;
  (* ram_style = "distributed" *) reg [DATA_WIDTH-1:0] dram [0:FIFO_DEPTH-1];
  reg [FIFO_DEPTH_LOG2-1:0] waddr = 0, raddr = 0;
  reg [FIFO_DEPTH_LOG2-1:0] afull_cnt1 = 0, afull_cnt2 = 0;
  reg [FIFO_DEPTH_LOG2-1:0] waddr_next = 0, raddr_next = 0;
  reg full_reg = 0;

  always @(*) begin
    waddr_next <= waddr;
    if (wren && !full & !reset)
      waddr_next <= waddr + 1;
  end
  always @ (posedge clk) waddr <= waddr_next;

  always @(*) begin
    raddr_next <= raddr;
    if (reset)
      raddr_next <= waddr;
    else if (rden & !empty)
      raddr_next <= raddr + 1;
  end
  always @ (posedge clk) raddr <= raddr_next;

  always @ (posedge clk) if (wren & !full) dram[waddr] <= data_in;
  assign data_out = dram[raddr];
  assign empty = (waddr == raddr);
  always @ (posedge clk) full_reg <= (waddr_next+1 == raddr_next);
  assign full = full_reg;

  always @(*) begin
    afull_cnt1 = waddr + AFULL_THRESHOLD;
    afull_cnt2 = waddr + AFULL_THRESHOLD +1;
  end

  always @(posedge clk) begin
    if(almost_full == 0) begin
      if(raddr == afull_cnt1)
        almost_full  <= 1'b1;
    end
    else begin
      if(reset || raddr == afull_cnt2)
        almost_full  <= 1'b0;
    end
  end

endmodule
