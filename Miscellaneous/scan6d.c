#include <stdio.h>

int main()
{
    double x, y, sum, sub, multi, dev, avg;
    printf("Please enter a number: ");
    scanf("%lf", &x);
    printf("Please enter another number: ");
    scanf("%lf", &y);
    sum=x+y;
    sub=x-y;
    multi=x*y;
    dev=x/y;
    avg=(x+y)/2;
    printf("%lf+%lf=%lf\n", x, y , sum);
    printf("%lf-%lf=%lf\n", x, y , sub);
    printf("%lf*%lf=%lf\n", x, y , multi);
    printf("%lf/%lf=%lf\n", x, y , dev);
    printf("Average=%lf\n", avg);

    return 0;
}
