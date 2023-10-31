#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n%2==0)  {
        sum=(n/8)*(n+10);
    }
    else    {
        sum=((n-1)*(n+9))/8;
    }
    printf("Sumof odd numbers upto %d is %d", n, sum);
    return 0;

}
