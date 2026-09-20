module tb;
    logic signed [7:0] a, b;
    logic signed [15:0] p;
    initial begin
        a = 127;
        b = -128;
        p = a * b;
        $display("a = %d, b = %d, p = %d", a, b, p);
    end
endmodule
