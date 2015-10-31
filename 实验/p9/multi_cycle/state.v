`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:12:57 06/02/2014 
// Design Name: 
// Module Name:    state 
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
module state_now(
             input wire finish,
             input wire multi_clk,
             input wire[3:0] next_state,
				 output wire[3:0] current_state
    );

reg [3:0] temp_state;	 

initial temp_state <= 0;
	 
assign current_state = temp_state;

always @(posedge multi_clk)
temp_state = next_state;

endmodule
