`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:17:40 06/03/2014 
// Design Name: 
// Module Name:    pc 
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
module pc(       input wire pc_change,
                 input wire clk,
					  input wire rst,
					  input wire[31:0] i_pc,
					  output wire[31:0] o_pc
    );
reg[31:0] t_pc;

initial t_pc = 0;
assign o_pc = rst?0:t_pc;

always @(posedge clk,posedge rst)
if(rst) t_pc <= 0;
else if(pc_change)
t_pc <= i_pc;


endmodule

