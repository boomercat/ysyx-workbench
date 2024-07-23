module pc_transfer_inst(
    input clk,
    input rst,
    input ALU_done,
    input [31:0] pc,
    output reg [31:0] instruction,
    output reg IFU_done
);

import "DPI-C" function int unsigned pmem_read(input int unsigned raddr,int len);

always @(clk ) begin
    if(rst)begin
        IFU_done <= 0;
    end else begin
        if(ALU_done) begin
            instruction <= pmem_read(pc,4);
            IFU_done <= 1;
        end 
        else begin
            IFU_done <= 0;
        end
    end
end

endmodule

