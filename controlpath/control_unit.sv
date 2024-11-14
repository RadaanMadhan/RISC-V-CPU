module control_unit #(
    input [6:0]     op,
    input [2:0]     funct3,
    input           funct7_5,
    input           Zero,  
    output [2:0]    ALUctrl
    output [1:0]    ImmSrc, 
    output          RegWrite,
    output          ALUSrc,
    output          MemWrite,
    output          ResultSrc,
    output          PCSrc
)

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

always_comb 
    PCSrc = branch && Zero;



endmodule
