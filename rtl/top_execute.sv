module top_execute #(
    parameter   DATA_WIDTH = 32
)(
    input  logic                   clk,
    //input  logic                   rst, //for testing
    input  logic [19:15]           instr_19_15,
    input  logic [24:20]           instr_24_20,
    input  logic [11:7]            instr_11_7,
    input  logic [2:0]             ALUctrl,
    input  logic                   ALUSrc,
    input  logic                   RegWrite,
    input  logic [DATA_WIDTH-1:0]  Result,
    input  logic [DATA_WIDTH-1:0]  ImmExt,
    output logic [DATA_WIDTH-1:0]  a0,
    output logic [DATA_WIDTH-1:0]  ALUResult,
    output logic                   EQ,
    output logic [DATA_WIDTH-1:0]  WriteData

);

logic [DATA_WIDTH-1:0]  RD1;
logic [DATA_WIDTH-1:0]  ALUop2;
//logic rst_unused = rst; //for testing 

reg_file reg_file (
    .clk        (clk),
    .AD1        (instr_19_15),
    .AD2        (instr_24_20),
    .AD3        (instr_11_7),
    .WD3        (Result),   
    .WE3        (RegWrite),
    .RD1        (RD1),
    .RD2        (WriteData),
    .a0         (a0)
);

mux ALuSrcSel (
    .in0        (WriteData),
    .in1        (ImmExt),
    .sel        (ALUSrc),
    .out        (ALUop2)
);

alu alu(
    .ALUop1     (RD1),
    .ALUop2     (ALUop2),
    .ALUctrl    (ALUctrl),
    .ALUout     (ALUResult),
    .EQ         (EQ)
);

endmodule
