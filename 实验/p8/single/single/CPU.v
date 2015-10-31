`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:42:34 05/12/2013 
// Design Name: 
// Module Name:    CPU 
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
module CPU(
           input wire clk,
			  input wire exec,
           input wire rst,
           input wire[1:0] disp_type,
			  input wire[4:0] reg_index,
			  output wire[5:0] led,
			  output wire[7:0] segment,
			  output wire[3:0] anode
			  
    );

wire[31:0] pc;
wire [31:0] pc_plus_4;
wire [31:0] branch_address;
wire [31:0] instruction;
wire RegDst,ALUsrcB,MemToReg,WriteReg,MemWrite,Branch,ALUop1,ALUop0,Jump;
wire[31:0] bracn_or_next,jump_or_not;
wire[4:0] rt_or_rd;
wire[31:0] addr_or_data,result_or_data;
wire [31:0] exten_branch,exten_jump,branch_or_next;
wire equal_branch;
wire[31:0] mem_data;
wire[2:0] func;
wire[1:0] ALUop;
wire[31:0] result;
wire zero;
reg[15:0] disp_num;
reg[15:0] clock;
wire[31:0] Rdata1,Rdata2,Rdata3;
wire exec_out,rst_out;

initial begin

clock = 0;

end

pbdebounce p1(clk,exec,exec_out);
pbdebounce p2(clk,rst,rst_out);

assign led[0] = (pc!=32'hFFFFFFFF);
assign led[1] = (instruction[31:26]==0&led[0]);
assign led[2] = (instruction[31:26]==35&led[0]);
assign led[3] = (instruction[31:26]==43&led[0]);
assign led[4] = (instruction[31:26]==4&led[0]);
assign led[5] = (instruction[31:26]==2&led[0]);

data mem1(.addr(result[8:0]),.clk(clk),.din(Rdata2),.dout(mem_data),.we(MemWrite));
inst in1(.addr(pc[8:0]),.clk(clk),.dout(instruction));



control c1(instruction[31:26],RegDst,ALUsrcB,MemToReg,WriteReg,MemWrite,Branch,ALUop1,ALUop0,Jump);

single_pc_plus_4 k1(pc,pc_plus_4);
single_pc k2(exec_out,rst_out,jump_or_not,pc);

branch_addr b1(pc_plus_4,exten_branch,branch_address);

mux_5 m1(instruction[20:16],instruction[15:11],rt_or_rd,RegDst);
assign exten_branch = {{16{instruction[15]}},instruction[15:0]};
assign equal_branch = zero & Branch;
mux_32 m2(pc_plus_4,branch_address,branch_or_next,equal_branch);
assign exten_jump = {{6{instruction[25]}},instruction[25:0]};
mux_32 m3(branch_or_next,exten_jump,jump_or_not,Jump);
mux_32 m4(Rdata2,exten_branch,addr_or_data,ALUsrcB);
mux_32 m5(result,mem_data,result_or_data,MemToReg);


assign ALUop = {ALUop1,ALUop0};
aluc a1(ALUop,instruction[5:0],func);
alu  a2(Rdata1,addr_or_data,func,zero,result);


single_gpr g1(exec_out,rst_out,WriteReg,instruction[25:21],instruction[20:16],reg_index,rt_or_rd,result_or_data,Rdata1,Rdata2,Rdata3);



always@(posedge exec_out,posedge rst_out) begin
if(rst_out) clock = 0;
else clock = clock + 1; 
end
display d1(clk,disp_num,anode,segment);

always @* begin
case(disp_type)
2'b00:
disp_num<= Rdata3[15:0];
2'b01:
disp_num<= Rdata3[31:16];
2'b10:
disp_num<= pc[15:0];
2'b11:
disp_num<= clock[15:0];
endcase
end 

endmodule 