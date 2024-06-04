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