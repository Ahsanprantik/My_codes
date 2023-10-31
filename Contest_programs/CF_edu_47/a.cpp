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
    int n, m, i, j, cnt = 0;

    INii(n, m);

    int c[n], a[m];

    LP(i, n)    INi(c[i]);

    LP(i, m)    INi(a[i]);

    LP(i, n)    {
        LP(j, m)
            if(a[j])    break;

        if(j==m)    j--;
        if(a[j]>=c[i])  {
            cnt++;
            a[j] = 0;
        }
    }

    Oi(cnt);

    return 0;
}
