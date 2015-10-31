`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:43:11 03/25/2014 
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
                  input wire clk,
                  input wire cal,
                  input wire reset,
                  input wire[1:0] choose,
                  input wire add_button,
						input wire disp_switch,
                  output wire[7:0] segment,
                  output wire[3:0] anode,
                  output wire led
                  );

wire[16:0] disp_num;
wire[16:0] cal_num;
wire[16:0] add_num;
wire cal_out;
wire add_button_out;

assign disp_num = disp_switch?cal_num:add_num;

pbdebounce a0(clk,cal,cal_out);
pbdebounce a1(clk,add_button,add_button_out);

divider m1(choose,add_button_out,reset,cal_out,cal_num,led,add_num);

display m0(clk,disp_num[15:0],anode,segment);

endmodule 


