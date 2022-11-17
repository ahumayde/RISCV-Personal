module alu #(
    parameter WIDTH = 8
)(
    input logic Aluctrl,
    input logic [Width-1:0] Aluop1,
    input logic [Width-1:0] Aluop2,
    output logic [Width-1:0] Aluout,
    output logic eq
);
logic sum if (Aluctrl== 3'b0) Aluout <= Aluop1+Aluop2;
logic subtract if(Aluctrl ==3'b1 && aluop1- aluop2 == [Width-1:0]b'0)  eq<=1;
endmodule