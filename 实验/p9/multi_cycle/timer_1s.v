`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:10:00 06/03/2014 
// Design Name: 
// Module Name:    timer_1s 
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
module timer_1s
	(input wire clk,
	output reg clk_1s);
	
	reg [31:0] cnt;
	initial begin
	cnt [31:0] <=0;
	clk_1s <= 0;
	end
	always@(posedge clk)
	if(cnt>=25000000) begin
	cnt<=0;
	clk_1s <= ~clk_1s;
	end
	else begin
	cnt<=cnt+1;
	end
endmodule