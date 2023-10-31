#include <stdio.h>
int main()
{
    int i, t;
    scanf("%d", &t);
    double km[t], mile;
    for(i=0; i<t; i++)  {
        scanf("%lf", &mile);
        km[i]=((double)mile*0.621371);
    }
    for(i=0; i<t; i++)  {
        printf("%0.10lf\n", km[i]);
    }
    return 0;
}
