`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:27:43 06/12/2014 
// Design Name: 
// Module Name:    dispatch2 
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
module disp2(
             input wire[5:0] op,
				 output reg[3:0] dispatch2
    );
always@* begin
if(op==43) dispatch2<=5;
else if(op==35) dispatch2<=3;
else dispatch2<=0;
end

endmodule