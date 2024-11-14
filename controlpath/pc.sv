module pc #(
    parameter   ADDRESS_WIDTH = 5
)(
    input                       clk,
    input [ADDRESS_WIDTH-1:0]   pc_next,
    output [ADDRESS_WIDTH-1:0]  pc
)

always_ff(@posedge clk)
    pc <= pc_next;

endmodule
