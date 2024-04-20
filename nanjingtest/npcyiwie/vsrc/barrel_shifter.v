`include "mux21_barrel_shifter"
`include "mux41_barrel_shifter"
module barrel_shifter(
	input [7:0]din,
	input [2:0]shamt,
	input LR,
	input AL,
	output [7:0]dout
	);

	
wire w0;
wire w1,w2,w3,w4,w5,w6,w7,w8;
wire w9,w10,w11,w12,w13,w14,w15,w16;
mux21 m1(.X0(0),.X1(din[7]),.Y(AL),.F(w0));

mux41 m2_7(.X0(din[7]),.X1(w0),.X2(din[7]),.X3(din[6]),.Y({LR,shamt[0]}),.F(w8));
mux41 m2_6(.X0(din[6]),.X1(din[7]),.X2(din[6]),.X3(din[5]),.Y({LR,shamt[0]}),.F(w7));
mux41 m2_5(.X0(din[5]),.X1(din[6]),.X2(din[5]),.X3(din[4]),.Y({LR,shamt[0]}),.F(w6));
mux41 m2_4(.X0(din[4]),.X1(din[5]),.X2(din[4]),.X3(din[3]),.Y({LR,shamt[0]}),.F(w5));
mux41 m2_3(.X0(din[3]),.X1(din[4]),.X2(din[3]),.X3(din[2]),.Y({LR,shamt[0]}),.F(w4));
mux41 m2_2(.X0(din[2]),.X1(din[3]),.X2(din[2]),.X3(din[1]),.Y({LR,shamt[0]}),.F(w3));
mux41 m2_1(.X0(din[1]),.X1(din[2]),.X2(din[1]),.X3(din[0]),.Y({LR,shamt[0]}),.F(w2));
mux41 m2_0(.X0(din[0]),.X1(din[1]),.X2(din[0]),.X3(0),.Y({LR,shamt[0]}),.F(w1));
mux41 m2_15(.X0(w8),.X1(w0),.X2(w8),.X3(w6),.Y({LR,shamt[1]}),.F(w16));
mux41 m2_14(.X0(w7),.X1(w0),.X2(w7),.X3(w5),.Y({LR,shamt[1]}),.F(w15));
mux41 m2_13(.X0(w6),.X1(w8),.X2(w6),.X3(w4),.Y({LR,shamt[1]}),.F(w14));
mux41 m2_12(.X0(w5),.X1(w7),.X2(w5),.X3(w3),.Y({LR,shamt[1]}),.F(w13));
mux41 m2_11(.X0(w4),.X1(w6),.X2(w4),.X3(w2),.Y({LR,shamt[1]}),.F(w12));
mux41 m2_10(.X0(w3),.X1(w5),.X2(w3),.X3(w1),.Y({LR,shamt[1]}),.F(w11));
mux41 m2_9(.X0(w2),.X1(w4),.X2(w2),.X3(0),.Y({LR,shamt[1]}),.F(w10));
mux41 m2_8(.X0(w1),.X1(w3),.X2(w1),.X3(0),.Y({LR,shamt[1]}),.F(w9));

mux41 m2_23(.X0(w16),.X1(w0),.X2(w16),.X3(w12),.Y({LR,shamt[2]}),.F(dout[7]));
mux41 m2_22(.X0(w15),.X1(w0),.X2(w15),.X3(w11),.Y({LR,shamt[2]}),.F(dout[6]));
mux41 m2_21(.X0(w14),.X1(w0),.X2(w14),.X3(w10),.Y({LR,shamt[2]}),.F(dout[5]));
mux41 m2_20(.X0(w13),.X1(w0),.X2(w13),.X3(w9),.Y({LR,shamt[2]}),.F(dout[4]));
mux41 m2_19(.X0(w12),.X1(w16),.X2(w12),.X3(0),.Y({LR,shamt[2]}),.F(dout[3]));
mux41 m2_18(.X0(w11),.X1(w15),.X2(w11),.X3(0),.Y({LR,shamt[2]}),.F(dout[2]));
mux41 m2_17(.X0(w10),.X1(w14),.X2(w10),.X3(0),.Y({LR,shamt[2]}),.F(dout[1]));
mux41 m2_16(.X0(w9),.X1(w13),.X2(w9),.X3(0),.Y({LR,shamt[2]}),.F(dout[0]));
endmodule

