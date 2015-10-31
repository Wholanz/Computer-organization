`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:27:32 06/12/2014 
// Design Name: 
// Module Name:    dispatch1 
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
module disp1(
            input wire[5:0] op,
				output reg[3:0] dispatch1
    );

always @* begin
case(op)
2:dispatch1<=9;
4:dispatch1<=8;
0:dispatch1<=6;
35:dispatch1<=2;
43:dispatch1<=2;
default:dispatch1<=0;
endcase
end

endmodule
