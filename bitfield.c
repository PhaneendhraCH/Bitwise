
#include <stdio.h>

struct {
       signed int member1 : 3;  // occupies 3 bits only from 32 bits
    int member2;               // occupies 32 bits 
}d2;

struct {
     signed  int member1 : 3;  // occupies 3 bits only from 32 bits
    int member2;               // occupies 32 bits 
}d;



int main() {
  
  d.member1 = 5; 
   d2.member1 = 2;
  printf("%d %d %d",sizeof(d),d.member1,d2.member1);  // 8 -3 2
    return 0;
}

/*

d.member1 occupies only 3 bits
5 in Binary = 101 
101 is of 3Bits. MSB/SignBit = 1, LSB = 1
Here MSB is 1, it indicates that Value is Negative. To find that negative value we need to convert into 2s complement

1's complement of 101 = 010
2's complemenet of 101 = 010 + 1 = 011
011 in Decimal = 3

So the resultant Negative value = 3

*/
