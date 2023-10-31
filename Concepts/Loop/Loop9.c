#include <stdio.h>

int main()
{
    int m=0, n, i;
    scanf("%d", &n);
    for(i=1; i<=10; i=i+1)  {
        m=m+n;
        printf("\n%d X %d = %d\n", n, i, m);
    }
    return 0;
}
