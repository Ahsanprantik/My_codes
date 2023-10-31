#include <stdio.h>
 int main()
{
    long int i, n, l, x, u, count=0;
    printf("Enter the number of the lower limit of prime series:\t");
    scanf("%ld", &l);
    printf("Enter the number of the upper limit of prime series:\t");
    scanf("%ld", &u);
    long int prime[u];
    for(n=1; n<u; n++) {
        for(i=1, prime[0]=2, x=n/2; x>=prime[i]; i++)  {
            x=n/prime[i];
            if(n%prime[i]==0)  {
                break;
            }
        }
        if(x<prime[i])    {
            count++;
            prime[count]=n;
            printf("%ld\n", prime[count]);
        }
    }
    printf("Total prime numbers in the range: %ld", count);
}
