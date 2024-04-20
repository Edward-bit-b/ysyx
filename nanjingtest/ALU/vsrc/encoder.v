`include "mux41.v"
module encoder(A,B,command_input,Result,Carry,Overflow,Out);
  input    [3:0]A,B;
  input    [2:0]command_input;
  output    [3:0]Result;
  output    Carry,Overflow,Out;
 wire [3:0] w0; 
 wire [6:0] Result_end;
wire [6:0] Result_1;//Out,Overflow,Carry,Result
wire [4:0] Result_11;
wire Result_12,Result_13;

wire [6:0] Result_2;
wire [4:0] Result_21;
wire Result_22,Result_23;

wire [6:0] Result_3;
wire [6:0] Result_4;
wire [6:0] Result_5;
wire [6:0] Result_6;
wire [6:0] Result_7;
wire [6:0] Result_8;
assign Result_11=A+B;
assign Result_12=(A[3]==B[3])&&(Result_11[3]!=A[3]);
assign Result_13=0;
assign Result_1={Result_13,Result_12,Result_11};
//assign w0=~B;
//assign Result_2[4:0]=A+w0+1;
//assign Result_2[6]=0;
//assign Result_2[5]=(A[3]==B[3])&&(Result_2[3]!=A[3]);

assign w0=~B;
assign Result_21[4:0]=A+w0+1;
assign Result_23=0;
assign Result_22=(A[3]==B[3])&&(Result_21[3]!=A[3]);
assign Result_2={Result_23,Result_22,Result_21};

assign Result_3[3:0]=~A;
assign Result_3[6:4]=3'b000;

assign Result_4[3:0]=A&B;
assign Result_4[6:4]=3'b000;

assign Result_5[3:0] = A|B;
assign Result_5[6:4] = 3'b000;

assign Result_6[3:0] = A^B;
assign Result_6[6:4] = 3'b000;

assign Result_7[6]=(!Result_22 && Result_21[3])|(Result_22 && A[3]);
assign Result_7[5:0]=0;

assign Result_8[5]=~((A[3]^B[3])&&(A[2]^B[2])&&(A[1]^B[1])&&(A[0]^B[0]));
assign Result_8[6]=0;
assign Result_8[4:0]=0;

mux41 mux41(
	.Result_1(Result_1),
	.Result_2(Result_2),
	.Result_3(Result_3),
	.Result_4(Result_4),
	.Result_5(Result_5),
	.Result_6(Result_6),
	.Result_7(Result_7),
	.Result_8(Result_8),

	.Y(command_input),
	.F(Result_end));

	assign Out=Result_end[6];
	assign Overflow=Result_end[5];
	assign Carry=Result_end[4];
	assign Result = Result_end[3:0];
 endmodule

