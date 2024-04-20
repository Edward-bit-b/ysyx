module encoder(A,B,Cin,Overflow,Result,Zero,Carry);
  input   [3:0]A,B;
  input Cin;
  output  [3:0]Result;
  output  Overflow,Zero,Carry;
  wire [3:0] t_no_Cin;
  reg [2:0] z=0;
  assign t_no_Cin=({4{Cin}}^B)+{z,Cin};
  assign {Carry,Result}=A+t_no_Cin;
  assign Overflow=(A[3]==t_no_Cin[3])&&(Result[3]!=A[3]);
  assign Zero=~(|Result);


 endmodule

