 #include <stdio.h>
 int main()
 {
     double a=-1.0, b=1.0, i=1.0, n;
     printf("Enter the number of integers of fibonacchi series(<45):\t");
     scanf("%lf", &n);
     if(n>100.0)   {
        printf("Out of Range");
     }
     else {
     while(i<n-1)   {
        i=i+1.0;
        a=a+b;
        b=b+a;
        printf("%0.0lf\n%0.0lf\n", a, b);
        }
     }
     getch();
 }
