`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:46:23 05/12/2013 
// Design Name: 
// Module Name:    aluc 
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
module aluc(input wire[1:0] button,
            input wire[5:0] switch,
				output wire[2:0]control
    );

wire ALUop1,ALUop2;
wire result1,result2,result3,result4,result5,result6,result7;
wire or_result1,or_result2;

assign ALUop1 = button[1];
assign ALUop2 = button[0];


and
   and1(result1,~switch[3],~switch[2],~switch[1],~switch[0],ALUop1),
	and2(result2,~switch[3],~switch[2],switch[1],~switch[0],ALUop1),
	and3(result3,~switch[3],switch[2],~switch[1],~switch[0],ALUop1),
	and4(result4,~switch[3],switch[2],~switch[1],switch[0],ALUop1),
	and5(result5,switch[3],~switch[2],switch[1],~switch[0],ALUop1),
	and6(result6,~ALUop1,ALUop2),
	and7(result7,~ALUop1,~ALUop2);
or
  or1(or_result1,result4,result5),
  or2(control[1],result1,result2,result5,result6,result7),
  or3(control[2],result6,result2,result5);
and
   and8(control[0],ALUop1,or_result1);



endmodule

