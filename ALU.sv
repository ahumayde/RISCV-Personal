module ALU #(
    parameter D_WIDTH = 32
)(
    input  logic [2:0]         ALUControl,
    input  logic [D_WIDTH-1:0] SrcA,
    input  logic [D_WIDTH-1:0] SrcB,
    output logic [D_WIDTH-1:0] ALUResult,
    output logic               Zero
);

    always_comb begin
        Zero = (SrcA == SrcB);
        case (ALUControl)
            3'b000:    ALUResult = SrcA + SrcB;
            3'b001:    ALUResult = SrcA - SrcB;
            3'b010:    ALUResult = SrcA & SrcB;
            3'b011:    ALUResult = SrcA | SrcB;
            3'b100:    ALUResult = {{31{1'b0}},{SrcA < SrcB}};
            default:   ALUResult = 32'b0;
        endcase
        $display("    New line    ");
        $display("ALU1", SrcA);
        $display("ALU2", SrcB);
    end

endmodule