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
#define x 0
#define y 1
#define dist(ax, ay, bx, by) ((ax-bx)*(ax-bx)+(ay-by)*(ay-by))

typedef long long int LLI;

using namespace std;

int main()
{
    int n, m, min_d, min_i, d, i;
    INii(n, m);
    int catno[n], catin[n][2], dogin[2];

    LP(i, n)    {
        catno[i] = 0;
        INii(catin[i][x], catin[i][y]);
    }

    while(m--)  {
        INii(dogin[x], dogin[y]);

        min_d = min_i = INT_MAX;
        LP(i, n)    {
            d = dist(dogin[x], dogin[y], catin[i][x], catin[i][y]);

            if(d<min_d) {
                min_d = d;
                min_i = i;
            }
        }
        catno[min_i]++;
    }

    int cnt=0;
    LP(i, n)
        if(catno[i]==1) cnt++;

    Oi(cnt);

    return 0;

}
