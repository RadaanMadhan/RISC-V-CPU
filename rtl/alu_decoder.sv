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
                    3'b000:    if({Op_5, funct7_5} == 2'b11) ALUctrl = 3'b001;
                            else ALUctrl = 3'b000;   

                    3'b010:    ALUctrl = 3'b101;
                    3'b110:    ALUctrl = 3'b011;
                    3'b111:    ALUctrl = 3'b010;
                    default:   ALUctrl = 3'b000;
                endcase
        default:   ALUctrl = 3'b000;
    endcase
end

endmodule
