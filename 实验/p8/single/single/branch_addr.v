`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:50:55 05/12/2013 
// Design Name: 
// Module Name:    branch_addr 
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
module branch_addr(
                   input wire[31:0] pc_plus_4,
						 input wire[31:0] exten_branch,
						 output wire[31:0] branch_addr
    );


assign branch_addr = pc_plus_4 + exten_branch;

endmodule
