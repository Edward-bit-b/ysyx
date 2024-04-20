`include"MuxKey.v"
module mux41(Y,F);
  input   [3:0]Y;
  output  F;
  MuxKey #(9,4 , 1) i0 (F, Y, {
    4'b0000, 1'b0,
    4'b0001, 1'b0,
    4'b0010, 1'b0,
    4'b0011, 1'b0,
    4'b0100, 1'b1,
    4'b0101, 1'b0,
    4'b0110, 1'b0,
    4'b0111, 1'b0,
    4'b1000, 1'b1
  });
endmodule

