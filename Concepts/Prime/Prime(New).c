#include <stdio.h>//7 bit(2^7) usable???
 int main()
{
    long int i, n, x, u, h, count;
    double percent;
    while(1)    {
    count=0;
    printf("Upper lim: ");
    scanf("%ld", &u);
    long int prime[u];
    prime[0]=2;
    for(n=3; n<u; n++) {
        x=n;
        for(i=0; prime[i]<=x; i++)  {
            if(n%prime[i]==0)  {
                break;
            }
            x=n/prime[i];
        }
        if(prime[i]>x)    {
            count++;
            prime[count]=n;
        }
    }
    count++;
    printf("Primes:\n");
    for(h=0; h<count; h++)  {
            printf("  %ld\n", prime[h]);
    }
    percent=(count*100.0)/u;
    printf("Count\t: %d\nPercentage: %.002lf%%\n\n", count, percent);
    }
}
