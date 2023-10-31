#include <stdio.h>

int main()
{
    int x, y, a1, b1, c1, a2, b2, c2;
    scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2 &b2, &c2);
    x=(b1*c2-c1*b2)/(a1*b2-b1*a2);
    printf("x=%f", x);
    getch();
}
