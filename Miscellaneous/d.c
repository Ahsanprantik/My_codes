#include <stdio.h>
 int main()
 {
     int n =1, x;
     scanf("%d", &x);
     for(n=1; n <= 10; n=n+1) {
         printf("%d X %d= %d\n", x, n, x*n);
     }
     return 0;
 }
