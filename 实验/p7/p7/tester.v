`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:46:56 04/15/2014
// Design Name:   control
// Module Name:   C:/Users/student/Desktop/p7/p7/tester.v
// Project Name:  p7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tester;

	// Inputs
	reg [5:0] op;

	// Outputs
	wire RegDst;
	wire ALUsrcB;
	wire MemToReg;
	wire WriteReg;
	wire MemWrite;
	wire Branch;
	wire ALUop1;
	wire ALUop0;
	wire anode;
	wire dot;

	// Instantiate the Unit Under Test (UUT)
	control uut (
		.op(op), 
		.RegDst(RegDst), 
		.ALUsrcB(ALUsrcB), 
		.MemToReg(MemToReg), 
		.WriteReg(WriteReg), 
		.MemWrite(MemWrite), 
		.Branch(Branch), 
		.ALUop1(ALUop1), 
		.ALUop0(ALUop0), 
		.anode(anode), 
		.dot(dot)
	);

	initial begin
		// Initialize Inputs
		op = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

