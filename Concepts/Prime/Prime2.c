#include <stdio.h>//Bug!!!!!!
 int main()
{
    long int i, n, x, u, count=0;
    printf("Enter the number of the upper limit of prime series:\t");
    scanf("%ld", &u);
    long int prime[u];
    prime[0]=2
    for(n=2; n<u; n++) {
            x=n;
        for(i=0, prime[0]=2; prime[i]<=x; ++i)  {
            if(n%prime[i]==0)  {
                break;
            }
            x=n/prime[i];
        }
        if(prime[i]>x)    {
            count++;
            prime[count]=n;
            printf("%ld\n", prime[count]);
        }
    }
    printf("Total prime numbers in the range: %ld", count);
}
