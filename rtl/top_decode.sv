module top_decode #(
    parameter DATA_WIDTH = 32
) (
    input  logic [DATA_WIDTH-1:0]  instr,
    input  logic                   EQ,
    output logic [2:0]             ALUctrl,
    output logic                   RegWrite,
    output logic                   ALUSrc,
    output logic                   MemWrite,
    output logic                   ResultSrc,
    output logic                   PCSrc,
    output logic [DATA_WIDTH-1:0]  ImmExt
);

logic [1:0] ImmSrc;
logic [19:15] unused_bits = instr[19:15];

control_unit control_unit (
    .op         (instr[6:0]),
    .funct3     (instr[14:12]),
    .funct7_5   (instr[30]),
    .EQ         (EQ),  
    .ALUctrl    (ALUctrl),
    .ImmSrc     (ImmSrc), 
    .RegWrite   (RegWrite),
    .ALUSrc     (ALUSrc),
    .MemWrite   (MemWrite),
    .ResultSrc  (ResultSrc),
    .PCSrc      (PCSrc)
);

sign_extend sign_extend(
    .Imm_up        (instr[31:20]),
    .Imm_down      (instr[11:7]),
    .ImmSrc        (ImmSrc),
    .ImmExt        (ImmExt)     
);

    
endmodule
