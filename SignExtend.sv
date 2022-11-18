module SignExtend (
    input  [2:0]  ImmSrc,
    input  [31:7] instr,
    output [31:0] Imm
);

always_comb 
    case (ImmSrc)
    // Immediate
        3'h0: Imm = {20{instr[31]},{instr[31:20]}};
    // Upper Immediate
        3'h1: Imm = {{instr[31:12]},12{1'b0}}; 
    // Store
        3'h2: Imm = {20{instr[31]},{instr[31:25]},{instr[11:7]}};
    // Branch
        3'h3: Imm = {21{instr[31]},{instr[7]},{instr[30:25]},{instr[11:8]}};
    // Jump
        //3'h4: Imm = {}
    // Default Imm = 0
        default: Imm = {32{1'b0}}
    endcase

endmodule 
