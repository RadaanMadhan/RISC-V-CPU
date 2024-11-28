module memory_reg #(
    parameters  DATA_WIDTH = 32
) (
    input                              clk,
    input logic [DATA_WIDTH-1:0]   ALUResultE,
    input logic [DATA_WIDTH-1:0]   WriteDataE,
    input logic [DATA_WIDTH-1:0]   WriteDataM,    
    output logic [DATA_WIDTH-1:0]  ALUResultM
);
    always_ff @(posedge clk) begin
        ALUResultM <= ALUResultE;
        WriteDataM <= WriteDataE;
    end
endmodule