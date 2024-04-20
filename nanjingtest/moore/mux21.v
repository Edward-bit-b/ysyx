`include"MuxKey.v"
module mux21(S0,S1,S2,S3,S4,S5,S6,S7,S8,Y,din,F);
   input  [3:0]Y,S0,S1,S2,S3,S4,S5,S6,S7,S8;
   input  din;
   output [3:0]F;
   MuxKey #(9,4,4) i0 (F,Y,{
      S0, din ? S5 : S1,
      S1, din ? S5 : S2,
      S2, din ? S5 : S3,
      S3, din ? S5 : S4,
      S4, din ? S5 : S4,
      S5, din ? S6 : S1,
      S6, din ? S7 : S1,
      S7, din ? S8 : S1,
      S8, din ? S8 : S1});
endmodule
