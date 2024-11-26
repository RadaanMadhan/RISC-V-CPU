module alu_decoder (
    input  logic [2:0]  funct3,
    input  logic        funct7_5,
    input  logic [1:0]  ALUOp,
    input  logic        Op_5,
    output logic [2:0]  ALUctrl
);

always_comb begin
    case(ALUOp)
        2'b00:     ALUctrl = 3'b000;
        2'b01:     ALUctrl = 3'b001;
        2'b10:     case(funct3)
                    //Add and Sub
                    3'b000:     if({Op_5, funct7_5} == 2'b11) ALUctrl = 3'b001;
                                else ALUctrl = 3'b000;   
                    // Set Less Than
                    3'b010:     ALUctrl = 3'b010;
                    // Set Less Than (U) TODO
                    3'b011:     ALUctrl = 3'b010;
                    //XOR
                    3'b100:     ALUctrl = 3'b100;
                    // Shift Right TODO
                    3'b101:     ALUctrl = 3'b101;
                    //Shift Left 
                    3'b001:     ALUctrl = 3'b011;
                    //OR
                    3'b110:     ALUctrl = 3'b110;
                    //AND
                    3'b111:     ALUctrl = 3'b111;
                    default:    ALUctrl = 3'b000;
                endcase
        default:   ALUctrl = 3'b000;
    endcase
end

endmodule
