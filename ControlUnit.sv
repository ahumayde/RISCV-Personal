module ControlUnit #(
    parameter   OP = 7,
                F3 = 10,
                F7 = 17
)(
    input  logic [OP+F3+F7-1:0] instr,
    input  logic                EQ,
    output logic                RegWrite,
    output logic [2:0]          Aluctrl,
    output logic                ALUsrc,
    output logic [2:0]          ImmSrc,
    output logic                PCsrc
);

always_comb 
    begin
        case (instr[OP-1:0])
            
        // Register - R
            // 7'h33: case (instr[F7-1:OP]) // Register  format endcase

        // Immediate - I
            // 7'h03: // Load imm[31:20] 12 bit format
            7'h13: case (instr[F3-1:OP]) // Logic Imm[31:20] 12 bit format
                3'h0:    begin RegWrite = 1; ALUctrl = 3'h0; ALUsrc = 1; ImmSrc = 3'h0; PCsrc = 0; end     // addi
                default: begin RegWrite = 0; ALUctrl = 3'h0; ALUsrc = 1; ImmSrc = 3'h0; PCsrc = 0; end
            endcase
            
        // Upper Immediate - UI    
            // 7'h17: // Add Upper Imm[31:12] to PC
            // 7'h37: // Load Upper Imm[31:12]

        // Store - S
            // 7'h23: // Store Imm[31:25] 7 bit format
            
        // Branch - B
            7'h63: case (instr[F3-1:OP]) // Branch Imm[31,7,30:25,11:8] 12 bit format
                3'h3: if(EQ) begin RegWrite = 0; ALUctrl = 3'h0; ALUsrc = 1; ImmSrc = 3'h3; PCsrc = 1; end // bne
                default:     begin RegWrite = 0; ALUctrl = 3'h0; ALUsrc = 1; ImmSrc = 3'h0; PCsrc = 0; end
            endcase


        // Jump - J
            // 7'h66: // Jump and link register Imm[31,19:12,20,30:21]
            // 7'h6F: // Jump and link Imm[31,19:12,20,30:21]

            default: begin RegWrite = 0; ALUctrl = 3'h0; ALUsrc = 1; ImmSrc = 3'h0; PCsrc = 0; end
        endcase
    end

endmodule
