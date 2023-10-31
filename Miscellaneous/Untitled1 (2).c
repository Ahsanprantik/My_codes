#include <stdio.h>
#include <math.h>

int main()
{
    long long int a, k;
    k=pow(2, 64);
    for(a=k-1; a<k; a+=100)    {
        if(a<0) {
                break;
        }
        printf("%lld, %lld\n", a, sqrt(a));
    }
    return 0;
}
