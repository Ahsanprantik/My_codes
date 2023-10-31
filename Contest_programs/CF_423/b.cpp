
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
    int n, a, mx, flag, c, i;
    LLI k;

    INi(n);
    cin>>k;

    mx = flag = c = 0;
    LP(i, n)  {
        INi(a);
        if(mx<a && !flag)    {
            mx = a;
            if(c>=k)  flag = 1;
            else c = 0;
        }
        if(i)   c++;
    }
    Oi(mx);

    return 0;
}
