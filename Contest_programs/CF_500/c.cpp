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
    int n, i, a;
    LLI ans1, ans2;
    int mx[2], mn[2];

    INi(n);
    n += n;

    mn[0] = 2e9;
    mn[1] = 1e9;
    mx[0] = -1;
    mx[1] = -1;
    LP(i, n)    {
        INi(a);
        Oi(a);
        if(a>mx[0]) {
            mx[1] = mx[0];
            mx[0] = a;
        }
        else if(a>mx[1])    mx[1] = a;
        if(a<mn[0])    {
            mn[1] = mn[0];
            mn[0] = a;
        }
        else if(a<mn[1]) mn[1] = a;
    }
    Oii(mx[0], mx[1]);
    Oii(mn[0], mn[1]);

    ans1 = (LLI)(mx[0]-mn[0])*(mx[1]-mn[1]);
    ans2 = (LLI)(mx[0]-mn[1])*(mx[1]-mn[0]);

    if(ans1>ans2)   Oi(ans1);
    else Oi(ans2);

    return 0;
}
