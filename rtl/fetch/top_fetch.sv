`include <./fetch/pc_reg.sv>
`include <./fetch/inst_mem.sv>

module top_fetch #(
    parameter   ADDRESS_WIDTH = 32
)(
    input  logic                       clk,
    input  logic                       rst,
    input  logic                       PCSrc,
    input  logic [ADDRESS_WIDTH-1:0]   ImmExt,
    input  logic [ADDRESS_WIDTH-1:0]   rs1,
    input  logic                       jalr,
    input  logic [ADDRESS_WIDTH-1:0]   PCTarget,
    output logic [ADDRESS_WIDTH-1:0]   instr,
    output logic [ADDRESS_WIDTH-1:0]   pc,
    output logic [ADDRESS_WIDTH-1:0]   PCPlus4
);

logic [ADDRESS_WIDTH-1:0] pc_next;
logic [ADDRESS_WIDTH-1:0] pc_next_f;


assign PCPlus4 = pc + 4;

pc_reg pc_reg(
    .clk    (clk),
    .rst    (rst),
    .pc_next(pc_next_f),
    .pc     (pc)
);

mux pc_sel
(
    .in0    (PCPlus4),
    .in1    (PCTarget),
    .sel    (PCSrc),
    .out    (pc_next)
);

mux jalr_sel(
    .in0    (pc_next),
    .in1    (ImmExt + rs1),
    .sel    (jalr),
    .out    (pc_next_f)
);

    inst_mem inst_mem (
        .addr       (pc),
        .dout       (instr)
    );


    
endmodule
