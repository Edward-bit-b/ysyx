module encoder(in_x,in_y,out_s,out_c);
  input   [3:0]in_x,in_y;
  output  [3:0]out_s;
  output  out_c;
  assign {out_c,out_s}=in_x+in_y;
  


 endmodule

