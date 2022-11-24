module DataMemory#(
    parameter A_WIDTH=32, RD_WIDTH=32, WD_WIDTH=32
)(
    input  logic                CLK,
    input  logic [WD_WIDTH-1:0] WD,
    input  logic [A_WIDTH-1:0]  A,
    input  logic                WE,
    output logic [RD_WIDTH-1:0] RD

);
logic [A_WIDTH-1:0] fred [2**A_WIDTH-1:0];

initial
    for (int i=0; i<$size(fred);i++)
        fred[i]=32'b0;

always_comb
    if (WE==1'b1)
        fred[A]=WD;

always_ff @(posedge clk)
    RD<=fred[A];

endmodule