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
    output logic [DATA_WIDTH-1:0]  ALUResult,
    output logic                   branch_l

);

logic [DATA_WIDTH-1:0]  ALUop2;
logic [DATA_WIDTH-1:0]  ALUop1;
logic [DATA_WIDTH-1:0]  ALUop2_f;


mux ALuSrc1Sel (
    .in0        (rd1),
    .in1        (pc), 
    .sel        (PcOp),
    .out        (ALUop1)
);

mux ALuSrc2Sel (
    .in0        (rd2),
    .in1        (ImmExt),
    .sel        (ALUSrc),
    .out        (ALUop2)
);

mux AluSrc2PcOpSel (
    .in0        (ALUop2),
    .in1        (32'd4),
    .sel        (PcOp),
    .out        (ALUop2_f)
);



alu alu(
    .ALUop1     (ALUop1),
    .ALUop2     (ALUop2_f),
    .ALUctrl    (ALUctrl),
    .ALUout     (ALUResult),
    .branch_l   (branch_l)
);

endmodule
