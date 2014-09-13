#include<stdio.h>

int main()
{
    int max_int = ((int)(~0U>>1));
    //printf("max_int:%x\n", max_int);
    //printf("incorrect max_int:%x\n", ((int)~0U>>1));
    //printf("(int)~0U %x\n", (int)~0U);
    printf("arithmetic right shift (int)0xffffffff >> 1 = %x\n", (int)0xffffffff >> 1);
    printf("logical right shift(unsigned int)0xffffffff >> 1 = %x\n", (unsigned int)0xffffffff >> 1);
    int days = max_int/(100.0 * 24 * 3600);
    printf("%d days ago, process time(clock) will overflow\n", days);
    return 0;
}
