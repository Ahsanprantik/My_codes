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
#define LP_(i, end) for(i=0; i<=end; i++)
#define LP1_(i, end) for(i=1; i<=end; i++)

typedef long long int LLI;

using namespace std;

int main()
{
    int n, m, a, b;
    INii(n, m);
    int pt[m+1], i;
    memset(pt, 0, sizeof(pt));
    LP(i, n)    {
        INii(a, b);
        for( ; a<b; a++)   {
            pt[a] = 1;
        }
    }
    LP(i, m)   {
        if(!pt[i])  break;
    }

    if(i==m) puts("YES");
    else puts("NO");

    return 0;
}
