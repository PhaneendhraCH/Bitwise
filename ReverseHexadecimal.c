/*
    Reverse hexadecimal Number
    
    Eg : 
    Input : 
        0x12345678
    Output : 
        0x87654321

*/

#include <stdio.h>
int main()
{
    unsigned int a = 0x12345678;
    unsigned int b = 0xf;
    unsigned int c = 0xf;
    
    for(int i=1;i<8;i++){
        
        if (i == 1){
        b = a&b;
        }
        
        b<<=4;a>>=4;
        
        b|= a&c;
        //printf("%x %x %x\n",a,b,d);
        
    }
    printf("%x",b);
    
}
