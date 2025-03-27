/** Module: Ptp_reqest_framegen
*   Function: generate ptp-reqest frame to wire.
*   Author: zd.
*
*/
module ptp_req_framegen 
(
    input               clk    ,
    input               rst_n,
    input [47:0]        mac_dst,
    input [47:0]        mac_src,
    input [63:0]        ptp_hw_time,
    input               go,

    output  reg [63:0]  data,
    output  reg [2:0]   len,
    output  reg         sof,
    output  reg         eof,
    output  reg         vld,         
    input               stall,

    output  reg         req_clockidentity_valid,
    output  reg[79:0]   req_clockidentity,
    output  reg         req_sequenceid_valid,
    output  reg[15:0]   req_sequenceid,
    output  reg[63: 0]  timestamp,
    output  reg         timestamp_valid         
);


reg [4:0]  count = 0  ;

/* Record first byte out on wire.*/
always @(posedge clk)begin
    req_clockidentity_valid <=0;
    timestamp_valid <= 0;
    if(sof && vld && !stall)begin
        timestamp_valid   <= 1'b1;
        timestamp         <= ptp_hw_time;
        req_clockidentity_valid <= 1'b1;
        req_clockidentity <= {16'h0100, mac_src[47:32], 16'h02fe, mac_src[31:0]};
    end
end

always@(posedge clk or negedge rst_n)begin
    req_sequenceid_valid <= 0;
    if(rst_n == 1'b0)
        req_sequenceid   <= 0;
    else begin 
        if(sof && vld && !stall)
            req_sequenceid_valid  <= 1;
        if(eof && vld && !stall)begin
            if(&req_sequenceid)
                req_sequenceid <= 0;
            else
                req_sequenceid  <= req_sequenceid + 1;
        end
    end
end


always @(posedge clk)begin
    if(go && count == 0)
        count <= 1;
    if( count !=0 && !stall)
        count <= count + 1;
    if(count == 9 &!stall)
        count <= 0;
end


always @(*)begin
    data <= 0;
    len  <= 0;
    sof  <= 0;
    eof  <= 0;
    vld  <= count != 0;
    case(count)
        1: begin data <= {mac_src[15:0], mac_dst}; sof <= 1'b1; end
        /* PTP_VERSION, Reserved1, MsgType, TranSpec, ETHERTYPE_PTP, SRC_MAC. */
        2: data <= {4'h1, 4'h2, 4'h0, 4'h1, 16'hf788, mac_src[47:16]};
        /* Reserved2, DomainNumber, MSGLENGTH */
        3: data <= {8'h00, 8'h00, 16'h2c00};
        /* CORRECTIONFILED1, FLAGFIELD */
        4: data <= {48'h0, 8'h00, 8'h00};
        /* SourcePortIdentity, Reserved3(l2 Deprecated!), CORRECTIONFILED2*/
        5: data <= {16'h02fe, mac_src[31:0], 16'h0};
        /* LogMsgInterval, ControlField, SequenceID, SourcePortIdentity. */
        6: data <= {8'h7f, 8'h00, req_sequenceid[7:0],req_sequenceid[15:8], 16'h0100, mac_src[47:32]};
        /* PTP Specified Message Field. */
        7: data <= 64'h0;
        /* PAD, PTP Specified Message Field.*/
        8: data <= 64'h0;
        /* ZERO_BYTE_EOF. */
        9: begin data <= 64'h0; eof <= 1'b1; end
    endcase
end

endmodule

