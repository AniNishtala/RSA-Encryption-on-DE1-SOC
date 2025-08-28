module rsa_qsys_ip (
    input wire clk,
    input wire reset,

    // Avalon-MM signals
    input wire [4:0] avs_address,
    input wire avs_read,
    output reg [31:0] avs_readdata,
    input wire avs_write,
    input wire [31:0] avs_writedata
);

    
    localparam P = 3;
    localparam Q = 5;
    localparam MESSAGE = 5;

    
    reg [31:0] e, d, n;
    reg [31:0] phi;
    reg [31:0] cipher, decrypted;
    reg [31:0] base, exp, mod;
    reg [31:0] result;
    reg [31:0] i;
    reg [3:0] state;
    reg done;

    reg start_latched;
    reg start_req;  

    localparam IDLE      = 4'd0,
               COMPUTE   = 4'd1,
               FIND_D    = 4'd2,
               ENCRYPT   = 4'd3,
               EXP_ENC   = 4'd4,
               DECRYPT   = 4'd5,
               EXP_DEC   = 4'd6,
               DONE      = 4'd7;

    // FSM
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= IDLE;
            done <= 0;
            d <= 0;
            e <= 0;
            n <= 0;
            cipher <= 0;
            decrypted <= 0;
            start_latched <= 0;
        end else begin
            if (start_req && !start_latched)
                start_latched <= 1;

            case (state)
                IDLE: begin
                    done <= 0;
                    if (start_latched) begin
                        start_latched <= 0;  // One-shot
                        state <= COMPUTE;
                    end
                end

                COMPUTE: begin
                    n <= P * Q;
                    phi <= (P - 1) * (Q - 1);
                    e <= 17;
                    i <= 1;
                    state <= FIND_D;
                end

                FIND_D: begin
                    if ((17 * i) % phi == 1) begin
                        d <= i;
                        state <= ENCRYPT;
                    end else if (i >= phi) begin
                        d <= 0;
                        state <= DONE;
                    end else begin
                        i <= i + 1;
                    end
                end

                ENCRYPT: begin
                    base <= MESSAGE % n;
                    exp <= e;
                    mod <= n;
                    result <= 1;
                    state <= EXP_ENC;
                end

                EXP_ENC: begin
                    if (exp != 0) begin
                        if (exp[0])
                            result <= (result * base) % mod;
                        base <= (base * base) % mod;
                        exp <= exp >> 1;
                    end else begin
                        cipher <= result;
                        state <= DECRYPT;
                    end
                end

                DECRYPT: begin
                    base <= cipher % n;
                    exp <= d;
                    result <= 1;
                    state <= EXP_DEC;
                end

                EXP_DEC: begin
                    if (exp != 0) begin
                        if (exp[0])
                            result <= (result * base) % n;
                        base <= (base * base) % n;
                        exp <= exp >> 1;
                    end else begin
                        decrypted <= result;
                        state <= DONE;
                    end
                end

                DONE: begin
                    done <= 1;
                    state <= IDLE;
                end
            endcase
        end
    end

    // Avalon-MM write: only sets start_req
    always @(posedge clk) begin
        if (avs_write) begin
            if (avs_address == 5'h00)
                start_req <= avs_writedata[0];
        end
    end

    // Avalon-MM read
    always @(*) begin
        avs_readdata = 32'd0;
        if (avs_read) begin
            case (avs_address)
                5'h01: avs_readdata = e;
                5'h02: avs_readdata = d;
                5'h03: avs_readdata = n;
                5'h04: avs_readdata = cipher;
                5'h05: avs_readdata = decrypted;
                5'h06: avs_readdata = {31'd0, done};
            endcase
        end
    end

endmodule
