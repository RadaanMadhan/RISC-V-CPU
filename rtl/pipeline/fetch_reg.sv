module fetch_reg #(
    parameter   ADDRESS_WIDTH = 32
) (
    input  logic                       clk,
    input  logic [ADDRESS_WIDTH-1:0]   instrF,
    input  logic [ADDRESS_WIDTH-1:0]   pcF,
    input  logic [ADDRESS_WIDTH-1:0]   PCPlus4F,
    output logic [ADDRESS_WIDTH-1:0]   instrD,
    output logic [ADDRESS_WIDTH-1:0]   pcD,
    output logic [ADDRESS_WIDTH-1:0]   PCPlus4D
);
    always_ff @(posedge clk) begin
        instrD <= instrF;
        pcD <= pcF;
        PCPlus4D <= PCPlus4F;
    end
endmodule
