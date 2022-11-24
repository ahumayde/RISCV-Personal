module SignExtend(
    input  logic [31:0] instr,
    input  logic [2:0]  ImmSrc,
    output logic [31:0] ImmOp
);

    always_comb 
        case (ImmSrc)
        // Immediate
            3'b000:  ImmOp = {{20{instr[31]}},{instr[31:20]}};
        // Upper Immediate
            3'b001:  ImmOp = {{instr[31:12]},{12{1'b0}}}; 
        // Store
            3'b010:  ImmOp = {{20{instr[31]}},{instr[31:25]},{instr[11:7]}};
        // Branch
            3'b011:  ImmOp = {{21{instr[31]}},{instr[7]},{instr[30:25]},{instr[11:8]}};
        // Jump      
            3'b100:  ImmOp = {{13{instr[31]}},{instr[19:12]},{instr[20]},{instr[30:21]}};
        // Default
            default: ImmOp = {32{1'b0}};
        endcase
    
endmodule
