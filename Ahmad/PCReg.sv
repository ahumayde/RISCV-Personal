module PCReg #(
    parameter   D_WIDTH = 32
)(
    input  logic               clk,
    input  logic               rst,
    input  logic [D_WIDTH-1:0] next_pc,
    output logic [D_WIDTH-1:0] PC
);

// Clocked Register with Reset
always_ff @(posedge clk)
    if (rst) PC <= 32'b0;
    else     PC <= next_pc;

endmodule
