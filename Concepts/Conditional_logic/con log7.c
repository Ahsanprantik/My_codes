#include <stdio.h>

int main()
{
    int num=22, multi, rem ;
    multi=num/2;
    rem=num-(multi*2);
    if(rem==0)    {
        printf("The number is even");
    }
    else    {
        printf("THe number is odd");
    }
    return 0;
}
