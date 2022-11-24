module cpu #(
    parameter WIDTH = 32
)(
    input  logic clk,
    input  logic rst,
    output logic [WIDTH-1:0] a0
);
    
    wire [WIDTH-1:0] PC;
    wire [WIDTH-1:0] instr;
    wire [WIDTH-1:0] ImmOp;
    wire             RegWrite;
    wire [2:0]       ALUctrl;
    wire             ALUsrc;
    wire [2:0]       ImmSrc;
    wire             PCsrc;
    wire             EQ;

// PC Module
PCtop PCT(
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .ImmOp(ImmOp),
    .PC(PC)
);

// Instr Mem Module
InstrMem IM(
    .A(PC),
    .RD(instr)
);

// Control Unit Module
ControlUnit CU(
    .instr(instr),
    .EQ(EQ),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc)
);

// Sign Extend Unit
SignExtend SE(
    .instr(instr),
    .ImmSrc(ImmSrc),
    .ImmOp(ImmOp)
);

// ALU Module
ALUtop ALU(
    .clk(clk),
    .ALUsrc(ALUsrc),
    .ALUctrl(ALUctrl),
    .RegWrite(RegWrite),
    .rs1(instr[19:15]),
    .rs2(instr[24:20]),
    .rd(instr[11:7]),
    .ImmOp(ImmOp),
    .EQ(EQ),
    .a0(a0)
);

endmodule
