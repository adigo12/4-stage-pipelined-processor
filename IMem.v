`timescale 1ns / 1ps
module IMem(
	 input [7:0] PC,
    input rst,
    output [7:0] instruc_code
    );
	reg [7:0] Mem [7:0];   // Array of length 36, each element 1 byte

	assign instruc_code = Mem[PC]; //assigning instruction code as address of PC
	
	always @(rst)
	begin
		if (rst == 0) begin
		  Mem[0] = 8'b00100001; //add R4,R1
		  Mem[1] = 8'b01100001; //sll R4,1
		  Mem[2] = 8'b00001100; //add R1,R4
		  Mem[3] = 8'b11000001; //j L1	
		  Mem[4] = 8'b01001011; //sll R1,3
		  Mem[5] = 8'b00011001; //L1: add R3,R1
		end
	end
endmodule