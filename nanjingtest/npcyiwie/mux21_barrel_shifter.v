`include"MuxKey.v"
module mux21(X0,X1,Y,F);
   input X0,X1,Y;
   output F;
   MuxKey #(2,1,1) i0 (F,Y,{
      1'b0,X0,
      1'b1,X1});
endmodule
