module top(
	input a,
	input b,
	output f
);

a_b my_a_b(
	.a(a),
	.b(b),
	.f(f)
);
endmodule
