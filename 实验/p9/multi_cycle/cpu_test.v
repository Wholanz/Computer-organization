`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:45:32 06/06/2014
// Design Name:   mul_CPU
// Module Name:   C:/Users/vaio/Desktop/p9/multi_cycle/cpu_test.v
// Project Name:  multi_cycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mul_CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_test;

	// Inputs
	reg clk;
	reg exec;
	reg rst;
	reg [1:0] disp_type;
	reg [4:0] reg_index;

	// Outputs
	reg [5:0] led=0;
	reg [7:0] segment;
	reg [3:0] anode;
	reg [15:0] disp_num;
	reg finish;
	reg [31:0] inst_reg;

	// Instantiate the Unit Under Test (UUT)
	mul_CPU uut (
		.clk(clk), 
		.exec(exec), 
		.rst(rst), 
		.disp_type(disp_type), 
		.reg_index(reg_index), 
		.led(led), 
		.segment(segment), 
		.anode(anode),
		.disp_num(disp_num), 
		.finish(finish), 
		.inst_reg(inst_reg)
	);
   initial forever begin
	#2;
	clk = ~clk;
	end
	initial begin
		// Initialize Inputs
		clk = 0;
		exec = 0;
		rst = 0;
		disp_type = 0;
		reg_index = 0;

		// Wait 100 ns for global reset to finish
		//#60;
		//exec = 1;
		//reg_index = 1;
		//#300;
	//	exec = 0;
        
		// Add stimulus here

	end
      
endmodule

