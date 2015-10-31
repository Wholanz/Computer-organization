`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:23:35 06/12/2014 
// Design Name: 
// Module Name:    mpc_change 
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
module mpc_change(
                  input wire clk,
						input wire rst,
						input wire[3:0] next_mpc,
						output wire[3:0] current_mpc
    );
reg[3:0] temp_mpc;
initial temp_mpc = 4;

assign current_mpc= temp_mpc;

always@(posedge clk,posedge rst) begin
if(rst) temp_mpc <= 4;
else
temp_mpc <= next_mpc;
end

endmodule
