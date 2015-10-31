`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:14:09 06/03/2014 
// Design Name: 
// Module Name:    regfile 
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
module regfile(input wire clk,
                  input wire rst,
						input wire i_wen,
						input wire[4:0] i_addr1,i_addr2,i_addr3,
						input wire[4:0] i_wreg,
						input wire[31:0] i_wdata,
						output wire[31:0] o_op1,o_op2,o_op3
						
    );

reg[31:0] mem[31:0];
initial begin
mem[0] = 0;
mem[1] = 0;
mem[2] = 0;
mem[3] = 0;
mem[4] = 0;
mem[5] = 0;
mem[6] = 0;
mem[7] = 0;
mem[8] = 0;
mem[9] = 0;
mem[10] = 0;
mem[11] = 0;
mem[12] = 0;
mem[13] = 0;
mem[14] = 0;
mem[15] = 0;
mem[16] = 0;
mem[17] = 0;
mem[18] = 0;
mem[19] = 0;
mem[20] = 0;
mem[21] = 0;
mem[22] = 0;
mem[23] = 0;
mem[24] = 0;
mem[25] = 0;
mem[26] = 0;
mem[27] = 0;
mem[28] = 0;
mem[29] = 0;
mem[30] = 0;
mem[31] = 0;
end
assign o_op1 = mem[i_addr1];
assign o_op2 = mem[i_addr2];
assign o_op3 = mem[i_addr3];



always @(negedge clk,posedge rst)
if (rst) begin
   mem[0] = 0;
mem[1] = 0;
mem[2] = 0;
mem[3] = 0;
mem[4] = 0;
mem[5] = 0;
mem[6] = 0;
mem[7] = 0;
mem[8] = 0;
mem[9] = 0;
mem[10] = 0;
mem[11] = 0;
mem[12] = 0;
mem[13] = 0;
mem[14] = 0;
mem[15] = 0;
mem[16] = 0;
mem[17] = 0;
mem[18] = 0;
mem[19] = 0;
mem[20] = 0;
mem[21] = 0;
mem[22] = 0;
mem[23] = 0;
mem[24] = 0;
mem[25] = 0;
mem[26] = 0;
mem[27] = 0;
mem[28] = 0;
mem[29] = 0;
mem[30] = 0;
mem[31] = 0;
	end
else if(i_wen)
   if(i_wreg!=0)
   mem[i_wreg] = i_wdata;

endmodule
