module decode_reg #(
    parameters  DATA_WIDTH = 32
) (
    input                          clkD,
    input  logic [2:0]             ALUctrlD,
    input  logic                   ALUSrcD,
    input  logic                   MemWriteD,
    input  logic                   ResultSrcD,
    input  logic                   PCSrcD,
    input  logic [DATA_WIDTH-1:0]  ImmExtD,
    input  logic                   PcOpD,
    input  logic                   jalrD,
    input  logic [DATA_WIDTH-1:0]  rd1D,
    input  logic [DATA_WIDTH-1:0]  rd2D

    output logic [2:0]             ALUctrlE,
    output logic                   ALUSrcE,
    output logic                   MemWriteE,
    output logic                   ResultSrcE,
    output logic                   PCSrcE,
    output logic [DATA_WIDTH-1:0]  ImmExtE,
    output logic                   PcOpE,
    output logic                   jalrE,
    output logic [DATA_WIDTH-1:0]  rd1E,
    output logic [DATA_WIDTH-1:0]  rd2E
);
    always_ff @(posedge clk) begin
        ALUctrlE <= ALUctrlD;
        ALUSrcE <= ALUSrcD;
        MemWriteE <= MemWriteD;
        ResultSrcE <= ResultSrcD;
        PCSrcE <= PCSrcD;
        ImmExtE <= ImmExtD;
        PcOpE <= PcOpD;
        jalrE <= jalrD;
        rd1E <= rd1D;
        rd2E <= rd2D;
    end
endmodule