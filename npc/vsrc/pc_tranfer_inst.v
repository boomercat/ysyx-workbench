module pc_transfer_inst(
    input clk,
    input rst,
    input ALU_done,
    input IDU_ready,
    input [31:0] pc,
    output reg [31:0] instruction,
    output reg IFU_done,
    output reg IFU_ready
);

import "DPI-C" function int unsigned pmem_read(input int unsigned raddr,int len);

always @(posedge clk or negedge clk ) begin
    if(rst)begin
        pc <= 32'h80000000;
        IFU_done <= 0;
        IFU_ready <= 1;    
    end esle begin
        if(ALU_done && IDU_ready) begin
            instruction <= pmem_read(pc,4);
            IFU_done <= 1;
            IFU_ready <= 0;
        end else begin
            IFU_done <= 0;
            IFU_ready <= 1;
        end
    end
end
endmodule

