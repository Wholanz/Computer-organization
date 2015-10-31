`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:43:47 03/11/2014 
// Design Name: 
// Module Name:    alu 
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
module alu(input wire[31:0] op1,
           input wire[31:0] op2,
			  input wire[2:0]  control,
			  output wire o_zf,
			  output reg[31:0] disp_code
    );

wire switch;
wire co;
wire[15:0] add_sub_result;
assign switch = (control==3'b110);


assign o_zf = (disp_code==0);
adder_32bits m0(op1, op2, switch, add_sub_result, co);

always @* begin

case(control)

3'b010: disp_code= add_sub_result;
3'b110: disp_code= add_sub_result;
3'b010: disp_code= add_sub_result;
3'b110: disp_code= add_sub_result;
3'b000: disp_code= op1 & op2;
3'b001: disp_code= op1 | op2;
3'b111: disp_code= (op1<op2?1:0);
default:disp_code = 0;

endcase

end


endmodule 