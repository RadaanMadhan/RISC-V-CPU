module ram #(
    parameter   ADDRESS_WIDTH = 8,
                DATA_WIDTH = 8,
)(
    input                           wr_en,
    input                           rd_en,
    input [ADDRESS_WIDTH-1:0]       wr_addr,
    input [ADDRESS_WIDTH-1:0]       rd_addr,
    input [DATA_WIDTH-1:0]          din,
    output[DATA_WIDTH-1:0]          dout
);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];


always_comb
    if (rd_en) dout = ram_array[rd_addr];
    if (wr_en) ram_array[wr_addr] = din;


endmodule