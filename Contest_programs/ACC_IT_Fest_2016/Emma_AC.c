#include <stdio.h>

int main()
{
    long long a, n, sum;
    sum=0;
    scanf("%lld", &n);
    while(n--) {
        scanf("%lld", &a);
        if(a>0) sum+=a;
    }
    printf("%lld\n", sum);

    return 0;
}
