`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:26:24 06/12/2014 
// Design Name: 
// Module Name:    mux 
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
module mux(
           input wire[3:0] A,B,C,D,
			  output wire[3:0] S,
			  input wire[1:0] ctrl
    );

assign S = (ctrl==0)?A:
           (ctrl==1)?B:
			  (ctrl==2)?C:D;

endmodule
