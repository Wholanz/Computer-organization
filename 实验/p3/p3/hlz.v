`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:42:49 03/11/2014 
// Design Name: 
// Module Name:    hlz 
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
module hlz(input wire clk,
           input wire[1:0] button,
			  input wire[5:0] switch,
			  output wire[7:0] segment,
			  output wire[3:0] anode,
			  output wire o_zf
    );

wire[2:0] control;
wire[15:0] disp_code;
wire[15:0] disp_num;
reg[15:0] op1,op2;

initial begin
op1=16'h1122;
op2=16'h3344;
end

assign disp_num = switch[1]?disp_code: (switch[0]?op2:op1);
display M3(clk, disp_num, anode, segment);
alu M1(op1, op2, control, o_zf, disp_code);
aluc M2 (button, switch[5:2], control);


endmodule
