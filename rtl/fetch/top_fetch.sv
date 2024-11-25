`include <./fetch/pc_reg.sv>

module top_fetch #(
    parameter   ADDRESS_WIDTH = 32
)(
    input  logic                       clk,
    input  logic                       rst,
    input  logic                       PCSrc,
    input  logic [ADDRESS_WIDTH-1:0]   ImmExt,
    output logic [ADDRESS_WIDTH-1:0]   pc
);

logic [ADDRESS_WIDTH-1:0] pc_next;



pc_reg pc_reg(
    .clk    (clk),
    .rst    (rst),
    .pc_next(pc_next),
    .pc     (pc)
);

mux  #(
    32
) pc_sel
(
    .in0    (pc + 4),
    .in1    (pc + ImmExt),
    .sel    (PCSrc),
    .out    (pc_next)
);


    
endmodule
