module ALU #(
    parameter D_WIDTH = 32
)(
    input  logic               ALUctrl,
    input  logic [D_WIDTH-1:0] ALUop1,
    input  logic [D_WIDTH-1:0] ALUop2,
    output logic [D_WIDTH-1:0] ALUout,
    output logic               EQ,
);

    always_comb begin
        EQ = (ALUop1 == ALUop2);

        case (ALUctrl)
            3'b000:  ALUout = ALUop1 + ALUop2;
            3'b001:  ALUout = ALUop1 - ALUop2;
            3'b010:  ALUout = ALUop1 & Aluop2;
            3'b011:  ALUout = ALUop1 | Aluop2;
            3'b100:  ALUout = ALUop1 < Aluop2;
            default: ALUout = 32'b0;
        endcase
    end

endmodule
