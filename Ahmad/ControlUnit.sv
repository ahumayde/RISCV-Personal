module ControlUnit #(
    parameter   D_WIDTH = 32
)(
    input  logic [D_WIDTH-1:0] instr,
    input  logic               EQ,
    output logic               RegWrite,
    output logic [2:0]         Aluctrl,
    output logic               ALUsrc,
    output logic [2:0]         ImmSrc,
    output logic               PCsrc
);

    always_comb begin
        // Set Defaults
        RegWrite = 1'b0; 
        ALUctrl  = 3'b111; 
        ALUsrc   = 1'b1; 
        ImmSrc   = 3'b111; 
        PCsrc    = 1'b0;

        case (instr[6:0]) // opcode
        // Register - R
            // 7'd51: case (instr[F7-1:OP]) // Register format endcase
        // Immediate - I
            // 7'd03: // Load Immediate
            7'd19: case (instr[14:12]) // funct3
                // Add Immediate - addi
                3'b000:  RegWrite = 1;  
                default: $display ("Invalid Instruction");
            endcase
        // Upper Immediate - UI
            // 7'd23: // Add  Upper Immediate to PC
            // 7'd55: // Load Upper Immediate
        // Store - S
            // 7'd35: // Store Immediate
        // Branch - B
            7'd99: case (instr[14:12]) // funct3
                // Branch if Not Equal - bne
                3'b001: if(!EQ) begin 
                            ALUctrl = 3'b111; 
                            ALUsrc  = 1'b0; 
                            ImmSrc  = 3'b011; 
                            PCsrc   = 1'b1; 
                        end else begin
                            ImmSrc  = 1'b011;
                            PCsrc   = 1'b0; 
                        end
                default: $display ("Invalid Instruction");
            endcase
        // Jump - J
            // 7'd103: // Jump and link register 
            // 7'd111: // Jump and link 
        // Invalid 
            default: $display ("Invalid Instruction");
        endcase
    end

endmodule
