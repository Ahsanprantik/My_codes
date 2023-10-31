#include <stdio.h>

int ara[1000];

long long ways(int t)
{
    int i, j, k, a, b;
    long long count=0;
    for(i=0; i<t; i++) {
        for(j=i+1; j<t; j++) {
            a=ara[j]-ara[i];
            for(k=j+1; k<t; k++) {
                b=ara[k]-ara[j];
                if(a<=b && b<=2*a) count++;
            }
        }
    }
    return count;
}

void kid_sort(int t)
{
    int i, j, temp;
    while(j>1) {
        j=0;
        for(i=1; i<t; i++) {
            if(ara[i-1]>ara[i]) {
                temp=ara[i-1];
                ara[i-1]=ara[i];
                ara[i]=temp;
                j++;
            }
        }
    }
}

int main()
{
    int i, t;

    long long ans;

    scanf("%d", &t);

    for(i=0; i<t; i++) scanf("%d", &ara[i]);

    kid_sort(t);

    ans=ways(t);

    printf("\n%lld\n", ans);

    return 0;
}
