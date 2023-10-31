#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#define p(x) pow(2, x)      //p() for power of 2

void showbin(int dec, int i)
{
    for( ; i!=-1; i--)  {
        if((dec | 1<<i)==dec)
            printf("1");
        else printf("0");
    }
}

void main()
{
    int a;
    char b;
    a=257;
    b=32;
    showbin(a|b, 31);
    printf("\n%d", a);
}
