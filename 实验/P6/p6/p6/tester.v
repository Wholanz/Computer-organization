`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:52:13 04/11/2014
// Design Name:   top
// Module Name:   C:/Users/vaio/Desktop/p6/p6/tester.v
// Project Name:  p6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
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
	reg clk;
	reg rst;
	reg [31:0] I;

	// Outputs
	wire [31:0] A;
	wire [31:0] B;
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst(rst), 
		.I(I), 
		.A(A), 
		.B(B), 
		.result(result)
	);
   
	
	initial begin
		// Initialize Inputs
		clk = 0;          
		rst = 0;
		I = 32'h01AB_8020;
		clk = 1;
		#5;
		clk = 0;
		#5;
		I = 32'h01C9_8822;
		#5;
		clk=1;
		#5;
		clk=0;
		#5;
		I = 32'h01EA_9024;
		#5;
		clk=1;
		#5;
		clk=0;
		#5;
		I = 32'h030B_9825;
		#5;
		clk=1;
		#5;
		clk=0;
		#5;
		I = 32'h032C_A02A;
		
	

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

