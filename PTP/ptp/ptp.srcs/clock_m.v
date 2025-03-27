/**
*   module: clock_m
*   Description: clock management include adjust times and provide timestamp outo
*   Build by zd
*/


module clock_m 
#
(
    parameter CLK_FREQ = 250000000
)
(
    input clk,
    input rst_n,

    input [63:0]        hw_time_in,
    input               hw_time_valid_in,
      
    input signed [63:0] adj_cycles,
    input               adj_valid_in,

    output [63:0]       hw_time_out,
    output [47:0]       time_s_out,
    output [31:0]       time_ns_out,
    output [79:0]       timestamp_out,
    output  reg         pps_out

);

/* Register & Wire*/
reg [63:0]  hw_time_r   = 0;
reg [79:32] hw_time_s   = 0;
reg [31:0]  hw_time_ns  = 0;

localparam  NANOS_PER_SEC   = 1000000000; 


/* Clock(Generate Spontaneously Add) With PTP TimeStamp Calibrate */
always@(posedge clk_host or negedge rst_n)begin
    if(rst_n == 1'b0)
        hw_time_r <= 0;
    else if(hw_time_valid_in)
        hw_time_r <= hw_time_in; 
    else if(adj_valid_in) 
        hw_time_r <= hw_time_r - adj_cycles;
    else
        hw_time_r <= hw_time_r + 1;
end

/* Output */
//hw_time
assign hw_time_out = hw_time_r;

//timer-s
assign time_s_out = hw_time_r / CLK_FREQ;
//timer-ns
assign time_ns_out = (cycles % CLK_FREQ) * NANOS_PER_SEC / CLK_FREQ;
//ptp timestamp
assign timestamp_out = {time_s_out, time_ns_out};
//pps
always@(posedge clk or negedge rst_n)begin
    if(rst_n == 1'b0)
        pps_out <= 0;
    else if(time_ns_out)
        pps_out <= 1'b1;
    else 
        pps_out <= 0;
end



endmodule