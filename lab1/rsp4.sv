/* 
expansion of the previous, this one implementes a 4-bit rotating priority selector using a 
hierachy of modules. The point of the this is to implement it in such a way that were all devices are 
connected to some common resource, instead of just simple prioritizing one over the other
doing so avoids livelock, where in lower priority devices are never slected because a higher 
priority signal is always sending request. One common way of doing so is to change priority every
clock tick and thus implement some basic sequential logic in addition to the previous exclusive 
combinational logic. These notes are pretty worthless but I write them because It makes it easier for me
to focus and remember. counter implemented to do this is 3 bits, starts at 0 repeats endlessly
the instructions provided indicate that if the highest is not high qe can grant any other line

Since this is a simple encoder and we decided we are going to grant to any other line
*/
module rps2 (
    input        [1:0] req,
    input              en,
    input              sel,    
    output logic [1:0] gnt,
    output logic       req_up
);    

    logic [1:0] tmp;
    assign tmp = { (req[1] & sel) , (req[0] & !sel) };

    always_comb begin
        if(en) begin
            if      (|tmp)      gnt = tmp;
            //Still have a request but not the one with the select
            else if (|req) begin
                if      (req[1] & !sel)    gnt = 2'b10; 
                else if (req[0] & sel )    gnt = 2'b01;  
            end  
        end
        else                    gnt = 2'b00;
        
        //keep as 1 and 0 because which it is, is not relevant
        if(req[1] | req[0])        req_up = 1'b1;
        else                       req_up = 1'b0; 
    end
endmodule

module rps4 (
    input              CLK,
    input              rst,
    input        [3:0] req,
    input              en,
    output logic [3:0] gnt,
    output logic [1:0] cnt
);

    logic [1:0] counter;    logic [1:0] rot_gnt;    logic [1:0] cat_req;
    rps2 upper_bits( .req(req[3:2]), .en(rot_gnt[1]), .sel(counter[0]), .gnt(gnt[3:2]), .req_up(cat_req[1]) );
    rps2 lower_bits( .req(req[1:0]), .en(rot_gnt[0]), .sel(counter[0]), .gnt(gnt[1:0]), .req_up(cat_req[0]) );    
    rps2 above     ( .req(cat_req),  .en(en),         .sel(counter[1]), .gnt(rot_gnt) );

    assign cnt[1:0] = counter;
    //Always block that exist for the Counter logic
    always_ff @(posedge CLK) begin
        //The testbench given and documentation shows a reset on high which is nonstan but whatever
        if(rst) begin
            counter <= 2'b00;
        end
        else begin
            // Reduction & will fire if both vals are 1 so its the same as == 2'b11
            if( &counter )  counter <= 2'b00;
            else            counter <= counter + 1'b1;
        end 
    end

endmodule