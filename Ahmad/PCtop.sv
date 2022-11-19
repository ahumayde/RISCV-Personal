module PCtop #(
    parameter   D_WIDTH = 32
)(
    input  logic clk,
    input  logic rst,
    input  logic PCsrc,
    input  logic [D_WIDTH-1:0] ImmOp,
    output logic [D_WIDTH-1:0] PC,
);

// Internal Wires
    wire [D_WIDTH-1:0] branch_PC;
    wire [D_WIDTH-1:0] inc_PC;
    wire [D_WIDTH-1:0] next_PC;

// Combinational Logic
    always_comb begin
        inc_PC    = PC + 4;
        branch_PC = PC + ImmOp;
        next_PC   = PCsrc ? branch_PC : inc_PC;
    end 

// DFF Module
PCReg PCReg(
    .clk(clk),
    .rst(rst),
    .next_PC(next_PC),
    .PC(PC)
);

endmodule
