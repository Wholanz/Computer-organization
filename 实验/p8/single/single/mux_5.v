`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:48:01 05/12/2013 
// Design Name: 
// Module Name:    mux_5 
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
module mux_5(
           input wire[4:0] A,B,
			  output wire[4:0] S,
			  input wire ctrl
    );

assign S = (ctrl==0)?A:B;

endmodule
