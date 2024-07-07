`define mstatus 12'h300
`define mtvec   12'h305
`define mcause  12'h342
`define mepc    12'h341

module CSR(
    input clk,
    input [31:0] instruction,
    input [31:0] irq_no,
    input [11:0] csr_imm,
    input [31:0] w_data,
    input [31:0] pc,
    output [31:0] odata,
    output [31:0] mtvec,
    output [31:0] mepc
);

wire [1:0] waddr_in;
wire [1:0] raddr_in;
wire csr_wen;
wire irq;
reg [31:0] csr_register [3:0]; // 0->mstatus 1->mtvec 2->mcause 3->mepc
initial begin
    csr_register[0] = 32'h1800; // 初始化mstatus
    csr_register[1] = 32'h0;    // 初始化mtvec
    csr_register[2] = 32'h0;    // 初始化mcause
    csr_register[3] = 32'h0;    // 初始化mepc
end

assign csr_wen = ((instruction[6:0] == 7'b1110011) && (instruction[14:12] == 3'b010 || instruction[14:12] == 3'b001)) ? 1 : 0;
assign irq =  (instruction == 32'b0000000000000000000000001110011);

MuxKeyWithDefault #(4, 12, 2) waddr_mux (waddr_in, csr_imm, 2'b00, {
     `mstatus , 2'b00,
     `mtvec   , 2'b01,
     `mcause  , 2'b10,
     `mepc    , 2'b11
});

MuxKeyWithDefault #(4, 12, 2) raddr_mux (raddr_in, csr_imm, 2'b00, {
     `mstatus , 2'b00,
     `mtvec   , 2'b01,
     `mcause  , 2'b10,
     `mepc    , 2'b11
});


always @(posedge clk) begin
    if (csr_wen) begin
        csr_register[waddr_in] <= w_data;
    end
    if (irq) begin
        // 更新 mcause 和 mepc
        csr_register[2] <= irq_no;
        csr_register[3] <= pc;
    end
end

assign odata = csr_register[raddr_in];
assign mtvec = csr_register[1];
assign mepc = csr_register[3];

endmodule
