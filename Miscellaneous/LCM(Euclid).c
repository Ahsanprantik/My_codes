#include <stdio.h>

int main()
{
    int a, b, t, x, gcd, lcm, n;
    printf("Enter two numbers for GCD: ");
    scanf("%d%d", &a, &b);
    n=a*b;
    if(a==0 || b==0)    {
        gcd=0;
    }
    else {
        while(b!=0) {
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    lcm=(n/gcd);
    printf("LCM is %d", lcm);
    return 0;
}
