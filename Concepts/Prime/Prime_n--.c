#include <stdio.h>
 int main()
 {
     double v=0.0, n, i, j, p=1.0, u, l;
     printf("Lower limit: ");
     scanf("%lf", &l);
     printf("Upper limit: ");
     scanf("%lf", &u);
     if(l<=2 && u>2)    {
     printf("2\n");
     }
     for(n=l; n<=u; n=n+1.0)  {
        for(i=n-1.0; i>=v; i=i-1.0) {
            v=0.0;
            for(j=n; j>=i; j=j-i)   {
                v=v+1.0;
            }
        if(j==0.0)  {break;}
        }
        if(i<v) {
                p=p+1.0;
            printf("%.0lf\n", n);
        }
     }
     printf("\nTotal: %.0lf", p);
     getch();
 }
