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

    fsm_states          state, next_state;      
    logic               start, done;
    logic       [63:0]  value_internal;         
    wire        [31:0]  result_d;
    logic       [31:0]  result_q;  
    
    // Instantiate the multiplier, since multiply is only checking to ensure that the current integer is
    // still less than the provided value we are finding isr of, use the same wire for both mplier & mcand
    mult mul ( .clock(clock), .reset(reset), .mcand(mul_in), mplier(mul_in), 
            .start(start), .product(mul_out), .done(done)                    );

    always_comb begin
        //Defaults the values with go to if not set by any of the states in the state machine
        state_next      =  state;
        done            =  1'b0;
        case(state) begin
            IDLE : begin
                state_next      =  IDLE;
                done            =  1'b0;
                //Should only be high one cycle same as done. didn't have to, didn't have to write cuz taken
                //care of above with the default but tis what it is
                result          =  32'h0000_0000;  

            end
            /* In start we send the current guess in the chain off to be multiplied */
            START : begin
                state_next      =  WAIT;
                start           =  1'b1;
            end


        endcase 

    end


    always_ff @(posedge clock) begin
        //documentation states: if a reset is asserted during a computation, overwrite the current value & start
        //computing again disregarding ongoing comp so both resets are the same, start first time & restart
        if(reset) begin
            state           <=  START;
            value_internal  <=  value;
            result_q        <=  32'h8000_0000;  //reset to 1 in the MSB as it starts in the binary search algo
        end else begin
            state           <=  next_state;
            result_q        <=  result_d;
        end
    end

endmodule