`include "mux41"
`include "mux21"
module barrel_shifter
(
  input   clk, in, reset,
  output reg out
);
reg [3:0] state,state_next;
reg din=0;
parameter[3:0] S0 = 0, S1 = 1, S2 = 2, S3 = 3,
          S4 = 4, S5 = 5, S6 = 6, S7 = 7, S8 = 8;
mux41 mux(.Y(state),.F(out));
mux21 muxx(.S0(S0),.S1(S1),.S2(S2),.S3(S3),.S4(S4),.S5(S5),
	.S6(S6),.S7(S7),.S8(S8),.Y(state),.din(din),.F(state_next));
always@(posedge clk)
	if( reset==0)
		state<=S0;
	else  begin
		din<=in;	
		state<=state_next;
		end


endmodule

