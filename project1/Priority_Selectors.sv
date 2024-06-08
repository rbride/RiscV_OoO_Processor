/* 
The following file is a collection of various priority selectors, 
the purpose of a priority selector is to have n pairs of request and grant lines,
the selector chooses one of the asserted request lines and asserts its corressponding grant lines
in general the selector can assert K grant lines where k <= n, for this, k=1

the purpose is that in design you often have limited resources that need to be assigned optimally for best performance

The file contains the following three styles of priority selectors
a 4-bit using basic assigns
a 4 bit using an always
an 8 bit and 4 bit selectro using a hierachy of smaller selectors as verilog modules
a test bench for the 8 bit selector
and a sequential 4-bit rotating priority selector using a heirachy of 2 bit selectors
*/

module ps4_assign (
    input        [3:0] req,  //requested lines
    input              en,
    output logic [3:0] gnt  //lines to grant
);

    assign gnt[3] = req[3] & en; 
    assign gnt[2] = (!req[3]) & req[2] & en;
    assign gnt[1] = !(req[3] | req[2]) & req[1] & en;
    assign gnt[0] = !(req[3] | req[2] | req[1]) & req[0] & en;

endmodule

module ps4_if (
    input        [3:0] req,  //requested lines
    input              en,
    output logic [3:0] gnt  //lines to grant
);
    always_comb begin
        if(en) begin
            if      (req[3])    gnt = 4'b1000;
            else if (req[2])    gnt = 4'b0100;
            else if (req[1])    gnt = 4'b0010;
            else if (req[0])    gnt = 4'b0001;
            else                gnt = 4'b0000;           
        end
        else 
            gnt = 4'b0000;
    end
endmodule

/* The second half with the three modules you use to generate a ps4 and ps8 out of 2 2 bit and 4 etc*/
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

module ps4(
    input        [3:0] req,
    input              en,
    output logic [3:0] gnt,
    output logic       req_up
);

    logic [1:0] top_gnt;  logic req_lower; logic req_upper; 
    ps2 upper( .req(req[3:2]), .en(top_gnt[1]), .gnt(gnt[3:2]), .req_up(req_upper)); 
    ps2 lower( .req(req[1:0]), .en(top_gnt[0]), .gnt(gnt[1:0]), .req_up(req_lower));
    ps2 tops4( .req( {req_upper, req_lower}), .en(en), .gnt(top_gnt)); 
    //For timing reasons as the circuit grows I think it is best to set this to be | of the top selector
    //as that is the logical slowest selector that hits, so I would use this
    assign req_up = |top_gnt ;   //Reduction or mentioned moment!!! 
    
endmodule


module ps8(
    input        [7:0] req,
    input              en,
    output logic [7:0] gnt,
    output logic       req_up
);
    //The logic folllows the same chain of thought, easy money no need to verify
    logic [1:0] top_gnt;  logic req_lower; logic req_upper; 
    ps4 upper( .req(req[7:4]), .en(top_gnt[1]), .gnt(gnt[7:4]), req_up(req_upper));
    ps4 lower( .req(req[3:0]), .en(top_gnt[0]), .gnt(gnt[3:0]), req_up(req_lower)); 
    //Only need one more ps2 not a ps4
    ps2 tops8( .req( {req_upper, req_lower}), .en(en), .gnt(top_gnt);
    assign req_up = |top_gnt; 

endmodule


//for example assuming en = 1, req= 0101 since the highest bit is the priority then grant 0100 
//only grant one at a time

/* Below are the included modules in the project that you use to build the design */
module and2 (
    input  [1:0] in,
    output logic out
);
    assign out = in[0] & in[1];
endmodule

module and4 (
    input [3:0]  in,
    output logic out
);

    logic [1:0] tmp;
    and2 left (.in(in[1:0]), .out(tmp[0]));
    and2 right(.in(in[3:2]), .out(tmp[1]));

    and2 top(.in(tmp), .out(out));
endmodule