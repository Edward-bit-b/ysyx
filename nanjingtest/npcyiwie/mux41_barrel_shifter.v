`include"MuxKey.v"
module mux41(X0,X1,X2,X3,Y,F);
  input   X0,X1,X2,X3;
  input   [1:0]Y;
  output  F;
  MuxKey #(4, 2, 1) i0 (F, Y, {
    2'b00, X0,
    2'b01, X1,
    2'b10, X2,
    2'b11, X3
  });
endmodule

