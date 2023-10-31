#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sumof odd numbers upto %d is %d", n, (n*(n+1)/2));
    return 0;

}
