#include <stdio.h>

int main()
{
    int i, n, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1, sum=0; i<=n; i++)  {
        if(i%2==1)  {
        sum=sum+i;
        }
    }
    printf("Summation is %d\n", sum);
    return 0;
}
