module signextender(
    input  logic [31:0] instr,
    input  logic [2:0]  immsrc,
    output logic [31:0] immop
);

    always_comb 
        case (immsrc)
        // Immediate
            3'b000:  immop = {{20{instr[31]}},{instr[31:20]}};
        // Upper Immediate
            3'b001:  immop = {{instr[31:12]},{12{1'b0}}}; 
        // Store
            3'b010:  immop = {{20{instr[31]}},{instr[31:25]},{instr[11:7]}};
        // Branch
            3'b011:  immop = {{21{instr[31]}},{instr[7]},{instr[30:25]},{instr[11:8]}};
        // Jump      
            3'b100:  immop = {{13{instr[31]}},{instr[19:12]},{instr[20]},{instr[10:1]}};
        // Default
            default: immop = {32{1'b0}};
        endcase
    
endmodule
