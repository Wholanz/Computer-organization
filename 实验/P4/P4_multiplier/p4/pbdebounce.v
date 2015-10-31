`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:15:57 03/18/2014 
// Design Name: 
// Module Name:    pbdebounce 
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
module pbdebounce
	(input wire clk,
	input wire button,
	output reg button_out);
	
	reg [7:0] pbshift;
	wire clk_1ms;
	timer_1ms m0(clk, clk_1ms);
	always@(posedge clk_1ms) begin
	pbshift=pbshift<<1;
	pbshift[0]=button;
	if (pbshift==0)
	button_out=0;
	if (pbshift==8'hFF)
	button_out=1;
end
endmodule