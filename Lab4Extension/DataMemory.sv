module DataMemory #(
    parameter A_WIDTH = 20,
    RD_WIDTH = 32,
    WD_WIDTH = 32
) (
    input  logic                CLK,
    input  logic [WD_WIDTH-1:0] WD,
    input  logic [ A_WIDTH-1:0] A,
    input  logic                WE,
    output logic [RD_WIDTH-1:0] RD

);
  logic [A_WIDTH-1:0] fred[2**A_WIDTH-1:0];

  initial begin
    $display("Loading fred");
    $readmemh("fred.hex", fred);
    $display("Instructions written to fred successfully");
    // for (int i=0; i<$size(fred);i++)
    //     $display(fred[i]," ");
    //     fred[i]=32'b0;
  end

  always_comb begin
    RD = fred[A];
  end

  always_ff @(posedge CLK) begin
    if (WE == 1'b1) fred[A] = WD;
  end
endmodule
