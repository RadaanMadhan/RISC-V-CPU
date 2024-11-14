module main_decoder #(
    input [6:0]     op,
    output [1:0]    ImmSrc, 
    output [1:0]    ALUOp,
    output          RegWrite,
    output          ALUSrc,
    output          MemWrite,
    output          ResultSrc,
    output          Branch
)
case (variable)
    0000011: begin
        RegWrite    = 1;
        ImmSrc      = 00;
        ALUSrc      = 1;
        MemWrite    = 0;
        ResultSrc   = 1;
        Branch      = 0;
        ALUOp       = 00;
    end
    0100011: begin
        RegWrite    = 0;
        ImmSrc      = 01;
        ALUSrc      = 1;
        MemWrite    = 1;
        Branch      = 0;
        ALUOp       = 00;
    end
    0110011: begin
        RegWrite    = 1;
        ALUSrc      = 0;
        MemWrite    = 0;
        ResultSrc   = 0;
        Branch      = 0;
        ALUOp       = 10;
    end
    1100011: begin
        RegWrite    = 0;
        ImmSrc      = 10;
        ALUSrc      = 0;
        MemWrite    = 0;
        Branch      = 1;
        ALUOp       = 01;
    end
endcase


endmodule
