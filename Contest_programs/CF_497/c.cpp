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
    int n, i;

    INi(n);
    int ara[n], cnt = 0, cntt = 0, t, cnttt = 0;

    LP(i, n)
        INi(ara[i]);

    sort(ara, ara+n);

/*  LP(i, n)    Oi(ara[i]); /*  check   */

    LP(i, n-1)    {
        if(ara[i] < ara[i+1])
            cnt++;
        else {
            if(!cntt)   {
                t = ara[i];
            }
            if(t == ara[i+1])   cntt++;
            else if(t == ara[i])
        }
    }

    Oi(cnt);

    return 0;
}
