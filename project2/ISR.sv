/* Integer square root calculator that works in tandem with the 8 stage multiply to calculate
the highest 32 bit integer that is closest but still less than the square root of the 
provided 64 bit number... I.E highest integer fufilling the following provide > result * result
Also required to take less than 600 cycles
*/
typedef enum logic { 
    IDLE, 
    START,
    WAIT, 
    CHECK,
    DONE
} fsm_states;

module ISR (
    input                   reset,
    input           [63:0]  value,
    input                   clock,
    output logic    [31:0]  result,
    output logic            done
);
    fsm_states state, next_state;       logic start, done;
    logic [63:0] mul_in, mul_out, value_internal;
    // Instantiate the multiplier, since the only multiply is checking to ensure that 
    // the current integer is still less than the provided value we are finding isr of, so use the same 
    // wire as both multiplier and multiplicand 
    mult mul ( .clock(clock), .reset(reset), .mcand(mul_in), mplier(mul_in), 
            .start(start), .product(mul_out), .done(done)                 );

    always_comb begin
        //Defaults the values with go to if not set by any of the states in the state machine
        state_next      =  state;
        done            =  1'b0;
        result          =  32'h0000_0000;

        case(state)

    end


    always_ff @(posedge clock) begin
        //documentation states that if a reset is asserted during a rising clock edge, 
        //Since you are to write the signal value and begin computer go to start as you disregard 
        //any previous and start computing again 
        if(reset) begin
            state           <=  START;
            value_internal  <=  value;
        end else begin
            state           <=  next_state
        end
    end

endmodule