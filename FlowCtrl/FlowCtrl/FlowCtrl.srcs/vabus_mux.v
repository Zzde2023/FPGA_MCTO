/**
 * Generic valid/ack bus muxer.
 * Handy for muxing two TX data sources together.
 * (c) 2014 Exablaze Pty Ltd
 */
module vabus_mux
#
(
  parameter WIDTH  = 69
)
(
  input               clk,
  input               rst_n,
  input               in1_vld,
  input   [WIDTH-1:0] in1_data,
  output              in1_ack,
  input               in2_vld,
  input   [WIDTH-1:0] in2_data,
  output              in2_ack,
  output              out_vld,
  output  [WIDTH-1:0] out_data,
  input               out_ack
);

wire sel;
reg selected, selected_vld;

always @(posedge clk) begin: sel_reg
  if (~rst_n) begin
    selected     <= 1'b0;
    selected_vld <= 1'b0;
  end
  else begin
    selected <= sel;
    selected_vld <= in1_vld | in2_vld;
  end
end

assign sel = in2_vld & ((!in1_vld) | (selected & selected_vld));
assign out_vld = in1_vld | in2_vld;
assign out_data = (sel)?in2_data:in1_data;

assign in1_ack = out_ack & !(sel & in2_vld);
assign in2_ack = out_ack & !((!sel) & in1_vld);

endmodule
