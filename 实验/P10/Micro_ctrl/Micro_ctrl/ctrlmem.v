`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:23:01 06/12/2014 
// Design Name: 
// Module Name:    ctrlmem 
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
module ctrlmem(
					input wire[3:0] mpc,
					output wire[17:0] control
    );

reg[17:0] temp_control;

initial  temp_control <= 0;
assign control = temp_control;

always @(mpc) begin
case(mpc)
0:temp_control<={16'h0851,2'b11};
1:temp_control<={16'h1800,2'b01};
2:temp_control<={16'h3000,2'b10};
3:temp_control<={16'h00C0,2'b11};
4:temp_control<={16'h0300,2'b00};
5:temp_control<={16'h00A0,2'b00};
6:temp_control<={16'hA000,2'b11};
7:temp_control<={16'h0500,2'b00};
8:temp_control<={16'h6006,2'b00};
9:temp_control<={16'h0009,2'b00};
default:temp_control <= 0 ;
endcase
end

endmodule
