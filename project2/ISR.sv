/* Integer square root calculator that works in tandem with the 8 stage multiply to calculate
the highest 32 bit integer that is closest but still less than the square root of the 
provided 64 bit number... I.E highest integer fufilling the following provide > result * result
Also required to take less than 600 cycles
*/
typedef enum logic { 
    IDLE,
    DELAY,
    PROCESS, 
    FEED,
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
    wire                done_next;
    wire                mul_start, mul_done;
    logic       [63:0]  value_internal;         
    logic       [31:0]  result_q;  
    wire        [31:0]  result_next;  
    wire        [63:0]  mul_out;

    logic       [3:0]   index;      wire    [3:0]   index_next;
    
    // Instantiate the multiplier, since multiply is only checking to ensure that the current integer is
    // still less than the provided value we are finding isr of, use the same wire for both mplier & mcand
    mult mul ( .clock(clock), .reset(reset), .mcand(result_q), mplier(result_q), 
               .start(mul_start), .product(mul_out), .done(mul_done)                    );

    //I read the 3rd point of the docs as the results can be whatever the hell it wants, and 
    //just has to have the correct value if the done is high so therefore every clock cycle set it, doing this 
    assign result = result_q;       //Doing should reduce flops in synthesis! test it!

    wire [6:0] pre_process_flag;
    //Reduction or the bit groups 4 at a time to flag the top values
    assign pre_process_flag[6] = |value_internal[31 : 28] ? 1'b1 : 1'b0;
    assign pre_process_flag[5] = |value_internal[27 : 24] ? 1'b1 : 1'b0;
    assign pre_process_flag[4] = |value_internal[23 : 20] ? 1'b1 : 1'b0;
    assign pre_process_flag[3] = |value_internal[19 : 16] ? 1'b1 : 1'b0;
    assign pre_process_flag[2] = |value_internal[15 : 12] ? 1'b1 : 1'b0;
    assign pre_process_flag[1] = |value_internal[11 :  8] ? 1'b1 : 1'b0;
    assign pre_process_flag[0] = |value_internal[ 7 :  4] ? 1'b1 : 1'b0;

    always_comb begin
        // Defaults so that they don't have to written ever time
        result_next     =  result_q;  //Unless results changed keep it the same
        done_next       =  1'b0;
        case(state) begin
            IDLE : begin
                state_next      =  IDLE;
            end

            /* Immediately throwing everything through the comb would cause a hold time violation 
               at high speeds so we delay a cycle because the purpose of the preprocessor is to 
               decrease the worst case, but equalize the time across all cases, so its very consistent 
               not the optimal but consistently lower, atleast in my theory */
            DELAY : begin
                state_next      =  PROCESS;
            end

            /* We can use the maximum values calculated to do pre processing to decrease the cycle count
               as the highest bit group can indicate to us the highest bit of isr maximum is 128 + 2 cycles
               if a 1 is present in bits 31,30,29,28, we start at 0x8000, index = 15, (bit 16)
               if a 1 is present in bits 27,26,25,24  we start at 0x2000, index = 13, (bit 14)
               if a 1 is present in bits 23,22,21,20  we start at 0x800,  index = 11, (bit 12)
               if a 1 is present in bits 19,18,17,16  we start at 0x400,  index = 10  (bit 11)
               if a 1 is presnet in bits 15,14,13,12  we start at 0x80,   index =  7  (bit 8)
               if a 1 is presnet in bits 11,10,9,8    we start at 0x20,   index =  5  (bit 6)
               if a 1 is presnet in bits 7,6,5,4      we start at 0x8,    index =  3  (bit 4)
               else its only gonna be 3 or less so    we start at 0x3,    index =  1  (bit 2)          
               */
            PROCESS : begin
                state_next      = FEED;
                if      (pre_process_flag[6])       result_next = 32'h8000; index = 4'hF;
                else if (pre_process_flag[5])       result_next = 32'h2000; index = 4'hD;
                else if (pre_process_flag[4])       result_next = 32'h800;  index = 4'hB;
                else if (pre_process_flag[3])       result_next = 32'h400;  index = 4'hA;
                else if (pre_process_flag[2])       result_next = 32'h80;   index = 4'h7;
                else if (pre_process_flag[1])       result_next = 32'h20;   index = 4'h5;
                else if (pre_process_flag[0])       result_next = 32'h8;    index = 4'h3;
                else                                result_next = 32'h3;    index = 4'h1;                                   
            end

            /* In start we send the current guess in the chain off to be multiplied */
            FEED : begin        //named feed instead of start to avoid confusion
                state_next      =  WAIT;
                mul_start       =  1'b1;
                // Result_Q is already propagated with the start value of 32'h8000_0000 by the reset
                // or by the previous wait fail so result_d (next) = result_q (current stored)

            end
            
            /* wait for result */
            WAIT : begin
                //Turn off start
                mul_start       =  1'b0;
                if( mul_done ) begin
                    state_next  =  CHECK;
                    if( mul_out > )
                    
                end 
                //else still waiting
                else begin
                    state_next  =  WAIT;
                end 
            end


        endcase 

    end

    always_ff @(posedge clock) begin
        //documentation states: if a reset is asserted during a computation, overwrite the current value & start
        //computing again disregarding ongoing comp so both resets are the same, start first time & restart
        if(reset) begin
            state           <=  DELAY;
            value_internal  <=  value;
            //result_q        <=  32'h8000_0000;  //reset to 1 in the MSB as it starts in the binary search algo
        end else begin
            state           <=  next_state;
            result_q        <=  result_next;
            done            <=  done_next;
            index           <=  index_next;
        end
    end

endmodule