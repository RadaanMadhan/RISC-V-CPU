`include <./execute/alu.sv>

module top_execute #(
    parameter   DATA_WIDTH = 32
)(
    input  logic [DATA_WIDTH-1:0]  pc,
    input  logic                   PcOp,
    input  logic [2:0]             ALUctrl,
    input  logic                   ALUSrc,
    input  logic [DATA_WIDTH-1:0]  ImmExt,
    input  logic [DATA_WIDTH-1:0]  rd1,
    input  logic [DATA_WIDTH-1:0]  rd2,
    input  logic                   Branch,
    input  logic                   Jump, 
    input  logic                   branch_neg,
    output logic [DATA_WIDTH-1:0]  ALUResult,
    output logic [DATA_WIDTH-1:0]  PCTarget,
    output logic                   PCSrc
);
logic [DATA_WIDTH-1:0] ALUop2;
logic                  branch_l;

mux ALuSrc2Sel (
    .in0        (rd2),
    .in1        (ImmExt),
    .sel        (ALUSrc),
    .out        (ALUop2)
);

alu alu(
    .ALUop1     (rd1),
    .ALUop2     (ALUop2),
    .ALUctrl    (ALUctrl),
    .ALUout     (ALUResult),
    .branch_l   (branch_l)
);

always_comb begin
    PCTarget = PcOp ? rd1 + ImmExt : pc + ImmExt;
    PCSrc = (Branch && (branch_l ^ branch_neg)) || Jump;
end


endmodule
