`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:48:36 03/25/2014 
// Design Name: 
// Module Name:    divider 
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
module divider(input wire[1:0] choose,
                input wire add_button,
                input wire reset,
                input wire cal,
                output reg[17:0] disp_num,
                output wire led,
					 output reg[17:0] num
);

reg[2:0] count;
reg flag;


initial begin
count = 0;
disp_num = 17'h00103;
num = 17'h0830a;
end

assign led = (count==5);

always @(posedge add_button) begin
if (choose[1]&choose[0]) 
num[15:12] =  num[15:12] + 1;
else if(choose[1]&~choose[0])
num[11:8] =  num[11:8] + 1;
else       num[3:0]  =  num[3:0]  + 1;
end 

always @(posedge cal,posedge reset) begin
if (reset) begin
count = 0;
disp_num = num;
flag=0;
end
else if (~led) begin
if(~flag) begin
disp_num=num;
flag = 1;
end
else if (count==4) begin
disp_num[16:12]=disp_num[16:12]-disp_num[3:0];
disp_num[11:8] = (disp_num[11:8]<<1)+1;
count = count+1;
end
else if(disp_num[16:12]<disp_num[3:0]) begin
disp_num[16:8] = disp_num[16:8]<<1;
count = count+1;
end
else if(disp_num[16:12]>=disp_num[3:0])  begin
disp_num[16:12]=disp_num[16:12]-disp_num[3:0];
disp_num[16:8] = (disp_num[16:8]<<1)+1;
count = count+1;
end
end

end
endmodule