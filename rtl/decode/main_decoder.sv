module main_decoder (
    input  logic [6:0]    op,
    output logic [2:0]    ImmSrc, 
    output logic [1:0]    ALUOp,
    output logic          RegWrite,
    output logic          ALUSrc,
    output logic          MemWrite,
    output logic          ResultSrc,
    output logic          Branch
);

always_comb begin
case (op)
    //I-type (Load)
    7'b0000011: begin
        RegWrite    = 1'b1;
        ImmSrc      = 3'b001;
        ALUSrc      = 1'b1;
        MemWrite    = 1'b0;
        ResultSrc   = 1'b1;
        Branch      = 1'b0;
        ALUOp       = 2'b00;
    end
    //I-Type (Arithimetic)
    7'b0010011: begin
        RegWrite    = 1'b1;
        ImmSrc      = 3'b001;
        ALUSrc      = 1'b1;
        MemWrite    = 1'b0;
        ResultSrc   = 1'b0;
        Branch      = 1'b0;
        ALUOp       = 2'b10;
    end
    //S-type
    7'b0100011: begin
        RegWrite    = 1'b0;
        ImmSrc      = 3'b010;
        ALUSrc      = 1'b1;
        MemWrite    = 1'b1;
        ResultSrc   = 1'b0;
        Branch      = 1'b0;
        ALUOp       = 2'b00;
    end
    //R-type
    7'b0110011: begin
        RegWrite    = 1'b1;
        ImmSrc      = 3'b000;
        ALUSrc      = 1'b0;
        MemWrite    = 1'b0;
        ResultSrc   = 1'b0;
        Branch      = 1'b0;
        ALUOp       = 2'b10;
    end
    //B-type
    7'b1100011: begin
        RegWrite    = 1'b0;
        ImmSrc      = 3'b011;
        ALUSrc      = 1'b0;
        MemWrite    = 1'b0;
        ResultSrc   = 1'b0;
        Branch      = 1'b1;
        ALUOp       = 2'b01;
    end
    //U-Type
    //Load Upper Imm TODO
    7'b0110111: begin
        RegWrite    = 1'b1;
        ImmSrc      = 3'b100;
        ALUSrc      = 1'b1;
        MemWrite    = 1'b0;
        ResultSrc   = 1'b0;
        Branch      = 1'b0;
        ALUOp       = 2'b10;
    end
    //Add Upper Imm to PC TODO 
    7'b0010111: begin
        RegWrite    = 1'b1;
        ImmSrc      = 3'b100;
        ALUSrc      = 1'b1;
        MemWrite    = 1'b0;
        ResultSrc   = 1'b0;
        Branch      = 1'b0;
        ALUOp       = 2'b10;
    end
    //J-Type TODO
        7'b1101111: begin
        RegWrite    = 1'b1;
        ImmSrc      = 3'b101;
        ALUSrc      = 1'b1;
        MemWrite    = 1'b0;
        ResultSrc   = 1'b0;
        Branch      = 1'b0;
        ALUOp       = 2'b10;
    end
    //Jump and link reg (I-Type) TODO
        7'b1100111: begin
        RegWrite    = 1'b1;
        ImmSrc      = 3'b001;
        ALUSrc      = 1'b1;
        MemWrite    = 1'b0;
        ResultSrc   = 1'b0;
        Branch      = 1'b0;
        ALUOp       = 2'b10;
    end
    default: begin
        RegWrite    = 1'b0;
        ImmSrc      = 2'b00;
        ALUSrc      = 1'b0;
        MemWrite    = 1'b0;
        ResultSrc   = 1'b0;
        Branch      = 1'b0;
        ALUOp       = 2'b00;
    end
endcase
end

endmodule
