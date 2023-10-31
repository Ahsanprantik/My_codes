#include <stdio.h>
 int main()
{
    long int prime, i, n, l, u, count=0;
    printf("Enter the number of the lower limit of prime series:\t");
    scanf("%ld", &l);
    printf("Enter the number of the upper limit of prime series:\t");
    scanf("%ld", &u);
    for(n=l; n<u; n=n++) {
        for(i=2; i<n; i=i++)  {
            if(n%i==0)  {
                break;
            }
        }
        if(n==i)    {
            prime=n;
            printf("%ld\n", prime);
            count++;
        }
    }
    printf("Total prime numbers in the range: %ld", count);
}
