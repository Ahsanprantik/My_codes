#include <stdio.h>
 int main()
{
    long int i, n, x, u;
    while(1)    {
    int h, count=0;
    double percent;
    printf("Upper lim\t: ");
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
    percent=(count*100.0)/u;
    printf("Count\t\t: %d\nPercentage\t: %.002lf%%\n\n", count, percent);
    }
}
