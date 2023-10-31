#include <stdio.h>
#include <string.h>
void main()
{
    int i, n, j, a, b, k;
    char st[8];
    scanf("%s", st);
    n=strlen(st);
    printf("%d\n", n);
    int ara[n];
    for(i=0; i<n; i++)  {
        if(st[i]>='1' && st[i]<='9')    {
            ara[i]=st[i]-48;
            printf("%d", ara[i]);
        }
    }
}
