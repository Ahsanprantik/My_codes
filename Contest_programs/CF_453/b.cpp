#include <bits/stdc++.h>

#define INi(x) scanf("%d", &x)
#define INii(x, y) scanf("%d %d", &x, &y)
#define Oi(x) printf("%d\n", x)
#define Oii(x, y) printf("%d %d\n", x, y)
#define OCSi(c, x) printf("Case %d: %d\n", c, x)
#define Os(s) printf("%s\n", s)
#define OCSs(c, s) printf("Case %d: %s\n", c, s)
#define INs(x) scanf(" %s", x)
#define LP(i, end) for(i=0; i<end; i++)
#define LP1_(i, end) for(i=1; i<=end; i++)

typedef long long int LLI;

using namespace std;

int clr(int *ap, int *ac, int n, int v, int c)
{
    int i, ret = 0;
    for(i=2; i<=n; i++) {
        if(ap[i]==v) {
            if(ac[i]!=c)    ret++;
            ret += clr(ap, ac, n, i, ac[i]);
        }
    }
    return ret;
}

int main()
{
    int n;
    INi(n);
    int p[n+1], c[n+1];
    int i;

    for(i=2; i<=n; i++) {
        INi(p[i]);
    }
    LP1_(i, n)  {
        INi(c[i]);
    }
    Oi(clr(p, c, n, 1, c[1])+1);

    return 0;
}
