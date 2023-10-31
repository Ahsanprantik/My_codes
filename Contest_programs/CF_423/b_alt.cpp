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
    int n, a, mx, flag, i, mx_i;
    LLI k;

    INi(n);
    cin>>k;

    mx_i = 1;
    mx = flag = 0;
    LP1_(i, n)  {
        INi(a);
        if(i-mx_i-1>=k)  flag = 1;
        if(mx<a && !flag)    {
            mx = a;
            mx_i = i;
        }
    }
    Oi(mx);

    return 0;
}
