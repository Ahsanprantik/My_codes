#include <stdio.h>

int main()
{
    long long i, sum, piles, ans;
    scanf("%lld", &piles);
    long long stone[piles];
    sum=0;
    ans=0;
    for(i=0; i<piles; i++) {
        scanf("%lld", &stone[i]);
        sum+=stone[i];
    }
    sum/=piles;
    for(i=0; i<piles; i++) {
        if(stone[i]<sum) ans+=(sum-stone[i]);
    }
    printf("%lld\n", ans);

    return 0;
}
