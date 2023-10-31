#include <stdio.h>

int main()
{
    int n;
    printf("See is it positive or negative: ");
    scanf("%d", &n);
    if(n>0)    {

        printf("The number is positive");
    }
    elif(n<0)    {
        printf("The number is negative");
    }
    elif(n==0)    {
        printf("The number is zero");
    }
    return 0;
}
