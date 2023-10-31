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
#define eps 1e-8

typedef long long int LLI;

using namespace std;

int main()
{
    int a, b, c, d, ma;
    LLI pu, pb; /*  polynomial of upper and lower part of P */
    double p, pl;

    INii(a, b); INii(c, d);

    ma = b-a;
    c = d-c;
    pu = 1;
    pb = 1;
    p = 0;
    pl = (double)a/b;
    while(pl>=eps)    {
        pl = (double)(pu*a)/(pb*b);
        p += pl;
        pu *= (ma*c);
        pb *= (b*d);
        printf("%.7f\n", p);
    }
    printf("%.7f\n", p);

    return 0;
}
