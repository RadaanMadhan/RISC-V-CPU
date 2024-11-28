`include <mux.sv>
`include <./fetch/top_fetch.sv>
`include <./decode/top_decode.sv>
`include <./execute/top_execute.sv>
`include <./memory/top_memory.sv>

module top #(
    parameter   DATA_WIDTH = 32
) (
    input   logic clk,
    input   logic rst,
    input   logic trigger,
    output  logic [DATA_WIDTH-1:0] a0    
);

    //for testing
    logic unused_trigger;
    assign unused_trigger = trigger;

    logic [DATA_WIDTH-1:0]      pc;
    logic [DATA_WIDTH-1:0]      ImmExt;
    logic                       PCSrc;
    logic [DATA_WIDTH-1:0]      instr;
    logic                       branch_l;
    logic [2:0]                 ALUctrl;
    logic                       ALUSrc;
    logic                       MemWrite;
    logic                       ResultSrc;
    logic [DATA_WIDTH-1:0]      ALUResult;
    logic [DATA_WIDTH-1:0]      Result;
    logic                       PcOp;
    logic                       jalr;
    logic [DATA_WIDTH-1:0]      rd1;
    logic [DATA_WIDTH-1:0]      rd2;


//--------------------------------
//------------FETCH---------------
//--------------------------------

    top_fetch fetch(
        .clk         (clk),
        .rst         (rst),
        .PCSrc       (PCSrc),
        .ImmExt      (ImmExt),
        .pc          (pc),
        .jalr        (jalr),
        .rs1         (rd1),
        .instr       (instr)
    );

//--------------------------------
//------------DECODE--------------
//--------------------------------

    top_decode decode(
        .clk        (clk),
        .instr      (instr),
        .branch_l   (branch_l),
        .ALUctrl    (ALUctrl),
        .ALUSrc     (ALUSrc),
        .MemWrite   (MemWrite),
        .ResultSrc  (ResultSrc),
        .PCSrc      (PCSrc),
        .ImmExt     (ImmExt),
        .PcOp       (PcOp),
        .jalr       (jalr),
        .Result     (Result),
        .rd1        (rd1),
        .rd2        (rd2),
        .a0         (a0)
    );

//--------------------------------
//-----------EXECUTE--------------
//--------------------------------

    top_execute execute(
        .ALUctrl    (ALUctrl),
        .ALUSrc     (ALUSrc),
        .ImmExt     (ImmExt),
        .ALUResult  (ALUResult),
        .branch_l   (branch_l),
        .PcOp       (PcOp),
        .pc         (pc),
        .rd1        (rd1),
        .rd2        (rd2)
    );

//--------------------------------
//------------MEMORY--------------
//--------------------------------

    top_memory memory(
        .clk        (clk), 
        .ALUResult  (ALUResult),
        .WriteData  (rd2),
        .ResultSrc  (ResultSrc),
        .MemWrite   (MemWrite),
        .Result     (Result),
        .funct3     (instr[14:12])
    );


endmodule
