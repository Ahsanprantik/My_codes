#include <stdio.h>
 int decimal_point(double a)
 {
     int i, point;
     double x=(double)a-(int)a, ten=10;
     for(i=1; ; i++)    {
            x=x*ten;
            if((int)x%10==0) {
                point=x;
            }
     }
     return point;
 }
int main()
{
    double s=2.35, a;
    a=decimal_point(s);
    printf("%.000000%dlf", a, s);
}
