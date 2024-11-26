module alu#(
    parameter   DATA_WIDTH = 32
)(
    input  logic [DATA_WIDTH-1:0]   ALUop1,
    input  logic [DATA_WIDTH-1:0]   ALUop2,
    input  logic [2:0]              ALUctrl,
    output logic [DATA_WIDTH-1:0]   ALUout,
    output logic                    EQ
);

always_comb begin
    EQ = 0;
    case(ALUctrl)
        3'b000:     ALUout = ALUop1 + ALUop2; 
        3'b001:     begin
                        ALUout = ALUop1 - ALUop2;
                        if (ALUout == {DATA_WIDTH{1'b0}})    EQ = 1;
                        else EQ = 0;
                    end
        3'b010:     ALUout = ALUop1 < ALUop2 ? 1 : 0;
        3'b100:     ALUout = ALUop1 ^ ALUop2;
        3'b101:     ALUout = ALUop1 >> ALUop2;
        3'b011:     ALUout = ALUop1 << ALUop2;
        3'b110:     ALUout = ALUop1 | ALUop2;
        3'b111:     ALUout = ALUop1 & ALUop2;
        default:    ALUout = {DATA_WIDTH{1'b0}};
    endcase
end


endmodule
