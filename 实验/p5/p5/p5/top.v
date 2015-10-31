`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:27:39 03/25/2014 
// Design Name: 
// Module Name:    top 
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
module top(
           input wire button,
			  input wire[7:0] switch,
			  output wire[7:0] led
    );
wire choose;

assign choose=button;


assign led[0]=~choose&switch[0];
assign led[1]=~choose&switch[1];
assign led[2]=~choose&switch[2];
assign led[3]=~choose&switch[3];
assign led[4]=choose&switch[4];
assign led[5]=choose&switch[5];
assign led[6]=choose&switch[6];
assign led[7]=choose&switch[7];


endmodule
