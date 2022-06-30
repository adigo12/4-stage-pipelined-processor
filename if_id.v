`timescale 1ns / 1ps

module if_id(
    input clk,
    input rst,
    input [7:0] instruc_code,
    output reg [7:0] IF_ID_Instr_Code
    );
    
    always @(posedge clk, negedge rst) begin
        if (rst == 0)
            IF_ID_Instr_Code <= 0;
        else
            IF_ID_Instr_Code <= instruc_code;
    end
	 
endmodule
