`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:54:11 04/08/2014 
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
module top(input wire clk,
           input wire rst,
           input wire[31:0] I,
           output wire[31:0]A, B,
           output wire[31:0]result
    );

wire[2:0] ALUoper;
wire zero;

assign zero=0;

RegFile m0(clk,rst,I[25:21],I[20:16],I[15:11],result,A,B,1'b1);
alu m1(A,B,ALUoper,result,zero);
aluc m2(2'b10,I[5:0],ALUoper);

endmodule
