module decode_reg #(
    parameter  DATA_WIDTH = 32
) (
    input  logic                   clk,
    input  logic [2:0]             ALUctrlD,
    input  logic                   ALUSrcD,
    input  logic                   MemWriteD,
    input  logic [1:0]             ResultSrcD,
    input  logic                   BranchD,
    input  logic                   JumpD,
    input  logic                   branch_negD,
    input  logic [DATA_WIDTH-1:0]  ImmExtD,
    input  logic                   PcOpD,
    input  logic [DATA_WIDTH-1:0]  rd1D,
    input  logic [DATA_WIDTH-1:0]  rd2D,
    input  logic [DATA_WIDTH-1:0]  pcD,
    input  logic [14:12]           instr_14_12D,
    input  logic [DATA_WIDTH-1:0]  PCPlus4D,
    input  logic                   RegWriteD,
    input  logic [11:7]            RdD,

    output logic [2:0]             ALUctrlE,
    output logic                   ALUSrcE,
    output logic                   MemWriteE,
    output logic [1:0]             ResultSrcE,
    output logic                   BranchE,
    output logic                   JumpE,
    output logic                   branch_negE,
    output logic [DATA_WIDTH-1:0]  ImmExtE,
    output logic                   PcOpE,
    output logic [DATA_WIDTH-1:0]  rd1E,
    output logic [DATA_WIDTH-1:0]  rd2E,
    output logic [DATA_WIDTH-1:0]  pcE,
    output logic [14:12]           instr_14_12E,
    output logic [DATA_WIDTH-1:0]  PCPlus4E,
    output logic                   RegWriteE,
    output logic [11:7]            RdE
);
    always_ff @(posedge clk) begin
        ALUctrlE <= ALUctrlD;
        ALUSrcE <= ALUSrcD;
        MemWriteE <= MemWriteD;
        ResultSrcE <= ResultSrcD;
        BranchE <= BranchD;
        JumpE <= JumpD;
        branch_negE <= branch_negD;
        ImmExtE <= ImmExtD;
        PcOpE <= PcOpD;
        rd1E <= rd1D;
        rd2E <= rd2D;
        pcE <= pcD;
        instr_14_12E <= instr_14_12D;
        PCPlus4E <= PCPlus4D;
        RegWriteE <= RegWriteD;
        RdE <= RdD;
    end
endmodule
