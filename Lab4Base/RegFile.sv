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

    // Register file array
    logic [D_WIDTH-1:0] REG_FILE [2**A_WIDTH-1:0];

    // Innitiate all values in register file to 0
    initial 
        for (int i = 0; i < $size(REG_FILE); i++)
            REG_FILE[i] = 32'b0;

    // Set outputs
    always_comb begin
        a0  = REG_FILE[10];
        RD1 = REG_FILE[AD1];
        RD2 = REG_FILE[AD2];
    end

    // Write to register file
    always_ff @(posedge clk)
        if (WE3) REG_FILE[AD3] <= WD3;

endmodule
