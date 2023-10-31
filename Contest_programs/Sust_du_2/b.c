#include <stdio.h>
#include <stdio.h>

int main(void)
{
    int k, n, m, mars, pk, i;
    scanf("%d %d %d", &k, &n, &m);
    char s[11];

    mars = 0;
    for(i=0; i<k; i++)  {
        scanf(" %s", s);
        if(!strcmp(s, "Mars"))  mars++;
    }
    pk = k;
    if(pk-mars<m)    pk += m-(pk-mars);
    if(pk-m<n)  pk += n-(pk-m);
    pk -= k;

    printf("%d\n", pk);

    return 0;
}
