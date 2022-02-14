#include "idct.h"

//inverse discrete cosine transform
void idct :: calculate_idct(void){
	unsigned char u,v,x,y;
        double temp, cu, cv;
        // do inverse dct
         for(x = 0; x<8; x++){
              for(y=0; y<8;y++){
                   temp = 0.0;
                        for(u = 0; u < 8; u++){
                            for(v = 0; v<8; v++){
                               if((u==0) && (v==0)){
                                   cu = 1/sqrt(2);
                                   cv = 1/sqrt(2);
                               }
                               else{
                                   cu = 1;
                                   cv = 1;
                               }
                              temp += 0.25 * cu * cv * input64[u][v] * fcosine[x][u].read() * fcosine[y][v].read();
                       }
                      }
                    out64_idct[x][y].write(temp);
                 }
                }
} 


