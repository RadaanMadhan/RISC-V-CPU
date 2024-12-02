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
    logic [2:0]                 ALUctrl;
    logic                       ALUSrc;
    logic                       MemWrite;
    logic [1:0]                 ResultSrc;
    logic [DATA_WIDTH-1:0]      ALUResult;
    logic [DATA_WIDTH-1:0]      Result;
    logic                       PcOp;
    logic [DATA_WIDTH-1:0]      rd1;
    logic [DATA_WIDTH-1:0]      rd2;
    logic [DATA_WIDTH-1:0]      PCPlus4;
    logic [DATA_WIDTH-1:0]      PCTarget;
    logic                       Branch;
    logic                       Jump;
    logic                       branch_neg;


//--------------------------------
//------------FETCH---------------
//--------------------------------

    top_fetch fetch(
        .clk         (clk),
        .rst         (rst),
        .PCSrc       (PCSrc),
        .pc          (pc),
        .instr       (instr),
        .PCPlus4     (PCPlus4),
        .PCTarget    (PCTarget)
    );

//--------------------------------
//------------DECODE--------------
//--------------------------------

    top_decode decode(
        .clk        (clk),
        .instr      (instr),
        .ALUctrl    (ALUctrl),
        .ALUSrc     (ALUSrc),
        .MemWrite   (MemWrite),
        .ResultSrc  (ResultSrc),
        .Branch     (Branch),
        .Jump       (Jump),
        .branch_neg (branch_neg),
        .ImmExt     (ImmExt),
        .PcOp       (PcOp),
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
        .PcOp       (PcOp),
        .pc         (pc),
        .rd1        (rd1),
        .rd2        (rd2),
        .PCTarget   (PCTarget),
        .Jump       (Jump),
        .Branch     (Branch),
        .branch_neg (branch_neg),
        .PCSrc      (PCSrc)
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
        .funct3     (instr[14:12]),
        .PCPlus4    (PCPlus4),
        .PCaui      (PCTarget)
    );


endmodule
