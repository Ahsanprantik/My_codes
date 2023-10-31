#include<stdio.h>
int main()
{
    int f,k,t,q;
    scanf("%d", &t);
    int n, ct=0,j;
    int z[100], x[100], y[100];
    int i;
    for (i=0; i<=t; i++)
    {
        scanf("%d", &n);
        while (t--)     // t--??? is it n--?
        {
                    ct=0;
        for (j=0; j<n; j++)
        {
            scanf("%d", &z[j]);
        }
        for (k=1; k<n; k++)
            scanf("%d %d", &x[k], &y[k]);
        for (f=0; f<n; f++)

        {
            for (q=0; q<n; q++)

            {
              if (z[f]==0 && z[q+1]==0)
            {
                         ct+=1;

            }
            }
        }
        }

    }
    printf("%d", ct);

}
