module InstrMem #(
    parameter   A_WIDTH = 32,
                D_WIDTH = 32
)(
    input  logic [A_WIDTH-1:0]  PC,
    output logic [D_WIDTH-1:0]  instr
);

logic [D_WIDTH-1:0] rom_array [2**A_WIDTH-1:0];

initial begin
    $display ("Loading rom.");
    $readmemh("Instructons.mem", rom_array);
end;

always_comb
    instr = rom_array[PC+3:PC];

endmodule
