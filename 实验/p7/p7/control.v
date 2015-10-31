`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:07:13 04/15/2014 
// Design Name: 
// Module Name:    control 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module control( input wire[5:0] op,
                output wire RegDst,
					 output wire ALUsrcB,
					 output wire MemToReg,
					 output wire WriteReg,
					 output wire MemWrite,
					 output wire Branch,
					 output wire ALUop1,
					 output wire ALUop0,
					 output wire anode,
					 output wire dot
    );

wire J,R,LW,SW,BEQ;
wire JMP;


and 
   and1(J,~op[5],~op[4],~op[3],~op[2],op[1],~op[0]),
	and2(R,~op[5],~op[4],~op[3],~op[2],~op[1],~op[0]),
	and3(LW,op[5],~op[4],~op[3],~op[2],op[1],op[0]),
	and4(SW,op[5],~op[4],op[3],~op[2],op[1],op[0]),
	and5(BEQ,~op[5],~op[4],~op[3],op[2],~op[1],~op[0]);
	
or
   or1(ALUsrcB,LW,SW),
	or2(WriteReg,R,LW);
	
assign RegDst = R;
assign MemToReg = LW;
assign MemWrite = SW;
assign Branch = BEQ;
assign ALUop1 = R;
assign ALUop0 = BEQ;
assign JMP = J;

assign anode = ~JMP;
assign dot   = ~JMP;



endmodule
