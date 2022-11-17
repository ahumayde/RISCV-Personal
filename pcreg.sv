module pcreg#(
    parameter WIDTH=8
)(
  input logic [WIDTH-1:0] next_PC,
  input logic clk,
  input logic rst,
  output logic [WIDTH-1:0] PC  
);

always_ff @(posedge clk, posedge rst) begin
    PC<=next_PC;   
end
endmodule
