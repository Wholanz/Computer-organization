`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:49:56 06/02/2014 
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
module control( 
               input wire[3:0] current_state,
					output wire PCWrite,
					            PCWriteCond,
									lorD,
									MemRead,
									MemWrite,
									IRWrite,
									MemToReg,
									ALUsrcA,
									RegWrite,
									RegDst,
					output wire[1:0] PCSource,
					                 ALUop,
										  ALUsrcB
    );
assign PCWrite = ((current_state==0)|(current_state==9));
assign PCWriteCond = (current_state==8);
assign lorD = ((current_state==3)|(current_state==5));
assign MemRead = ((current_state==0)|(current_state==3));
assign MemWrite = (current_state==5);
assign IRWrite = (current_state==0);
assign MemToReg = (current_state==4);
assign ALUsrcA = ((current_state==2)|(current_state==6)|(current_state==8));
assign RegWrite = ((current_state==4)|(current_state==7));
assign RegDst =(current_state==7);

assign PCSource[1] = (current_state==9);
assign PCSource[0] = (current_state==8);
assign ALUop[1] = (current_state==6);
assign ALUop[0] = (current_state==8);
assign ALUsrcB[1] = ((current_state==1)|(current_state==2));
assign ALUsrcB[0] = ((current_state==0)|(current_state==1));


endmodule
