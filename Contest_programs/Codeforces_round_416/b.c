#include <stdio.h>
#include <string.h>

int momsort(int ara[], int l, int r, int x, int n)
{
    int i, j, s, tmp;
    int a2[n];


    for(i=0; i<n; i++)  a2[i] = ara[i];

    l--, r--;
    for(i=l; i<r; i++)  {
        j = i;
        tmp = a2[j+1];
        while(j>=l && tmp<a2[j])    {
            a2[j+1] = a2[j];
            j--;
        }
        a2[j+1] = tmp;
    }

/*    printf("\n");
    for(i=0; i<n; i++)  printf("%d\n", a2[i]);
*/
    if(a2[x-1]==ara[x-1])   return 1;

    else return 0;
}
int main()
{
    int n, m, i, r, l, x, v;
    scanf("%d %d", &n, &m);
    int ara[n];

    for(i=0; i<n; i++)
        scanf("%d", &ara[i]);

    while(m--)  {
        scanf("%d %d %d", &l, &r, &x);
        v = momsort(ara, l, r, x, n);
        if(v)   printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
