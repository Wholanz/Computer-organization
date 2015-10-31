`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:49:28 05/12/2013 
// Design Name: 
// Module Name:    single_pc 
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
module single_pc(
                 input wire clk,
					  input wire rst,
					  input wire[31:0] i_pc,
					  output wire[31:0] o_pc
    );
reg[31:0] t_pc;

initial t_pc = 32'hFFFFFFFF;
assign o_pc = rst?32'hFFFFFFFF:t_pc;

always @(posedge clk,posedge rst)
if(rst) t_pc <= 32'hFFFFFFFF;
else
t_pc <= i_pc;


endmodule
