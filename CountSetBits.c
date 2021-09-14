/*
Count Set Bit of a number.(Count only 1s)
*/

int countsetbit(int number){
    static int count = 0;
    
    if(number<=0)
        return 0;
        
    if (number & 1){
        count++;
    }
    
    countsetbit(number>>1);
    return count;

}

#include <stdio.h>
int main()
{
    int number = 176;
    printf("Total No.of Setbits : %d",countsetbit(number));
    return 0;
}
