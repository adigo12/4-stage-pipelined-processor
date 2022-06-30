`timescale 1ns / 1ps

module forwardingunit(
    input clk,
    input [2:0] EX_WB_Reg,
    input [2:0] ID_EX_Rs1,
    input [2:0] ID_EX_Rs2,
    output reg ForwardSignal
    );
    
    always @(*) begin
        if ((ID_EX_Rs1 == EX_WB_Reg)||(ID_EX_Rs2 == EX_WB_Reg))
            ForwardSignal <= 1;    
        else
            ForwardSignal <= 0;
    end
endmodule