`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:49:58 05/12/2013 
// Design Name: 
// Module Name:    single_pc_plus_4 
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
module single_pc_plus_4(
                        input wire[31:0] i_pc,
								output wire[31:0] o_pc
    );
assign o_pc = i_pc + 1;

endmodule
