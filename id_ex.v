`timescale 1ns / 1ps

module id_ex(
    input clk,
    input rst,
    input RegWrite,
    input ALUOp,
    input [7:0] Data1,
	 input [7:0] Data3,
    input [7:0] Data2,
    input [2:0] WriteRegNum,
    input [2:0] WriteRegNum2,
    output reg ID_EX_RegWrite,
    output reg ID_EX_ALUOp,
    output reg [7:0] ID_EX_Data1,
	 output reg [7:0] ID_EX_Data3,
    output reg [7:0] ID_EX_Data2,
    output reg [2:0] ID_EX_Reg,
	 output reg [2:0] ID_EX_Reg2
    );
    
    always @(posedge clk, negedge rst) 
	 begin
        if (rst == 0) begin
            ID_EX_RegWrite <= 0;
            ID_EX_ALUOp <= 0;
            ID_EX_Data1 <= 0;
				ID_EX_Data3 <= 0;
            ID_EX_Data2 <= 0;
            ID_EX_Reg <= 0;
				ID_EX_Reg2 <= 0;
        end
        else begin
            ID_EX_RegWrite <= RegWrite;
            ID_EX_ALUOp <= ALUOp;
            ID_EX_Data1 <= Data1;
				ID_EX_Data3 <= Data3;
            ID_EX_Data2 <= Data2;
            ID_EX_Reg <= WriteRegNum;
				ID_EX_Reg2 <= WriteRegNum2;
        end
    end
	 
endmodule
