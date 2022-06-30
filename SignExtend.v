`timescale 1ns / 1ps

module SignExtend(
input [7:0] instruc_code,
    output reg [7:0] ImmValue
    );
    
    always @(instruc_code) 
	 begin
        if (instruc_code[7:6] == 2'b01) begin // sll
            // No sign extension required
            ImmValue = {5'b00000, instruc_code[2:0]};
        end
        else begin
            // Sign extend
            if (instruc_code[7:6] == 2'b00)  
                
                ImmValue = {5'b00000, instruc_code[2:0]};
                
            else if (instruc_code[7:6] == 2'b11) 
                if (instruc_code[5] == 0)
                    ImmValue = {2'b00, instruc_code[2:0]};
                else
                    ImmValue = {2'b11, instruc_code[2:0]};
        end
    end
endmodule