#include <bits/stdc++.h>

#define INi(x) scanf("%d", &x)
#define INii(x, y) scanf("%d %d", &x, &y)
#define Oi(x) printf("%d\n", x)
#define Oii(x, y) printf("%d %d\n", x, y)
#define OCSi(c, x) printf("Case %d: %d\n", c, x)
#define Os(s) printf("%s\n", s)
#define OCSs(c, s) printf("Case %d: %s\n", c, s)
#define INs(s) scanf(" %s", s)
#define LP(i, end) for(i=0; i<end; i++)
#define LP1_(i, end) for(i=1; i<=end; i++)
#define inf 2e9

typedef long long int LLI;

using namespace std;

int main()
{
    int n, i, min_i, mn, a, div;

    INi(n);

    mn = min_i = inf;
    LP(i, n)    {
        INi(a);
        div = a/n;
        if((a%n) > i)    div++;
        if(div < mn)  {
            mn = div;
            min_i = i;
        }
    }

    Oi(min_i+1);

    return 0;
}
