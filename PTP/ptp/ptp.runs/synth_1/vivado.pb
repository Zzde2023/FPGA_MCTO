
t
Command: %s
53*	vivadotcl2C
/synth_design -top ptp_syn -part xc7z035fbv676-22default:defaultZ4-113h px� 
:
Starting synth_design
149*	vivadotclZ4-321h px� 
�
�The '%s' target of the following IPs are stale, please generate the output products using the generate_target or synth_ip command before running synth_design.
%s160*	vivadotcl2
	Synthesis2default:default2W
CF:/Project/PTP/ptp/ptp.srcs/sources_1/ip/mult_gen_0/mult_gen_0.xci
2default:defaultZ4-393h px� 
�
IP '%s' is locked:
%s
1260*coregen2

mult_gen_02default:default2�
* Current project part 'xc7z035fbv676-2' and the part 'xcku035-fbva676-2-e' used to customize the IP 'mult_gen_0' do not match.2default:defaultZ19-2162h px�
�
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2
	Synthesis2default:default2
xc7z0352default:defaultZ17-347h px� 
�
0Got license for feature '%s' and/or device '%s'
310*common2
	Synthesis2default:default2
xc7z0352default:defaultZ17-349h px� 
V
Loading part %s157*device2#
xc7z035fbv676-22default:defaultZ21-403h px� 
�
HMultithreading enabled for synth_design using a maximum of %s processes.4828*oasys2
22default:defaultZ8-7079h px� 
a
?Launching helper process for spawning children vivado processes4827*oasysZ8-7078h px� 
`
#Helper process launched with PID %s4824*oasys2
181922default:defaultZ8-7075h px� 
�
%s*synth2�
vStarting RTL Elaboration : Time (s): cpu = 00:00:02 ; elapsed = 00:00:03 . Memory (MB): peak = 999.797 ; gain = 0.000
2default:defaulth px� 
�
synthesizing module '%s'%s4497*oasys2
ptp_syn2default:default2
 2default:default2;
%F:/Project/PTP/ptp/ptp.srcs/ptp_syn.v2default:default2
392default:default8@Z8-6157h px� 
v
%s
*synth2^
J	Parameter SYNTH_DATECODE bound to: 32'b00000000000000000000000000000000 
2default:defaulth p
x
� 
i
%s
*synth2Q
=	Parameter FIRMWARE_ID bound to: -352321535 - type: integer 
2default:defaulth p
x
� 
\
%s
*synth2D
0	Parameter VERSION bound to: 3 - type: integer 
2default:defaulth p
x
� 
c
%s
*synth2K
7	Parameter STATE_PTP_IDLE bound to: 0 - type: integer 
2default:defaulth p
x
� 
h
%s
*synth2P
<	Parameter STATE_PTP_SYN_PARSE bound to: 1 - type: integer 
2default:defaulth p
x
� 
i
%s
*synth2Q
=	Parameter STATE_PTP_FLUP_PARSE bound to: 2 - type: integer 
2default:defaulth p
x
� 
g
%s
*synth2O
;	Parameter STATE_PTP_REQ_SEND bound to: 3 - type: integer 
2default:defaulth p
x
� 
i
%s
*synth2Q
=	Parameter STATE_PTP_RESP_PARSE bound to: 4 - type: integer 
2default:defaulth p
x
� 
b
%s
*synth2J
6	Parameter STATE_PTP_CAL bound to: 5 - type: integer 
2default:defaulth p
x
� 
k
%s
*synth2S
?	Parameter NANOS_PER_SEC bound to: 1000000000 - type: integer 
2default:defaulth p
x
� 
�
%s
*synth2n
Z	Parameter MAC_ADDR_SLAVE bound to: 48'b100011010001000100000010010111110011111101100100 
2default:defaulth p
x
� 
�
%s
*synth2o
[	Parameter MAC_ADDR_MASTER bound to: 48'b100100000010000110001011010100110000111100000000 
2default:defaulth p
x
� 
e
%s
*synth2M
9	Parameter CLK_FREQ bound to: 250000000 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys2"
ptp_sync_parse2default:default2
 2default:default2B
,F:/Project/PTP/ptp/ptp.srcs/ptp_sync_parse.v2default:default2
92default:default8@Z8-6157h px� 
e
%s
*synth2M
9	Parameter CLK_FREQ bound to: 500000000 - type: integer 
2default:defaulth p
x
� 
k
%s
*synth2S
?	Parameter NANOS_PER_SEC bound to: 1000000000 - type: integer 
2default:defaulth p
x
� 
f
%s
*synth2N
:	Parameter ETHERTYPE_OFFSET bound to: 12 - type: integer 
2default:defaulth p
x
� 
e
%s
*synth2M
9	Parameter ETHERTYPE_PTP bound to: 16'b1111011110001000 
2default:defaulth p
x
� 
i
%s
*synth2Q
=	Parameter PTP_MSG_TYPE_OFFSET bound to: 14 - type: integer 
2default:defaulth p
x
� 
[
%s
*synth2C
/	Parameter PTP_MSG_TYPE_SYN bound to: 4'b0000 
2default:defaulth p
x
� 
n
%s
*synth2V
B	Parameter PTP_CLOCKIDENTITY_OFFSET bound to: 34 - type: integer 
2default:defaulth p
x
� 
k
%s
*synth2S
?	Parameter PTP_SEQUENCEID_OFFSET bound to: 44 - type: integer 
2default:defaulth p
x
� 
j
%s
*synth2R
>	Parameter PTP_TIMESTAMP_OFFSET bound to: 48 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys2!
field_extract2default:default2
 2default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6157h px� 
Z
%s
*synth2B
.	Parameter BYTES bound to: 2 - type: integer 
2default:defaulth p
x
� 
\
%s
*synth2D
0	Parameter OFFSET bound to: 12 - type: integer 
2default:defaulth p
x
� 
`
%s
*synth2H
4	Parameter MAX_OFFSET bound to: 14 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2!
field_extract2default:default2
 2default:default2
12default:default2
12default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys21
field_extract__parameterized02default:default2
 2default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6157h px� 
Z
%s
*synth2B
.	Parameter BYTES bound to: 1 - type: integer 
2default:defaulth p
x
� 
\
%s
*synth2D
0	Parameter OFFSET bound to: 14 - type: integer 
2default:defaulth p
x
� 
`
%s
*synth2H
4	Parameter MAX_OFFSET bound to: 15 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys21
field_extract__parameterized02default:default2
 2default:default2
12default:default2
12default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys21
field_extract__parameterized12default:default2
 2default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6157h px� 
[
%s
*synth2C
/	Parameter BYTES bound to: 10 - type: integer 
2default:defaulth p
x
� 
\
%s
*synth2D
0	Parameter OFFSET bound to: 34 - type: integer 
2default:defaulth p
x
� 
`
%s
*synth2H
4	Parameter MAX_OFFSET bound to: 44 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys21
field_extract__parameterized12default:default2
 2default:default2
12default:default2
12default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys21
field_extract__parameterized22default:default2
 2default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6157h px� 
Z
%s
*synth2B
.	Parameter BYTES bound to: 2 - type: integer 
2default:defaulth p
x
� 
\
%s
*synth2D
0	Parameter OFFSET bound to: 44 - type: integer 
2default:defaulth p
x
� 
`
%s
*synth2H
4	Parameter MAX_OFFSET bound to: 46 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys21
field_extract__parameterized22default:default2
 2default:default2
12default:default2
12default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys21
field_extract__parameterized32default:default2
 2default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6157h px� 
[
%s
*synth2C
/	Parameter BYTES bound to: 10 - type: integer 
2default:defaulth p
x
� 
\
%s
*synth2D
0	Parameter OFFSET bound to: 48 - type: integer 
2default:defaulth p
x
� 
`
%s
*synth2H
4	Parameter MAX_OFFSET bound to: 58 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys21
field_extract__parameterized32default:default2
 2default:default2
12default:default2
12default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2"
ptp_sync_parse2default:default2
 2default:default2
22default:default2
12default:default2B
,F:/Project/PTP/ptp/ptp.srcs/ptp_sync_parse.v2default:default2
92default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2

mult_gen_02default:default2
 2default:default2k
UF:/Project/PTP/ptp/ptp.runs/synth_1/.Xil/Vivado-86248-jude/realtime/mult_gen_0_stub.v2default:default2
62default:default8@Z8-6157h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2

mult_gen_02default:default2
 2default:default2
32default:default2
12default:default2k
UF:/Project/PTP/ptp/ptp.runs/synth_1/.Xil/Vivado-86248-jude/realtime/mult_gen_0_stub.v2default:default2
62default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2"
ptp_flup_parse2default:default2
 2default:default2B
,F:/Project/PTP/ptp/ptp.srcs/ptp_flup_parse.v2default:default2
92default:default8@Z8-6157h px� 
f
%s
*synth2N
:	Parameter ETHERTYPE_OFFSET bound to: 12 - type: integer 
2default:defaulth p
x
� 
e
%s
*synth2M
9	Parameter ETHERTYPE_PTP bound to: 16'b1111011110001000 
2default:defaulth p
x
� 
i
%s
*synth2Q
=	Parameter PTP_MSG_TYPE_OFFSET bound to: 14 - type: integer 
2default:defaulth p
x
� 
\
%s
*synth2D
0	Parameter PTP_MSG_TYPE_FLUP bound to: 4'b1000 
2default:defaulth p
x
� 
n
%s
*synth2V
B	Parameter PTP_CLOCKIDENTITY_OFFSET bound to: 34 - type: integer 
2default:defaulth p
x
� 
k
%s
*synth2S
?	Parameter PTP_SEQUENCEID_OFFSET bound to: 44 - type: integer 
2default:defaulth p
x
� 
j
%s
*synth2R
>	Parameter PTP_TIMESTAMP_OFFSET bound to: 48 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2"
ptp_flup_parse2default:default2
 2default:default2
42default:default2
12default:default2B
,F:/Project/PTP/ptp/ptp.srcs/ptp_flup_parse.v2default:default2
92default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2"
ptp_resp_parse2default:default2
 2default:default2B
,F:/Project/PTP/ptp/ptp.srcs/ptp_resp_parse.v2default:default2
92default:default8@Z8-6157h px� 
f
%s
*synth2N
:	Parameter ETHERTYPE_OFFSET bound to: 12 - type: integer 
2default:defaulth p
x
� 
e
%s
*synth2M
9	Parameter ETHERTYPE_PTP bound to: 16'b1111011110001000 
2default:defaulth p
x
� 
i
%s
*synth2Q
=	Parameter PTP_MSG_TYPE_OFFSET bound to: 14 - type: integer 
2default:defaulth p
x
� 
\
%s
*synth2D
0	Parameter PTP_MSG_TYPE_RESP bound to: 4'b1001 
2default:defaulth p
x
� 
n
%s
*synth2V
B	Parameter PTP_CLOCKIDENTITY_OFFSET bound to: 34 - type: integer 
2default:defaulth p
x
� 
k
%s
*synth2S
?	Parameter PTP_SEQUENCEID_OFFSET bound to: 44 - type: integer 
2default:defaulth p
x
� 
j
%s
*synth2R
>	Parameter PTP_TIMESTAMP_OFFSET bound to: 48 - type: integer 
2default:defaulth p
x
� 
h
%s
*synth2P
<	Parameter PTP_INFO_EX_OFFSET bound to: 58 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys21
field_extract__parameterized42default:default2
 2default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6157h px� 
[
%s
*synth2C
/	Parameter BYTES bound to: 10 - type: integer 
2default:defaulth p
x
� 
\
%s
*synth2D
0	Parameter OFFSET bound to: 58 - type: integer 
2default:defaulth p
x
� 
`
%s
*synth2H
4	Parameter MAX_OFFSET bound to: 68 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys21
field_extract__parameterized42default:default2
 2default:default2
42default:default2
12default:default2A
+F:/Project/PTP/ptp/ptp.srcs/field_extract.v2default:default2
92default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2"
ptp_resp_parse2default:default2
 2default:default2
52default:default2
12default:default2B
,F:/Project/PTP/ptp/ptp.srcs/ptp_resp_parse.v2default:default2
92default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2$
ptp_req_framegen2default:default2
 2default:default2D
.F:/Project/PTP/ptp/ptp.srcs/ptp_req_framegen.v2default:default2
62default:default8@Z8-6157h px� 
�
-case statement is not full and has no default155*oasys2D
.F:/Project/PTP/ptp/ptp.srcs/ptp_req_framegen.v2default:default2
782default:default8@Z8-155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2$
ptp_req_framegen2default:default2
 2default:default2
62default:default2
12default:default2D
.F:/Project/PTP/ptp/ptp.srcs/ptp_req_framegen.v2default:default2
62default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2
	vabus_mux2default:default2
 2default:default2=
'F:/Project/PTP/ptp/ptp.srcs/vabus_mux.v2default:default2
62default:default8@Z8-6157h px� 
[
%s
*synth2C
/	Parameter WIDTH bound to: 69 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	vabus_mux2default:default2
 2default:default2
72default:default2
12default:default2=
'F:/Project/PTP/ptp/ptp.srcs/vabus_mux.v2default:default2
62default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
ptp_syn2default:default2
 2default:default2
82default:default2
12default:default2;
%F:/Project/PTP/ptp/ptp.srcs/ptp_syn.v2default:default2
392default:default8@Z8-6155h px� 
�
%s*synth2�
vFinished RTL Elaboration : Time (s): cpu = 00:00:03 ; elapsed = 00:00:04 . Memory (MB): peak = 999.797 ; gain = 0.000
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
M
%s
*synth25
!Start Handling Custom Attributes
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Handling Custom Attributes : Time (s): cpu = 00:00:03 ; elapsed = 00:00:05 . Memory (MB): peak = 999.797 ; gain = 0.000
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
Finished RTL Optimization Phase 1 : Time (s): cpu = 00:00:03 ; elapsed = 00:00:05 . Memory (MB): peak = 999.797 ; gain = 0.000
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.0572default:default2
999.7972default:default2
0.0002default:defaultZ17-268h px� 
K
)Preparing netlist for logic optimization
349*projectZ1-570h px� 
>

Processing XDC Constraints
244*projectZ1-262h px� 
=
Initializing timing engine
348*projectZ1-569h px� 
�
$Parsing XDC File [%s] for cell '%s'
848*designutils2m
Wf:/Project/PTP/ptp/ptp.gen/sources_1/ip/mult_gen_0/mult_gen_0/mult_gen_0_in_context.xdc2default:default2#
mult_gen_flup	2default:default8Z20-848h px� 
�
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2m
Wf:/Project/PTP/ptp/ptp.gen/sources_1/ip/mult_gen_0/mult_gen_0/mult_gen_0_in_context.xdc2default:default2#
mult_gen_flup	2default:default8Z20-847h px� 
�
$Parsing XDC File [%s] for cell '%s'
848*designutils2m
Wf:/Project/PTP/ptp/ptp.gen/sources_1/ip/mult_gen_0/mult_gen_0/mult_gen_0_in_context.xdc2default:default2#
mult_gen_resp	2default:default8Z20-848h px� 
�
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2m
Wf:/Project/PTP/ptp/ptp.gen/sources_1/ip/mult_gen_0/mult_gen_0/mult_gen_0_in_context.xdc2default:default2#
mult_gen_resp	2default:default8Z20-847h px� 
H
&Completed Processing XDC Constraints

245*projectZ1-263h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.0012default:default2
1111.6762default:default2
0.0002default:defaultZ17-268h px� 
~
!Unisim Transformation Summary:
%s111*project29
%No Unisim elements were transformed.
2default:defaultZ1-111h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common24
 Constraint Validation Runtime : 2default:default2
00:00:002default:default2 
00:00:00.0232default:default2
1111.6762default:default2
0.0002default:defaultZ17-268h px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
Finished Constraint Validation : Time (s): cpu = 00:00:06 ; elapsed = 00:00:10 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
V
%s
*synth2>
*Start Loading Part and Timing Information
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
J
%s
*synth22
Loading part: xc7z035fbv676-2
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Loading Part and Timing Information : Time (s): cpu = 00:00:06 ; elapsed = 00:00:10 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
Z
%s
*synth2B
.Start Applying 'set_property' XDC Constraints
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished applying 'set_property' XDC Constraints : Time (s): cpu = 00:00:06 ; elapsed = 00:00:10 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
3inferred FSM for state register '%s' in module '%s'802*oasys2
	state_reg2default:default2
ptp_syn2default:defaultZ8-802h px� 
�
%s
*synth2x
d---------------------------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s
*synth2t
`                   State |                     New Encoding |                Previous Encoding 
2default:defaulth p
x
� 
�
%s
*synth2x
d---------------------------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s
*synth2s
_          STATE_PTP_IDLE |                           000001 |                             0000
2default:defaulth p
x
� 
�
%s
*synth2s
_     STATE_PTP_SYN_PARSE |                           000010 |                             0001
2default:defaulth p
x
� 
�
%s
*synth2s
_    STATE_PTP_FLUP_PARSE |                           000100 |                             0010
2default:defaulth p
x
� 
�
%s
*synth2s
_      STATE_PTP_REQ_SEND |                           001000 |                             0011
2default:defaulth p
x
� 
�
%s
*synth2s
_    STATE_PTP_RESP_PARSE |                           010000 |                             0100
2default:defaulth p
x
� 
�
%s
*synth2s
_           STATE_PTP_CAL |                           100000 |                             0101
2default:defaulth p
x
� 
�
%s
*synth2x
d---------------------------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
Gencoded FSM with state register '%s' using encoding '%s' in module '%s'3353*oasys2
	state_reg2default:default2
one-hot2default:default2
ptp_syn2default:defaultZ8-3354h px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished RTL Optimization Phase 2 : Time (s): cpu = 00:00:06 ; elapsed = 00:00:10 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
L
%s
*synth24
 Start RTL Component Statistics 
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Detailed RTL Component Info : 
2default:defaulth p
x
� 
:
%s
*synth2"
+---Adders : 
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input   64 Bit       Adders := 3     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   5 Input   64 Bit       Adders := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   3 Input   64 Bit       Adders := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input   32 Bit       Adders := 2     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input    8 Bit       Adders := 16    
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input    7 Bit       Adders := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input    5 Bit       Adders := 1     
2default:defaulth p
x
� 
=
%s
*synth2%
+---Registers : 
2default:defaulth p
x
� 
Z
%s
*synth2B
.	              164 Bit    Registers := 4     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	               80 Bit    Registers := 7     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	               64 Bit    Registers := 8     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	               48 Bit    Registers := 4     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	               32 Bit    Registers := 8     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	               16 Bit    Registers := 12    
2default:defaulth p
x
� 
Z
%s
*synth2B
.	                8 Bit    Registers := 19    
2default:defaulth p
x
� 
Z
%s
*synth2B
.	                7 Bit    Registers := 1     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	                5 Bit    Registers := 1     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	                1 Bit    Registers := 50    
2default:defaulth p
x
� 
9
%s
*synth2!
+---Muxes : 
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input  164 Bit        Muxes := 2     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input   80 Bit        Muxes := 2     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input   69 Bit        Muxes := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input   64 Bit        Muxes := 3     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input   32 Bit        Muxes := 2     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   8 Input   32 Bit        Muxes := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input   16 Bit        Muxes := 2     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   6 Input    6 Bit        Muxes := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input    6 Bit        Muxes := 8     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   4 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   3 Input    3 Bit        Muxes := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input    3 Bit        Muxes := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   6 Input    3 Bit        Muxes := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input    2 Bit        Muxes := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   3 Input    2 Bit        Muxes := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input    1 Bit        Muxes := 14    
2default:defaulth p
x
� 
X
%s
*synth2@
,	  10 Input    1 Bit        Muxes := 2     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   8 Input    1 Bit        Muxes := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   6 Input    1 Bit        Muxes := 1     
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
O
%s
*synth27
#Finished RTL Component Statistics 
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
H
%s
*synth20
Start Part Resource Summary
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s
*synth2n
ZPart Resources:
DSPs: 900 (col length:140)
BRAMs: 1000 (col length: RAMB18 140 RAMB36 70)
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Finished Part Resource Summary
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
W
%s
*synth2?
+Start Cross Boundary and Area Optimization
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Cross Boundary and Area Optimization : Time (s): cpu = 00:00:08 ; elapsed = 00:00:15 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
R
%s
*synth2:
&Start Applying XDC Timing Constraints
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Applying XDC Timing Constraints : Time (s): cpu = 00:00:11 ; elapsed = 00:00:19 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
F
%s
*synth2.
Start Timing Optimization
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
}Finished Timing Optimization : Time (s): cpu = 00:00:11 ; elapsed = 00:00:20 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
E
%s
*synth2-
Start Technology Mapping
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
|Finished Technology Mapping : Time (s): cpu = 00:00:11 ; elapsed = 00:00:20 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
?
%s
*synth2'
Start IO Insertion
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
Q
%s
*synth29
%Start Flattening Before IO Insertion
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
T
%s
*synth2<
(Finished Flattening Before IO Insertion
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
H
%s
*synth20
Start Final Netlist Cleanup
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Finished Final Netlist Cleanup
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
vFinished IO Insertion : Time (s): cpu = 00:00:12 ; elapsed = 00:00:22 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
O
%s
*synth27
#Start Renaming Generated Instances
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Renaming Generated Instances : Time (s): cpu = 00:00:12 ; elapsed = 00:00:22 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
L
%s
*synth24
 Start Rebuilding User Hierarchy
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Rebuilding User Hierarchy : Time (s): cpu = 00:00:12 ; elapsed = 00:00:22 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Start Renaming Generated Ports
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Renaming Generated Ports : Time (s): cpu = 00:00:12 ; elapsed = 00:00:22 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
M
%s
*synth25
!Start Handling Custom Attributes
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Handling Custom Attributes : Time (s): cpu = 00:00:12 ; elapsed = 00:00:22 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
J
%s
*synth22
Start Renaming Generated Nets
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Renaming Generated Nets : Time (s): cpu = 00:00:12 ; elapsed = 00:00:22 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s
*synth2�
�---------------------------------------------------------------------------------
Start ROM, RAM, DSP, Shift Register and Retiming Reporting
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23

Static Shift Register Report:
2default:defaulth p
x
� 
�
%s
*synth2�
�+------------+--------------------------------+--------+-------+--------------+--------------------+-------------------+--------+---------+
2default:defaulth p
x
� 
�
%s
*synth2�
�|Module Name | RTL Name                       | Length | Width | Reset Signal | Pull out first Reg | Pull out last Reg | SRL16E | SRLC32E | 
2default:defaulth p
x
� 
�
%s
*synth2�
�+------------+--------------------------------+--------+-------+--------------+--------------------+-------------------+--------+---------+
2default:defaulth p
x
� 
�
%s
*synth2�
�|ptp_syn     | receive_timestamp_valid_r4_reg | 4      | 1     | NO           | NO                 | YES               | 1      | 0       | 
2default:defaulth p
x
� 
�
%s
*synth2�
�|ptp_syn     | precise_timestamp_valid_r4_reg | 4      | 1     | NO           | NO                 | YES               | 1      | 0       | 
2default:defaulth p
x
� 
�
%s
*synth2�
�+------------+--------------------------------+--------+-------+--------------+--------------------+-------------------+--------+---------+

2default:defaulth p
x
� 
�
%s
*synth2�
�---------------------------------------------------------------------------------
Finished ROM, RAM, DSP, Shift Register and Retiming Reporting
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Start Writing Synthesis Report
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
A
%s
*synth2)

Report BlackBoxes: 
2default:defaulth p
x
� 
O
%s
*synth27
#+------+--------------+----------+
2default:defaulth p
x
� 
O
%s
*synth27
#|      |BlackBox name |Instances |
2default:defaulth p
x
� 
O
%s
*synth27
#+------+--------------+----------+
2default:defaulth p
x
� 
O
%s
*synth27
#|1     |mult_gen_0    |         2|
2default:defaulth p
x
� 
O
%s
*synth27
#+------+--------------+----------+
2default:defaulth p
x
� 
A
%s*synth2)

Report Cell Usage: 
2default:defaulth px� 
I
%s*synth21
+------+------------+------+
2default:defaulth px� 
I
%s*synth21
|      |Cell        |Count |
2default:defaulth px� 
I
%s*synth21
+------+------------+------+
2default:defaulth px� 
I
%s*synth21
|1     |mult_gen    |     1|
2default:defaulth px� 
I
%s*synth21
|2     |mult_gen_0_ |     1|
2default:defaulth px� 
I
%s*synth21
|3     |BUFG        |     1|
2default:defaulth px� 
I
%s*synth21
|4     |CARRY4      |   120|
2default:defaulth px� 
I
%s*synth21
|5     |LUT1        |     5|
2default:defaulth px� 
I
%s*synth21
|6     |LUT2        |   153|
2default:defaulth px� 
I
%s*synth21
|7     |LUT3        |   145|
2default:defaulth px� 
I
%s*synth21
|8     |LUT4        |    91|
2default:defaulth px� 
I
%s*synth21
|9     |LUT5        |   284|
2default:defaulth px� 
I
%s*synth21
|10    |LUT6        |   229|
2default:defaulth px� 
I
%s*synth21
|11    |SRL16E      |     2|
2default:defaulth px� 
I
%s*synth21
|12    |FDCE        |   120|
2default:defaulth px� 
I
%s*synth21
|13    |FDPE        |     1|
2default:defaulth px� 
I
%s*synth21
|14    |FDRE        |  1384|
2default:defaulth px� 
I
%s*synth21
|15    |IBUF        |   196|
2default:defaulth px� 
I
%s*synth21
|16    |OBUF        |   222|
2default:defaulth px� 
I
%s*synth21
+------+------------+------+
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Writing Synthesis Report : Time (s): cpu = 00:00:12 ; elapsed = 00:00:22 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
r
%s
*synth2Z
FSynthesis finished with 0 errors, 0 critical warnings and 0 warnings.
2default:defaulth p
x
� 
�
%s
*synth2�
}Synthesis Optimization Runtime : Time (s): cpu = 00:00:08 ; elapsed = 00:00:20 . Memory (MB): peak = 1111.676 ; gain = 0.000
2default:defaulth p
x
� 
�
%s
*synth2�
�Synthesis Optimization Complete : Time (s): cpu = 00:00:12 ; elapsed = 00:00:22 . Memory (MB): peak = 1111.676 ; gain = 111.879
2default:defaulth p
x
� 
B
 Translating synthesized netlist
350*projectZ1-571h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.0322default:default2
1123.4692default:default2
0.0002default:defaultZ17-268h px� 
g
-Analyzing %s Unisim elements for replacement
17*netlist2
1202default:defaultZ29-17h px� 
j
2Unisim Transformation completed in %s CPU seconds
28*netlist2
02default:defaultZ29-28h px� 
K
)Preparing netlist for logic optimization
349*projectZ1-570h px� 
u
)Pushed %s inverter(s) to %s load pin(s).
98*opt2
02default:default2
02default:defaultZ31-138h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.0012default:default2
1123.7542default:default2
0.0002default:defaultZ17-268h px� 
~
!Unisim Transformation Summary:
%s111*project29
%No Unisim elements were transformed.
2default:defaultZ1-111h px� 
U
Releasing license: %s
83*common2
	Synthesis2default:defaultZ17-83h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
442default:default2
12default:default2
02default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
synth_design2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
synth_design: 2default:default2
00:00:132default:default2
00:00:292default:default2
1123.7542default:default2
123.9572default:defaultZ17-268h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2C
/F:/Project/PTP/ptp/ptp.runs/synth_1/ptp_syn.dcp2default:defaultZ17-1381h px� 
�
%s4*runtcl2x
dExecuting : report_utilization -file ptp_syn_utilization_synth.rpt -pb ptp_syn_utilization_synth.pb
2default:defaulth px� 
�
Exiting %s at %s...
206*common2
Vivado2default:default2,
Tue Feb 25 15:52:01 20252default:defaultZ17-206h px� 


End Record