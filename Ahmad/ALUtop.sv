module ALUtop #(
    parameter   A_WIDTH = 5,
                D_WIDTH = 32
)(
    input  logic               clk,
    input  logic               ALUsrc
    input  logic               ALUctrl,
    input  logic               RegWrite,
    input  logic [A_WIDTH-1:0] rs1,
    input  logic [A_WIDTH-1:0] rs2,
    input  logic [A_WIDTH-1:0] rd,
    input  logic [D_WIDTH-1:0] ImmOp,
    output logic               EQ,
    output logic               a0
);

// Internal Wires
    wire [D_WIDTH-1:0] ALUop1,
    wire [D_WIDTH-1:0] ALUop2,
    wire [D_WIDTH-1:0] regOp2;
    wire [D_WIDTH-1:0] ALUout;
    
// Reg File Module
RegFile rf(
    .clk(clk),
    .WE3(RegWrite),
    .AD1(rs1),
    .AD2(rs2),
    .AD3(rd),
    .WD3(ALUout),
    .RD1(ALUop1),
    .RD2(regOp2),
    .a0(a0)
);

// MUX 
    assign ALUop2 = ALUsrc ? ImmOp : regOp2;

// ALU Module
ALU alu(
    .ALUctrl(ALUctrl),
    .ALUop1(ALUop1),
    .ALUop2(ALUop2),
    .ALUout(ALUout),
    .EQ(EQ)
);

endmodule
