module pc_transfer_inst(
    input [31:0] pc,
    output [31:0] instruction
);

import "DPI-C" function int unsigned pmem_read(input int unsigned raddr,int len);

assign instruction = pmem_read(pc,4);

endmodule
