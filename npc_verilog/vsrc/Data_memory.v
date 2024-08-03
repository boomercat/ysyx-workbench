module Data_memory (
    input clk,
    input [31:0] instruction,
    input [31:0] addr,
    input [31:0] write_data,
    output reg [31:0] mout_data
);

wire read_valid;
wire write_valid;
reg [31:0] mem_out;
assign write_valid = (instruction[6:0] == 7'b0100011) ? 1 : 0;
assign read_valid  = (instruction[6:0] == 7'b0000011) ? 1 : 0;
import "DPI-C" function int unsigned pmem_read(input int unsigned raddr,int len);
import "DPI-C" function void pmem_write (input int addr, input int data, input int len);

always @(read_valid or write_valid or clk) begin
    case ({read_valid,instruction[14:12]})
        4'b1000 : begin 
            mem_out = pmem_read(addr,1);
            mout_data = {{24{mem_out[7]}},mem_out[7:0]}; 
        end
        4'b1001 : begin
            mem_out = pmem_read(addr,2);
            mout_data = {{16{mem_out[15]}},mem_out[15:0]};
        end
        4'b1010 : begin
            mem_out = pmem_read(addr,4);
            mout_data = mem_out;
        end
        4'b1100 : begin
            mem_out = pmem_read(addr,1);
            mout_data = {24'b0,mem_out[7:0]};
        end
        4'b1101 : begin
            mem_out = pmem_read(addr,2);
            mout_data = {16'b0,mem_out[15:0]};
        end
        default: mout_data = 0;
    endcase        
end

always @(posedge clk ) begin
    if (write_valid) begin
        case (instruction[14:12])
            3'b000 : pmem_write(addr,write_data,1);
            3'b001 : pmem_write(addr,write_data,2);
            3'b010 : pmem_write(addr,write_data,4);
            default: ;
        endcase
    end
end
endmodule
