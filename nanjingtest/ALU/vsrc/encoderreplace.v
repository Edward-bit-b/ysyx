module encoder(A,B,command_input,Overflow,Result,Carry);
  input    [3:0]A,B;
  input   [2:0]command_input;
  output  reg [3:0]Result;
  output  reg Carry;
  output  reg  Overflow;
  reg [3:0] a;
  reg [3:0] b;
  assign a=A;
  assign b=B;
  always_latch begin
  	case(command_input)
		3'b000:begin
  		  {Carry,Result}=a+b;
  		  Overflow=(a[3]==b[3])&&(Result[3]!=a[3]);
		  end
		3'b001:begin
		  b=~b;
		  {Carry,Result}=a+ b+1;
		  Overflow=(a[3]==b[3])&&(Result[3]!=a[3]);
		  
		  end
		3'b010:begin
		  Result=~a;Carry=0;Overflow=0;
		  end
		3'b011:begin
		  Result=a & b;Carry=0;Overflow=0;

		  end
		3'b100:begin
		  Result=a|b;Carry=0;Overflow=0;

		  end
		3'b101:begin
		  Result=a^b;Carry=0;Overflow=0;

		  end
		3'b110:begin
		  if (a[3]==b[3]) begin
		  	if(a<b) Result=1;
				else Result=0;
		        end
		  else begin
		  	if(a[3]==0) Result=0;
			if(a[3])    Result=1;
		       end
		  Carry=0;Overflow=0;

		  end
		3'b111:begin
		  if (a==b) Result=1;
		  else Result=0;
                  Carry=0;Overflow=0;

		  end
		default:begin
		  Carry=0;Overflow=0;
		  Result=0;
		  end
		endcase
	end


 endmodule

