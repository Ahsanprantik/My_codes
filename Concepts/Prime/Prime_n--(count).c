#include <stdio.h>
 int main()
 {
     while(1)   {
    double v=0.0, n, i, j, p=1.0, u, percent;
    printf("Enter limit: ");
    scanf("%lf", &u);
     for(n=3.0; n<u; n=n+1.0)  {
        for(i=n-1.0; i>=v; i=i-1.0) {
            v=0.0;
            for(j=n; j>=i; j=j-i)   {
                v=v+1.0;
            }
        if(j==0.0)  {break;}
        }
        if(i<v) {
                p=p+1.0;
        }
     }
     percent=(p*100.0)/u;
        printf("Count\t\t: %.0lf\nPercentage\t: %.002lf%%\n\n", p, percent);
     }
 }
