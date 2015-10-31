`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:26:08 06/12/2014 
// Design Name: 
// Module Name:    MicroMux 
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
module MicroMux(
                input wire clk,
					 input wire[5:0] op,
					 input wire[3:0] current_mpc,
					 input wire[1:0] select,
					 output wire[3:0] next_mpc
    );
wire[3:0] mpc_plus_1,dispatch1,dispatch2;

mux mux1(4'b0000,dispatch1,dispatch2,mpc_plus_1,next_mpc,select);

mpc_plus_1 plus(current_mpc,mpc_plus_1);

disp1 d1(op,dispatch1);
disp2 d2(op,dispatch2);

endmodule
