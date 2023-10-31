 #include <stdio.h>//Fibonacchi(n th number)
 int main()
 {
     double a=-1, b=1;
     int i=1, n;
     printf("Enter the value of n: (<43):\t");
     scanf("%d", &n);
     while(i<n)   {
        i=i+1.0;
        a=a+b;
        b=b+a;
     }
    printf("The %d th number is: %0.0lf", n, a);
     getch();
 }
