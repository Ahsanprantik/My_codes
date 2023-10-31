#include <stdio.h>
char prime_ver(double n)
 {
     double i, v=0.0, j;
        if(n==1.0)   {
                return 0;
        }
        else {
        for(i=n-1.0; i>=v; i=i-1.0) {
            v=0.0;
            for(j=n; j>=i; j=j-i)   {
                v=v+1.0;
            }
        if(j==0.0)  {break;}
        }
        if(i<v) {
            return 1;
        }
        else {
            return 0;
        }
        }
 }
void main()
{
    double i=9000000000.0;
    for( ; i<100000000000.0; i=i+1.0)  {
        if(1==prime_ver(i)) {
            printf("%.0lf\n", i);
        }
    }
}
