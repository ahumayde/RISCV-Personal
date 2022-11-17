module PC#(
    parameter WIDTH=32
    parameter incr=4
)(
    input logic [WIDTH-1:0] ImmOp, PCsrc, clk, rst,
    output logic [WIDTH-1:0] pc );

logic [WIDTH-1:0] next_PC;
logic [WIDTH-1:0] inc_PC;
logic [WIDTH-1:0] pc;
logic [WIDTH-1:0] branch_pc;

adder pcopadd(
    .pc(pc),
    .ImmOp (ImmOp),
    .result(branch_pc)
)

pcreg pcregister(
    .next_PC(PCsrc?inc_PC+incr:result),
    .clk(clk),
    .rst(rst),
    .PC(pc)
)
endmodule
