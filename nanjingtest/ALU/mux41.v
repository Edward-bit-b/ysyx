`include"MuxKey.v"
module mux41(Result_1,Result_2,Result_3,Result_4,Result_5,Result_6,Result_7,Result_8,Y,F);
  input   [6:0]Result_1,Result_2,Result_3,Result_4,Result_5,Result_6,Result_7,Result_8;
  input   [2:0]Y;
  output  [6:0]F;
  MuxKey #(8, 3, 7) i0 (F, Y, {
    3'b000, Result_1,
    3'b001, Result_2,
    3'b010, Result_3,
    3'b011, Result_4,
    3'b100, Result_5,
    3'b101, Result_6,
    3'b110, Result_7,
    3'b111, Result_8
  });
endmodule

