// This is one stage of an 8 stage (9 depending on how you look at it)
// pipelined multiplier that multiplies 2 64-bit integers and returns
// the low 64 bits of the result.  This is not an ideal multiplier but
// is sufficient to allow a faster clock period than straight *
module mult_stage(
					input clock, reset, start,
					input [63:0] product_in, mplier_in, mcand_in,

					output logic done,
					output logic [63:0] product_out, mplier_out, mcand_out
				);



	logic [63:0] prod_in_reg, partial_prod_reg;
	logic [63:0] partial_product, next_mplier, next_mcand;

	assign product_out = prod_in_reg + partial_prod_reg;

	assign partial_product = mplier_in[7:0] * mcand_in;

	assign next_mplier = {8'b0,mplier_in[63:8]};
	assign next_mcand = {mcand_in[55:0],8'b0};

	//synopsys sync_set_reset "reset"
	always_ff @(posedge clock) begin
		prod_in_reg      <= #1 product_in;
		partial_prod_reg <= #1 partial_product;
		mplier_out       <= #1 next_mplier;
		mcand_out        <= #1 next_mcand;
	end

	// synopsys sync_set_reset "reset"
	always_ff @(posedge clock) begin
		if(reset)
			done <= #1 1'b0;
		else
			done <= #1 start;
	end

endmodule
// This is an 8 stage (9 depending on how you look at it) pipelined 
// multiplier that multiplies 2 64-bit integers and returns the low 64 bits 
// of the result.  This is not an ideal multiplier but is sufficient to 
// allow a faster clock period than straight *
// This module instantiates 8 pipeline stages as an array of submodules.
module mult(
				input clock, reset,
				input [63:0] mcand, mplier,
				input start,

				output [63:0] product,
				output done
			);

  logic [63:0] mcand_out, mplier_out;
  logic [(7*64)-1:0] internal_products, internal_mcands, internal_mpliers;
  logic [6:0] internal_dones;

	mult_stage mstage [7:0]  (
		.clock(clock),
		.reset(reset),
		.product_in({internal_products,64'h0}),
		.mplier_in({internal_mpliers,mplier}),
		.mcand_in({internal_mcands,mcand}),
		.start({internal_dones,start}),
		.product_out({product,internal_products}),
		.mplier_out({mplier_out,internal_mpliers}),
		.mcand_out({mcand_out,internal_mcands}),
		.done({done,internal_dones})
	);

endmodule

////////////////////
///////////////////
//////////////////
////////////

/* For fun more than anything, below is a pre-processor, with the goal */ 


/*
the highest 32 bit integer that is closest but still less than the square root of the 
provided 64 bit number... I.E highest integer fufilling the following provide > result * result
Also required to take less than 600 cycles
*/

typedef enum logic [2:0] { 
    IDLE,
    DELAY,
    PROCESS, 
    FEED,
    WAIT, 
    CHECK,
    DONE
} fsm_states;

/* my multi-cycle function */ 
module pre_process(
    input  wire [63:0] value,
    output wire [14:0] pre_processed_1hot
);
    assign pre_processed_1hot[14] = ( |value[63 : 60] );
    assign pre_processed_1hot[13] = ( |value[59 : 56] );
    assign pre_processed_1hot[12] = ( |value[55 : 52] );
    assign pre_processed_1hot[11] = ( |value[51 : 48] );
    assign pre_processed_1hot[10] = ( |value[47 : 44] );
    assign pre_processed_1hot[ 9] = ( |value[43 : 40] );
    assign pre_processed_1hot[ 8] = ( |value[39 : 36] );
    assign pre_processed_1hot[ 7] = ( |value[35 : 32] );
    assign pre_processed_1hot[ 6] = ( |value[31 : 28] );
    assign pre_processed_1hot[ 5] = ( |value[27 : 24] );
    assign pre_processed_1hot[ 4] = ( |value[23 : 20] );
    assign pre_processed_1hot[ 3] = ( |value[19 : 16] );
    assign pre_processed_1hot[ 2] = ( |value[15 : 12] );
    assign pre_processed_1hot[ 1] = ( |value[11 :  8] );
    assign pre_processed_1hot[ 0] = ( |value[ 7 :  4] );




endmodule


module ISR (
    input                   reset,
    input           [63:0]  value,
    input                   clock,
    output logic    [31:0]  result,
    output logic            done
);

    fsm_states              state, state_next;      
    logic                   mul_start, mul_done;
    logic           [63:0]  mul_out;
    logic           [3:0]   index;  
    //exist to get around needing to use a larger bit width index lmao      
    
    // Instantiate the multiplier, since multiply is only checking to ensure that the current integer is
    // still less than the provided value we are finding isr of, use the same wire for both mplier & mcand
    mult mul ( .clock(clock), .reset(reset), .mcand(result), .mplier(result), 
              .start(mul_start), .product(mul_out), .done(mul_done)                    );

    //I read the 3rd point of the docs as the results can be whatever the hell it wants, and 
    //just has to have the correct value if the done is high so therefore every clock cycle set it, doing this   	
    logic [6:0] pre_process_flag_wire;

    assign pre_process_flag[6] = ( |value[31 : 28] );
    assign pre_process_flag[5] = ( |value[27 : 24] );
    assign pre_process_flag[4] = ( |value[23 : 20] );
    assign pre_process_flag[3] = ( |value[19 : 16] );
    assign pre_process_flag[2] = ( |value[15 : 12] );
    assign pre_process_flag[1] = ( |value[11 :  8] );
    assign pre_process_flag[0] = ( |value[ 7 :  4] );

    //Group of 3 Flag bits at a few points in the design
    logic   zero_check;    logic   val_check;    logic   first_flag; 

    assign val_check    = (mul_out > value) ? 1'b1 : 1'b0;
    assign zero_check   = (|value) ? 1'b0 : 1'b1; 

    /* The purpose of the delay stage plus a second Process stage is to allow 2 stages for the 
    re*/ 


    always_comb begin
        // Defaults so that they don't have to written ever time
        case(state)
            IDLE : begin
                state_next      =  IDLE;
            end

             /* Immediately throwing everything through the comb would cause a hold time violation 
               at high speeds so we delay a cycle because the purpose of the preprocessor is to 
               decrease the worst case, but equalize the time across all cases, so its very consistent 
               not the optimal but consistently lower, atleast in half ass theory theory
               double delay */
            DELAY : begin
                state_next      =  PROCESS;
            end

    
            PROCESS : begin
                state_next      = FEED;                              
            end

            /* In start we send the current guess in the chain off to be multiplied */
            FEED : begin        //named feed instead of start to avoid confusion
                state_next      =  WAIT;
            end
            
            /* wait for result */
            WAIT : begin
                if( mul_done ) begin
                    state_next  =  CHECK;
                end 
                //else still waiting
                else begin
                    state_next  =  WAIT;
                end    
            end

            /* Check case may be doable in the wait case but moved to its own for no reason lmao */ 
            CHECK : begin
                //if the output of multiplier is 0 for an edge case
                //pretty wasteful not gonna lie since I already ran the multiplier but whatever
                if (zero_check) begin
                        state_next          =   DONE;
                end 
                //Is the result greater, if so set index in result 0 and feed new smaller number to multiplier
                else if( val_check ) begin
                        state_next          =   FEED;
                    end
              
                //Its less than, so are we all the way through i.e. our index is 0 or do we need to 
                //keep going through the bits so send it back to feed
                else begin  
                    if( index == 4'b0000 ) begin
                        state_next  =  DONE;
                    end 
                    else begin
                        state_next  =  FEED;
                    end  
                end
            end

            DONE : begin
                state_next  =  IDLE;
            end
        endcase 

    end

    //The module desires to have registered outputs neccessitating a 3rd always, I could do one FF block. 
    always_ff @(posedge clock) begin
        //defaults
        done             <= 1'b0;
        mul_start        <= 1'b0;
        //documentation states: if a reset is asserted during a computation, overwrite the current value & start
        //computing again disregarding ongoing comp so both resets are the same, start first time & restart
        if(reset) begin
            state           <=  DELAY;
        end 

        else begin
            state           <=  state_next;
            //Case Logic
            case(state) 

                // IDLE  : NOP nothing done output wise outside of the default                              
                DELAY   : begin              
                    first_flag      <=  1'b1;
                end

                PROCESS : begin
                    if      (pre_process_flag[6])   begin   result <= 32'h8000; index <= 4'hF;  end
                    else if (pre_process_flag[5])   begin   result <= 32'h2000; index <= 4'hD;  end
                    else if (pre_process_flag[4])   begin   result <= 32'h800;  index <= 4'hB;  end
                    else if (pre_process_flag[3])   begin   result <= 32'h400;  index <= 4'hA;  end
                    else if (pre_process_flag[2])   begin   result <= 32'h80;   index <= 4'h7;  end
                    else if (pre_process_flag[1])   begin   result <= 32'h20;   index <= 4'h5;  end
                    else if (pre_process_flag[0])   begin   result <= 32'h8;    index <= 4'h3;  end
                    else                            begin   result <= 32'h3;    index <= 4'h1;  end
                end
                FEED    : begin
                    //Turn off start
                    mul_start   <=  1'b1;
                    if( !first_flag )   index       <=  index - 1'b1;
                    else                first_flag  <=  1'b0;
                end

                WAIT    : begin
                    //First turn start off
                    mul_start   <=  1'b0;
                end

                CHECK   : begin
                    if(val_check) begin
                        result[index]   <=  1'b0;
                    end
                end

                DONE    : begin
                    done    <=  1'b1;
                    if(zero_check)          result <= 32'b0;
                end

            endcase
        end
    end
endmodule

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
