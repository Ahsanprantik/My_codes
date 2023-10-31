#include <stdio.h>
#include <string.h>
int main(void)
{
    int n, a, b, mx;
    int h[24];

    scanf("%d", &n);
    memset(h, 0, sizeof(h));
    while(n--)  {
        scanf("%d %d", &a, &b);
        for( ; a<b; a++)    h[a]++;
    }

    mx = 0;
    n = 24;
    while(n--)
        if(h[n]>mx) mx = h[n];

    printf("%d\n", mx);

    return 0;
}
