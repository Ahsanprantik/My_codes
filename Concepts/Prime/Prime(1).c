#include <stdio.h>
#include<math.h>
const size=40;
char ara[40];
void print_ara()
 {
     int i;
     for(i=2; i<size; i++)  {
        printf("%d - %d", i, ara[i]);
     }
}
void sieve()
{
    int i, j, n, root;
    print_ara();
    root=sqrt(size);
    for(n=2; n<root; n++)   {
        if(ara[n]==1)   {
            for(i=2*n; i<size; i=i+n)    {
                ara[i]=0;
            }
        }
    }
    print_ara();
}
int is_prime(int n)
{
    if(n<2) {
        return 0;
    }
    return ara[n];
}
void main()
{
    int x;
    scanf("%d", &x);
    sieve();
    if(is_prime(x)==1)  {
        printf("%d is a prime.", x);
    }
}
