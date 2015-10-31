`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:41:59 06/09/2014
// Design Name:   pbdebounce
// Module Name:   C:/Users/vaio/Desktop/p9/multi_cycle/pbdebounce_tester.v
// Project Name:  multi_cycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pbdebounce
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pbdebounce_tester;

	// Inputs
	reg clk;
	reg button;

	// Outputs
	wire button_out;

	// Instantiate the Unit Under Test (UUT)
	pbdebounce uut (
		.clk(clk), 
		.button(button), 
		.button_out(button_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		button = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

