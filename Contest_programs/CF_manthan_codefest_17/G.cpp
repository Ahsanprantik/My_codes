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
#define pb push_back

using namespace std;

int main()
{
    int n, u, v, q;
    int i, j, t, neg;

    INi(n);

    vector <vector <int>> m(n, 0);

    LP(i, n-1)  {
        INii(t, j);
        m[t].pb(j);
        m[j].pb(t);
    }
    neg = m.size();

    INi(q);

    while(q--)  {
        INii(t, j);
        LP(i, m[t].size())
            if(m[t][i]==j)
                break;
        if(i==m[t].size())  m[t].pb(j);

        LP(i, m[j].size())
            if(m[j][i]==t)
                break;
        if(i==m[j].size())  m[j].pb(t);

    }

    return 0;
}
