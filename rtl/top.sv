`include <mux.sv>
`include <./fetch/top_fetch.sv>
`include <./decode/top_decode.sv>
`include <./execute/top_execute.sv>
`include <./memory/top_memory.sv>
`include <./memory/inst_mem.sv>

module top #(
    parameter   DATA_WIDTH = 32
) (
    input   logic clk,
    input   logic rst,
    input   logic trigger,
    output  logic [DATA_WIDTH-1:0] a0    
);



    logic [DATA_WIDTH-1:0]      pc;
    logic [DATA_WIDTH-1:0]      ImmExt;
    logic                       PCSrc;
    logic [DATA_WIDTH-1:0]      instr;
    logic                       branch_l;
    logic [2:0]                 ALUctrl;
    logic                       RegWrite;
    logic                       ALUSrc;
    logic                       MemWrite;
    logic                       ResultSrc;
    logic [DATA_WIDTH-1:0]      ALUResult;
    logic [DATA_WIDTH-1:0]      WriteData;
    logic [DATA_WIDTH-1:0]      Result;
    logic                       PcOp;
    logic                       jalr;
    logic [DATA_WIDTH-1:0]      rs1;

    top_fetch fetch(
        .clk         (clk),
        .rst         (rst),
        .PCSrc       (PCSrc),
        .ImmExt      (ImmExt),
        .pc          (pc),
        .jalr        (jalr),
        .rs1         (rs1)
    );

    inst_mem inst_mem (
        .addr       (pc),
        .dout       (instr)
    );

    top_decode decode(
        .instr      (instr),
        .branch_l   (branch_l),
        .ALUctrl    (ALUctrl),
        .RegWrite   (RegWrite),
        .ALUSrc     (ALUSrc),
        .MemWrite   (MemWrite),
        .ResultSrc  (ResultSrc),
        .PCSrc      (PCSrc),
        .ImmExt     (ImmExt),
        .PcOp       (PcOp),
        .jalr       (jalr)
    );

    top_execute execute(
        .clk        (clk),
        .Trigger    (trigger),
        .instr_11_7 (instr[11:7]),
        .instr_19_15(instr[19:15]),
        .instr_24_20(instr[24:20]),
        .ALUctrl    (ALUctrl),
        .ALUSrc     (ALUSrc),
        .RegWrite   (RegWrite),
        .Result     (Result),
        .ImmExt     (ImmExt),
        .a0         (a0),
        .ALUResult  (ALUResult),
        .branch_l   (branch_l),
        .WriteData  (WriteData),
        .PcOp       (PcOp),
        .pc         (pc),
        .rs1        (rs1)
    );

    top_memory memory(
        .clk        (clk), 
        .ALUResult  (ALUResult),
        .WriteData  (WriteData),
        .ResultSrc  (ResultSrc),
        .MemWrite   (MemWrite),
        .Result     (Result),
        .funct3     (instr[14:12])
    );

    //assign a0 = 32'd5;

endmodule
