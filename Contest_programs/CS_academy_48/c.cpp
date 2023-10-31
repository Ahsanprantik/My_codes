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
#define nc2(n) (n*(n-1))/2

typedef long long int LLI;

using namespace std;

int main()
{
    LLI c, k, i;
    int n;
    INi(n); cin>>k;

    LP(i, n)    {
        if(nc2(i)>=k)
            break;
    }
    if(nc2[i]>k)    {
        i--;
    }

    return 0;
}
