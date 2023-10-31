#include <stdio.h>

int main()
{
    int num, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    rem=num%2;
    if(rem==0)    {
        printf("The number is even\n");
    }
    else    {
        printf("The number is odd\n");
    }
    return 0;
}
