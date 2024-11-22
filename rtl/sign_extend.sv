module sign_extend #(
    parameter   DATA_WIDTH = 32
)(
    input  logic [31:20]           Imm_up,
    input  logic [11:7]            Imm_down,
    input  logic [1:0]             ImmSrc,
    output logic [DATA_WIDTH-1:0]  ImmExt        
);
    always_comb begin
    case (ImmSrc) 
        2'b00: ImmExt = {{20{Imm_up[31]}},Imm_up[31:20]};             // I-type
        2'b01: ImmExt = {{20{Imm_up[31]}},Imm_up[31:25],Imm_down};  // S-type
        2'b10: ImmExt = {{20{Imm_up[31]}},Imm_down[7],Imm_up[30:25],Imm_down[11:8],1'b0};//B-type
        //2'b11: ImmExt = 
        default: ImmExt = 32'b0;
    endcase
    end 
endmodule
