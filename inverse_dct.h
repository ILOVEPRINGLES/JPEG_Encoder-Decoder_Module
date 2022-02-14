#include "systemc.h"
#include <math.h>

#ifndef IDCT_H
#define IDCT_H

struct idct : sc_module{

       sc_out<char> out64_idct[8][8];// the idct transformed 8x8
       sc_in<double> fcosine[8][8]; // cosine table input
       sc_in<double> input64[8][8]; // the output from the encoder
       sc_in<bool> clk;
       
       char output_data[8][8]; // the data output from the decoder,F(u,v)

      void calculate_idct(void);

   SC_CTOR(idct){
         
        SC_METHOD(calculate_idct);
        dont_initialize();
        sensitive << clk.pos();
    
   }

};

#endif
