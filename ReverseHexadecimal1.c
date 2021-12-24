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
    
    int flag =1;
    while(a!=1){
        
        if (flag){
        b = a&b;
        flag = 0;
        }
        
        b<<=4;a>>=4;
        
        b|= a&c;
        //printf("%x %x %x\n",a,b,d);
        
    }
    printf("%x",b);
    
}

