`timescale 1ns / 1ps

module ALU_Block(
   input [7:0] A,
    input [7:0] ForwardA,
    input [7:0] B,
	 input [7:0] Imm,
    input ForwardSignal,
    input ctrl,
    output reg [7:0] result
    );
    
	always @(*) begin
        case (ctrl)
        0: begin
            if (ForwardSignal == 1'b0) 
                result <= A + B;
            else
                result <= ForwardA + B; 
        end
        
        1: begin
            if (ForwardSignal == 1'b0) 
                result <= A << Imm;
            else
                result <= ForwardA << Imm;
        end
        endcase
	end 
endmodule
