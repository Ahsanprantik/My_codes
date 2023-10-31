#include <stdio.h>

int main()
{
    int x1;
    double x2, x, x3;
    x=1.23;
    x1=(int) x;
    x2=(double) x;
    x3=x1+x2;
    printf("x is %d\x1", x1);
    printf("x is %lf\x2", x2);
    printf("x3 is %lf\x3", x3);

    return 0;
}
