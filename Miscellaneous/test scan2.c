#include <stdio.h>

int main()
{
    int b=0, sum=0;
    char a[13];
    while(b<3)    {
    sum=sum+scanf("%s", &a);
    b++;
    }
    printf("Sum is %d\n", sum);
    return 0;
}
