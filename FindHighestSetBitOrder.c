/*

    C Program to print highest order set bit of a number
    
        3 2 1 0
    
    4 = 0 1 0 0    
    8 = 1 0 0 0 
   16 = 1 1 1 0
   
   Here Highest Set Bit Order for 8,16 = 3
                              for 4 = 2
*/

#include <stdio.h>

int highest(int num){
    
    int high = -1;
    int bit_pos;
    
    while(num>0){
        
        high++;
        
        if (num & 1)
            bit_pos = high;
        
        num = num>>1;
    }
    
    return high;
}

int main()
{
    int num=64;
    printf("Highest Order Set Bit of a number : %d\n",highest(num));

    return 0;
}
