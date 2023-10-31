#include <stdio.h>

int main()
{
    int GCD, a, b, x, gcd;
    printf("Enter two numbers for GCD: ");
    scanf("%d%d", &a, &b);
    if(a<b) {
        x=a;
    }
    else {
        x=b;
    }
    for( ; x>=1; x=x-1)   {
            if(a%x==0 && b%x==0)  {
            gcd=x;
        break;
            }
    }
    printf("GCD is %d", gcd);
    return 0;
}
