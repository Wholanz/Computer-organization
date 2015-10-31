`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:40:18 03/04/2014 
// Design Name: 
// Module Name:    lab2 
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
module lab2(clk, button, switch, led, segment, digit_anode);
input wire clk;
input wire [3:0] button;
input wire [7:0] switch;
output wire [7:0] led;
output wire [7:0] segment;
output wire [3:0] digit_anode;
reg [15:0] disp_num;
wire [3:0] blink, dots;
wire [3:0] button_out;
wire clk_500ms;
pbdebounce I1(clk, button[0], button_out[0]);
pbdebounce I11(clk, button[1], button_out[1]);
pbdebounce I1111(clk, button[2], button_out[2]);
pbdebounce I11111(clk, button[3], button_out[3]);
timer_500ms I2(clk, clk_500ms);
display I3(clk, disp_num, dots, blink, clk_500ms, digit_anode,
segment);
initial disp_num <= 32'b0001_0010_0011_0100; // 0x1234
assign led = switch;
assign {dots, blink} = {~switch[7:4], switch[3:0]};
always @(posedge button_out[0]) begin
if(disp_num[ 3: 0]==9) disp_num[ 3: 0]=0;
else
disp_num[ 3: 0] = disp_num[ 3: 0] + 1;
end
always @(posedge button_out[1]) begin
if(disp_num[ 7: 4]==9) disp_num[ 7: 4]=0;
else
disp_num[ 7: 4] = disp_num[ 7: 4] + 1;
end
always @(posedge button_out[2]) begin
if(disp_num[ 11: 8]==9) disp_num[ 11: 8]=0;
else
disp_num[11: 8] = disp_num[11: 8] + 1;
end
always @(posedge button_out[3]) begin
if(disp_num[ 15: 12]==9) disp_num[ 15: 12]=0;
else
disp_num[15:12] = disp_num[15:12] + 1;
end
endmodule

module display (clk, disp_num, dots, blink, clk_500ms, digit_anode,
segment);
input wire clk;
output reg [7:0] segment;
output reg [3:0] digit_anode;
input wire [15:0] disp_num;
input wire [3:0] blink, dots;
input wire clk_500ms;

reg[11:0] cnt;
reg[3:0] display;
reg[3:0] flag;


initial begin
cnt=0;
display=0;
flag=4'b1111;
end

always@(posedge clk_500ms) begin
if(blink[0]) flag[0]=~flag[0];
if(blink[1]) flag[1]=~flag[1];
if(blink[2]) flag[2]=~flag[2];
if(blink[3]) flag[3]=~flag[3];
end



always @ (posedge clk)begin
cnt=cnt+1;
case(cnt[11:10])
 2'b00: begin 
 if(flag[0])
 digit_anode=4'b1110;
 else  digit_anode=4'b1111;
 display=disp_num[3:0];
 segment[7]=dots[0];
 end
 2'b01: begin
 if(flag[1])
 digit_anode=4'b1101;
 else  digit_anode=4'b1111;
  display=disp_num[7:4];
  segment[7]=dots[1];
  end
 2'b10: begin
 if(flag[2])
 digit_anode=4'b1011;
 else  digit_anode=4'b1111;
  display=disp_num[11:8];
  segment[7]=dots[2];
  end
 2'b11: begin
 if(flag[3])
 digit_anode=4'b0111;
 else  digit_anode=4'b1111;
  display=disp_num[15:12];
  segment[7]=dots[3];
  end
 
 endcase 
 
 case(display)
			4'b0000:
			segment[6:0]=8'b1000000;
			4'b0001:
			segment[6:0]=8'b1111001;

			4'b0010:segment[6:0]=8'b0100100;
	
			4'b0011:  segment[6:0]=8'b0110000;

			4'b0100: segment[6:0]=8'b0011001;

			4'b0101: segment[6:0]=8'b0010010;
			4'b0110:segment[6:0]=8'b0000010;

			4'b0111:segment[6:0]=8'b1111000;
			4'b1000:segment[6:0]=8'b0000000;

			4'b1001:segment[6:0]=8'b0010000;

			4'b1010:segment[6:0]=8'b0001000;
	
			4'b1011:segment[6:0]=8'b0000011;
	
			4'b1100:segment[6:0]=8'b1000110;
		
			4'b1101:segment[6:0]=8'b0100001;
		
			4'b1110:segment[6:0]=8'b0000110;
		
			4'b1111:segment[6:0]=8'b0001110;
	
         default:segment[6:0]=7'b1111111;
 endcase 
 end 
 endmodule
 
 
 module pbdebounce
	(input wire clk,
	input wire button,
	output reg pbreg);
	
	reg [7:0] pbshift;
	wire clk_1ms;
	timer_1ms m0(clk, clk_1ms);
	always@(posedge clk_1ms) begin
	pbshift=pbshift<<1;//左移1位
	pbshift[0]=button;
	if (pbshift==0)
	pbreg=0;
	if (pbshift==8'hFF)// pbshift八位全为1
	pbreg=1;
end
endmodule


module timer_500ms
	(input wire clk,
	output reg clk_500ms);
	
	reg [30:0] cnt;
	initial begin
	cnt [30:0] <=0;
	clk_500ms <= 0;
	end
	always@(posedge clk)
	if(cnt>=12500000) begin
	cnt<=0;
	clk_500ms <= ~clk_500ms;
	end
	else begin
	cnt<=cnt+1;
	end
endmodule

module timer_1ms
	(input wire clk,
	output reg clk_1ms);
	
	reg [15:0] cnt;
	initial begin
	cnt [15:0] <=0;
	clk_1ms <= 0;
	end
	always@(posedge clk)
	if(cnt>=25000) begin
	cnt<=0;
	clk_1ms <= ~clk_1ms;
	end
	else begin
	cnt<=cnt+1;
	end
endmodule
