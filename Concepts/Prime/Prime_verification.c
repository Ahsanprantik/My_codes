#include <stdio.h>
 int main()
 {
     double n, i, v=0.0, j, p;
     while(1)   {
    getch();
     printf("Enter the number for verification: ");
     scanf("%lf", &n);
        if(n==1)   {
        printf("'%.0lf' is not a prime.\n\n", n);
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
            printf("%.0lf is a prime.\n\n", n);
        }
        else {
            printf("'%.0lf' is not a prime. It is a product of '%.0lf' & '%.0lf'\n\n", n, v, i);
        }
        }
     }
 }
