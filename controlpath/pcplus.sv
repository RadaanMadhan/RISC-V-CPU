module pc_plus #(
    parameter   ADDRESS_WIDTH = 5
)(  
    input [ADDRESS_WIDTH-1:0]   offset, 
    input [ADDRESS_WIDTH-1:0]   pc,
    output [ADDRESS_WIDTH-1:0]  pc_next
)

always_comb
    pc_next = pc + offset;

endmodule
