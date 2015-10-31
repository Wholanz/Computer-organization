`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:27:08 06/12/2014 
// Design Name: 
// Module Name:    mpc_plus_1 
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
module mpc_plus_1(
                  input wire[3:0] current_mpc,
						output wire[3:0] mpc_plus_1
);

assign mpc_plus_1 = current_mpc + 1;

endmodule 