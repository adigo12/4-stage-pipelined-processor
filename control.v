`timescale 1ns / 1ps

module control(
   input [1:0] OpCode, 
	 output reg ALUOp,
	 output reg RegWrite,
	 output reg PC_control
    );

	always @(OpCode) begin
		case (OpCode)
		2'b00: begin
			ALUOp = 1'b0;  //Move Immediate
	        RegWrite = 1;
	        PC_control = 0;
		end
			
		2'b01: begin
            ALUOp = 1'b1; // shift left logical
            RegWrite = 1;
            PC_control = 0;
		end
		
		2'b11: begin
		    // ALUOp = don't care
		    RegWrite = 0;
		    PC_control = 1;
		end
		endcase
	end
endmodule