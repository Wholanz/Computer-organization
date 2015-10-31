`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:22:12 06/12/2014 
// Design Name: 
// Module Name:    Micro_control 
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
module Micro_control(
                     input wire clk,
							input wire rst,
							input wire[5:0] op,
							output wire[17:0] control,
							output wire[3:0] current_mpc
    );
	 
wire[3:0] next_mpc;

ctrlmem m1(current_mpc,control);

mpc_change c1(clk,rst,next_mpc,current_mpc);

MicroMux m2(clk,op,current_mpc,control[1:0],next_mpc);


endmodule