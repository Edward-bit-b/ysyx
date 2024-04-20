module encoder(X,en,y);
  input   [7:0]X;
  input   en;
  output reg  [2:0]y;
  always @(*)begin
  	if (en) begin
  	casez(X)
		8'b0000_0001:y =3'b000;
		8'b0000_001?:y=3'b001;
		8'b0000_01??:y=3'b010;
		8'b0000_1???:y=3'b011;
		8'b0001_????:y=3'b100;
		8'b001?_????:y=3'b101;
		8'b01??_????:y=3'b110;
		8'b1???_????:y=3'b111;
		default:y=3'b000;
	endcase
	end

	else 

		y=3'b000;
	end
endmodule

