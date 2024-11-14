module alu_decoder #(
    input [2:0]     funct3,
    input           funct7_5,
    input [1:0]     ALUOp,
    input           Op_5,
    output [2:0]    ALUctrl
)

case(ALUOp)
    00:     ALUctrl = 000;
    01:     ALUctrl = 001;
    10:     case(funct3)
                000:    case(Op_5, funct7_5)
                            11:     ALUctrl = 001;
                            default:ALUctrl = 000;   
                        endcase
                010:    ALUctrl = 101;
                110:    ALUctrl = 011;
                111:    ALUctrl = 010;
            endcase
endcase


endmodule
