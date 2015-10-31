`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:43:33 04/08/2014 
// Design Name: 
// Module Name:    RegFile 
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
module RegFile(input wire clk,
               input wire rst,
               input wire[4:0] regA,regB,regW,
               input wire[31:0] Wdat,
               output reg[31:0] Adat,Bdat,
               input wire RegWrite
    );

reg[31:0] reg1,reg2,reg3,reg4,reg5,reg6,reg7,reg8,reg9,reg10,
    reg11,reg12,reg13,reg14,reg15,reg16,reg17,reg18,reg19,
    reg20,reg21,reg22,reg23,reg24,reg25,reg26,reg27,reg28,
    reg29,reg30,reg31,reg32;
    


initial begin
    reg1=1;
    reg2=2;
    reg3=3;reg4=4;reg5=5;reg6=6;reg7=7;reg8=8;reg9=9;reg10=10;
    reg11=11;reg12=12;reg13=13;reg14=14;reg15=15;reg16=16;reg17=17;reg18=18;reg19=19;
    reg20=20;reg21=21;reg22=22;reg23=23;reg24=24;reg25=25;reg26=26;reg27=27;reg28=28;
    reg29=29;reg30=30;reg31=31;reg32=32;
end


always @(negedge clk) begin

if(RegWrite) begin
case(regW)
5'b00000: reg1<=Wdat;
5'b00001: reg2<=Wdat;
5'b00010: reg3<=Wdat;
5'b00011: reg4<=Wdat;
5'b00100: reg5<=Wdat;
5'b00101: reg6<=Wdat;
5'b00110: reg7<=Wdat;
5'b00111: reg8<=Wdat;
5'b01000: reg9<=Wdat;
5'b01001: reg10<=Wdat;
5'b01010: reg11<=Wdat;
5'b01011: reg12<=Wdat;
5'b01100: reg13<=Wdat;
5'b01101: reg14<=Wdat;
5'b01110: reg15<=Wdat;
5'b01111: reg16<=Wdat;
5'b10000: reg17<=Wdat;
5'b10001: reg18<=Wdat;
5'b10010: reg19<=Wdat;
5'b10011: reg20<=Wdat;
5'b10100: reg21<=Wdat;
5'b10101: reg22<=Wdat;
5'b10110: reg23<=Wdat;
5'b10111: reg24<=Wdat;
5'b11000: reg25<=Wdat;
5'b11001: reg26<=Wdat;
5'b11010: reg27<=Wdat;
5'b11011: reg28<=Wdat;
5'b11100: reg29<=Wdat;
5'b11101: reg30<=Wdat;
5'b11110: reg31<=Wdat;
5'b11111: reg32<=Wdat;
endcase

end
end

always @(posedge clk) begin

case(regA)
5'b00000: Adat<=reg1;
5'b00001: Adat<=reg2;
5'b00010: Adat<=reg3;
5'b00011: Adat<=reg4;
5'b00100: Adat<=reg5;
5'b00101: Adat<=reg6;
5'b00110: Adat<=reg7;
5'b00111: Adat<=reg8;
5'b01000: Adat<=reg9;
5'b01001: Adat<=reg10;
5'b01010: Adat<=reg11;
5'b01011: Adat<=reg12;
5'b01100: Adat<=reg13;
5'b01101: Adat<=reg14;
5'b01110: Adat<=reg15;
5'b01111: Adat<=reg16;
5'b10000: Adat<=reg17;
5'b10001: Adat<=reg18;
5'b10010: Adat<=reg19;
5'b10011: Adat<=reg20;
5'b10100: Adat<=reg21;
5'b10101: Adat<=reg22;
5'b10110: Adat<=reg23;
5'b10111: Adat<=reg24;
5'b11000: Adat<=reg25;
5'b11001: Adat<=reg26;
5'b11010: Adat<=reg27;
5'b11011: Adat<=reg28;
5'b11100: Adat<=reg29;
5'b11101: Adat<=reg30;
5'b11110: Adat<=reg31;
5'b11111: Adat<=reg32;
endcase

case(regB)
5'b00000: Bdat<=reg1;
5'b00001: Bdat<=reg2;
5'b00010: Bdat<=reg3;
5'b00011: Bdat<=reg4;
5'b00100: Bdat<=reg5;
5'b00101: Bdat<=reg6;
5'b00110: Bdat<=reg7;
5'b00111: Bdat<=reg8;
5'b01000: Bdat<=reg9;
5'b01001: Bdat<=reg10;
5'b01010: Bdat<=reg11;
5'b01011: Bdat<=reg12;
5'b01100: Bdat<=reg13;
5'b01101: Bdat<=reg14;
5'b01110: Bdat<=reg15;
5'b01111: Bdat<=reg16;
5'b10000: Bdat<=reg17;
5'b10001: Bdat<=reg18;
5'b10010: Bdat<=reg19;
5'b10011: Bdat<=reg20;
5'b10100: Bdat<=reg21;
5'b10101: Bdat<=reg22;
5'b10110: Bdat<=reg23;
5'b10111: Bdat<=reg24;
5'b11000: Bdat<=reg25;
5'b11001: Bdat<=reg26;
5'b11010: Bdat<=reg27;
5'b11011: Bdat<=reg28;
5'b11100: Bdat<=reg29;
5'b11101: Bdat<=reg30;
5'b11110: Bdat<=reg31;
5'b11111: Bdat<=reg32;
endcase

end

endmodule
