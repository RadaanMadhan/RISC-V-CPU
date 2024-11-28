module fetch_reg #(
    parameters  ADDRESS_WIDTH = 32
) (
    input                              clk,
    input  logic [ADDRESS_WIDTH-1:0]   instrF,
    input  logic [ADDRESS_WIDTH-1:0]   pcF,
    output logic [ADDRESS_WIDTH-1:0]   instrD,
    output logic [ADDRESS_WIDTH-1:0]   pcD
);
    always_ff @(posedge clk) begin
        instrD <= instrF;
        pcD <= pcF;
    end
endmodule