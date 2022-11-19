module RegFile #(
    parameter   A_WIDTH = 5,
                D_WIDTH = 32
)(
    input  logic clk,
    input  logic WE3,
    input  logic [A_WIDTH-1:0] AD1,
    input  logic [A_WIDTH-1:0] AD2,
    input  logic [A_WIDTH-1:0] AD3,
    input  logic [D_WIDTH-1:0] WD3,
    output logic [D_WIDTH-1:0] RD1,
    output logic [D_WIDTH-1:0] RD2,
    output logic [D_WIDTH-1:0] a0    
);

    wire [D_WIDTH-1:0] REG_ARRAY [2**A_WIDTH-1:0];

    // Innitiate all values in register array to 0
    initial 
        for (int i = 0; i < $size(REG_ARRAY); i++)
            REG_ARRAY[i] = 32'b0;

    // Set outputs
    always_comb begin
        a0  = REG_ARRAY[10];
        RD1 = REG_ARRAY[AD1];
        RD2 = REG_ARRAY[AD2];
    end

    always_ff @(posedge clk)
        if (WE3) REG_ARRAY[AD3] <= WD3;

endmodule
     