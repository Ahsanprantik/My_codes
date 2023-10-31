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

typedef long long int LLI;

using namespace std;

int main()
{
    int n, m, i, a, b, cnt, sz;
    INii(n, m);
    int comp[n];

    sz = 0;
    LP(i, n)    {
        INii(a, b);
        sz += a;
        comp[i] = a-b;
    }
    sort(comp, comp+n);
    cnt = 0;
    while(n-- && sz>m)    {
        sz -= comp[n];
        cnt++;
    }
    if(sz>m)   Oi(-1);
    else Oi(cnt);

    return 0;
}
