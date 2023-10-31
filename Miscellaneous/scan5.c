#include <stdio.h>

int main()
{
    int x, y, sum, sub, multi, dev, avg;
    printf("Please enter a number: ");
    scanf("%d", &x);
    printf("Please enter another number: ");
    scanf("%d", &y);
    sum=x+y;
    sub=x-y;
    multi=x*y;
    dev=x/y;
    avg=(x+y)/2;
    printf("%d+%d=%d\n", x, y , sum);
    printf("%d-%d=%d\n", x, y , sub);
    printf("%d*%d=%d\n", x, y , multi);
    printf("%d/%d=%d\n", x, y , dev);
    printf("Average of %d and %d=%d\n", x, y, avg);

    return 0;
}
