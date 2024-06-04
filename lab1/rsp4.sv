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


module rps4 (
    input              CLK
    input              rst,
    input        [3:0] req,
    input              en,
    output logic [3:0] gnt,
    output logic [1:0] cnt
);

endmodule

module rps2 (
    input        [1:0] req,
    input              en,
    input              sel,    
    output logic [1:0] gnt,
    output logic       req_up
);    

    always_comb begin
        if(en) begin
            if      (req[ sel])    gnt = 2'b10; 
            else if (req[!sel])    gnt = 2'b01;      
        end
        else                       gnt = 2'b00;
        
        //keep as 1 and 0 because which it is, is not relevant
        if(req[1] | req[0])        req_up = 1'b1;
        else                       req_up = 1'b0; 
    end


endmodule
//previous
module ps2(
    input        [1:0] req,
    input              en,
    output logic [1:0] gnt,
    output logic       req_up
);
    always_comb begin
        if(en) begin
            if      (req[1])    gnt = 2'b10; 
            else if (req[0])    gnt = 2'b01;
        end 
        else				 	gnt = 2'b00;

        if(req[1] | req[0]) 		req_up = 1'b1;
        else						req_up = 1'b0;
    end
    // The req_up logic is seperate if you put it in the above block it will fail because they shouldn't 
    // be linked and the synthesizer will link them dependently  alternatively if you just seperate it 
    // like above it will also work, just seperate the two completely seperate logic blocks
  	// always_comb begin
    //   if(req[1] | req[0]) 		req_up = 1'b1;
    //   else						req_up = 1'b0;
    // end
  
endmodule