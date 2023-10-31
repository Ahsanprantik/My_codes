#include <bits/stdc++.h>

#define INi(x) scanf("%d", &x)
#define INii(x, y) scanf("%d %d", &x, &y)
#define Oi(x) printf("%d\n", x)
#define Oii(x, y) printf("%d %d\n", x, y)
#define OCSi(c, x) printf("Case %d: %d\n", c, x)
#define Os(s) printf("%s\n", s)
#define OCSs(c, s) printf("Case %d: %s\n", c, s)
#define INs(s) scanf(" %s", s)
#define LLI long long int
#define LP(i, end) for(i=0; i<end; i++)
#define LP1_(i, end) for(i=1; i<=end; i++)

using namespace std;

int main()
{
    int n, isin, i, j;
    INi(n);
    char nm[n][110];

    LP(i, n)  {
        INs(nm[i]);
        isin = 0;
        for(j=0; j<i; j++)  {
            if(!strcmp(nm[j], nm[i]))   {
                isin = 1;
                break;
            }
        }
        if(isin)    puts("YES");
        else puts("NO");
    }

    return 0;
}
