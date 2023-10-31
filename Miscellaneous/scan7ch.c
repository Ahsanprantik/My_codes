#include <stdio.h>

int main()
{
    double x, y, sum, sub, multi, dev, avg;
    char s='+', b='-', m='*', d='/';
    printf("Please enter a number: ");
    scanf("%lf", &x);
    printf("Please enter another number: ");
    scanf("%lf", &y);
    sum=x+y;
    sub=x-y;
    multi=x*y;
    dev=x/y;
    avg=(x+y)/2;
    printf("%.0lf%c%.0lf=%.0lf\n", x, s, y , sum);
    printf("%.0lf%c%.0lf=%.0lf\n", x, b, y , sub);
    printf("%.0lf%c%.0lf=%.0lf\n", x, m, y , multi);
    printf("%.0lf%c%.0lf=%.4lf\n", x, d, y , dev);
    printf("Average=%.4lf\n", avg);
    getch();

    return 0;
}
