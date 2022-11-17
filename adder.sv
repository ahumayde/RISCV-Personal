module adder#(
    parameter INWIDTH=8;
    parameter OUTWIDTH=8;
)(
    input logic PC,
    input logic ImmOp,
    output logic result
);

result[OUTWIDTH-1:0]<=PC[INWIDTH-1:0]+ImmOp[INWIDTH-1:0];

endmodule