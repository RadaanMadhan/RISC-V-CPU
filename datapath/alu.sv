module alu#(
    parameter   DATA_WIDTH = 32
)(
    input [DATA_WIDTH-1:0]  ALUop1,
    input [DATA_WIDTH-1:0]  ALUop2,
    input [2:0]             ALUctrl,
    output [DATA_WIDTH-1:0] ALUout,
    output                  EQ,
)

always_comb begin
    case(ALUctrl)
        000:    ALUout = ALUop1 + ALUop2; 
        001:    begin
                    ALUout = ALUop1 - ALUop2;
                    if (ALUout == {DATA_WIDTH{b'0}})    EQ = 1;
                    else EQ = 0;
                end
        101:    ALUout = ALUop1 <  ALUop2 ? 1 : 0;
        011:    ALUout = ALUop1 || ALUop2;
        010:    ALUout = ALUop1 && ALUop2;
    endcase
end


endmodule