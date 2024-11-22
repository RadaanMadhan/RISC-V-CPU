module control_unit (
    input logic [6:0]     op,
    input logic [2:0]     funct3,
    input logic           funct7_5,
    input logic           EQ, 

    output logic [2:0]    ALUctrl,
    output logic [1:0]    ImmSrc, 
    output logic          RegWrite,
    output logic          ALUSrc,
    output logic          MemWrite,
    output logic          ResultSrc,
    output logic          PCSrc
);

logic       branch;
logic [1:0] ALUOp;

main_decoder main_decode(
    .op             (op),
    .ImmSrc         (ImmSrc),      
    .ALUOp          (ALUOp),
    .RegWrite       (RegWrite),
    .ALUSrc         (ALUSrc),
    .MemWrite       (MemWrite),
    .ResultSrc      (ResultSrc),
    .Branch         (branch)
);


alu_decoder alu_decode(
    .funct3         (funct3),
    .funct7_5       (funct7_5),
    .ALUOp          (ALUOp),
    .Op_5           (op[5]),
    .ALUctrl        (ALUctrl)
);

always_comb begin
    case(funct3)
        3'b001: PCSrc = branch && !EQ;
        default: PCSrc = branch && EQ;
    endcase
end




endmodule
