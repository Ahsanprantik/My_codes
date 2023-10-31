#include <stdio.h>

int main()
{
    int n;
    printf("See is it positive or negative: ");
    scanf("%d", &n);
    if(n>=0)    {

        printf("The number is positive");
    }
    else    {
        printf("The number is negative");
    }
    return 0;
}
