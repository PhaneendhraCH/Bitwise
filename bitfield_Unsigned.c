
#include <stdio.h>

struct {
       signed int member1 : 3;  // occupies 3 bits only from 32 bits
    int member2;               // occupies 32 bits 
}d2;

struct {
     unsigned int member1 : 3;  // occupies 3 bits only from 32 bits
    int member2;               // occupies 32 bits 
}d;

// 11 = 1 0 1 1
//unsigned doesnt save any sign bit 

int main() {
  
  d.member1 = 11; 
   d2.member1 = 2;
  printf("%d %d %d",sizeof(d),d.member1,d2.member1);
    return 0;
}