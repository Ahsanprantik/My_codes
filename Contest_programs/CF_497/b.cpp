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
#define mn(a, b) (a>b ? b : a)
#define mx(a, b) (a<b ? b : a)


typedef long long int LLI;

using namespace std;

int main()
{
    int n, w, h, t, i, ind;

    INi(n);

    ind = 1;
    t = 1e9;
    LP(i, n)    {
        INii(w, h);

        if(mn(w, h)>t) {
            ind = 0;
        }
        if(mx(w, h) <= t)   t = mx(w, h);
        else t = mn(w, h);
    }

    if(ind) puts("YES");
    else puts("NO");

    return 0;
}
