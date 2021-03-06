`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:06:02 06/03/2014 
// Design Name: 
// Module Name:    mul_CPU 
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
module mul_CPU(
           input wire clk,
			  input wire mode,
			  input wire exec,
           input wire rst,
           input wire[1:0] disp_type,
			  input wire[4:0] reg_index,
			  output wire[7:0] led,
			  output wire[7:0] segment,
			  output wire[3:0] anode
			  
			  
    );
wire multi_clk;
wire[31:0] pc;
reg[31:0] inst_reg;
reg[31:0] memdata_reg;
wire[31:0] A,B;
reg[31:0] ALUout;
reg[31:0] Rdata1,Rdata2;


reg[31:0] clock;
reg[15:0] disp_num;
wire finish;

wire[31:0] mem_out;
wire[31:0] Rdata3;

wire[31:0] mem_addr;
wire[4:0] reg_dst;
wire[31:0] result_or_data;
wire[31:0] ALUop1,ALUop2;
wire[31:0] PC_next;

wire[31:0] branch_exten;
wire clk_1s;
wire[3:0] next_state,current_state;
wire[31:0] ALUresult;
wire[2:0] ALUsignal;
wire zero;
wire branch_or_not;
wire pc_change;
wire exec_out,rst_out;

wire PCWrite,PCWriteCond,lorD,MemRead,MemWrite,IRWrite,MemToReg,ALUsrcA,RegWrite,RegDst;
wire[1:0] PCSource,ALUop,ALUsrcB;

initial begin

clock = 0;
end

pbdebounce p1(clk,exec,exec_out);
pbdebounce p2(clk,rst,rst_out);

assign led[1:0] = (inst_reg[31:26]==0)?0:
                  ((inst_reg[31:26]==35)||(inst_reg[31:26]==43))?1:
						(inst_reg[31:26]==4)?2:
						(inst_reg[31:26]==2)?3:0;
assign led[4:2] = current_state;
assign led[5] = (rst_out);
assign led[6] = (mode);
assign led[7] = (~mode);

data m1(.addr(mem_addr[8:0]),.clk(clk),.din(Rdata2),.dout(mem_out),.we(MemWrite));


timer_1s t1(clk,clk_1s);

pc pp1(pc_change,multi_clk,rst_out,PC_next,pc);

state_now s1(finish,multi_clk,next_state,current_state);
state_control s2(multi_clk,inst_reg[31:26],current_state,next_state,finish);

control c1(current_state,PCWrite,PCWriteCond,lorD,MemRead,MemWrite,IRWrite,MemToReg,ALUsrcA,RegWrite,RegDst,PCSource,ALUop,ALUsrcB);

regfile r1(multi_clk,rst_out,RegWrite,inst_reg[25:21],inst_reg[20:16],reg_index,reg_dst,result_or_data,A,B,Rdata3);

aluc a1(ALUop,inst_reg[5:0],ALUsignal);
alu  a2(ALUop1,ALUop2,ALUsignal,zero,ALUresult);

mux mu0(exec_out,clk_1s,multi_clk,mode);
mux_32 mu1(pc,ALUout,0,0,mem_addr,{1'b0,lorD});
mux_5 mu2(inst_reg[20:16],inst_reg[15:11],0,0,reg_dst,{1'b0,RegDst});
mux_32 mu3(ALUout,memdata_reg,0,0,result_or_data,{1'b0,MemToReg});
mux_32 mu4(pc,Rdata1,0,0,ALUop1,{1'b0,ALUsrcA});
assign branch_exten = {{16{inst_reg[15]}},inst_reg[15:0]};
mux_32 m6(Rdata2,1,branch_exten,branch_exten,ALUop2,ALUsrcB);
mux_32 m7(ALUresult,ALUout,inst_reg[25:0],0,PC_next,PCSource);

and and1(branch_or_not,zero,PCWriteCond);
or  or1(pc_change,branch_or_not,PCWrite);


always @(negedge multi_clk) begin
if(IRWrite) inst_reg <= mem_out;
end

always @(negedge multi_clk) begin 
ALUout <= ALUresult;
Rdata1 <= A;
Rdata2 <= B;
end

display d1(clk,disp_num,anode,segment);

always @* begin
case(disp_type)
2'b00:
disp_num<= Rdata3[15:0];
2'b01:
disp_num<= Rdata3[31:16];
2'b10:
disp_num<= pc;
2'b11:
disp_num<= clock;
endcase
end 

always @(negedge multi_clk)
memdata_reg <= mem_out;




always@(posedge multi_clk,posedge rst_out) begin
if(rst_out) clock=0;
else if(~finish) clock = clock + 1;
end

endmodule 