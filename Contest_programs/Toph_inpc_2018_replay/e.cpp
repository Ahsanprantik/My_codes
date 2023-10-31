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
    int n, i, j, lim, cnt, c;

    INi(n);
    LLI a[n], mx = 0;

    LP(i, n)    {
        cin>>a[i];
        if(a[i]>mx) mx = a[i];
    }
    c = 0;
    cnt = 0;
    lim = log10(mx) + 2;
    LP(i, lim)  {
        LP(j, n)    {
            cnt += a[j]%10;
            a[j] /= 10;
        }
        cnt /= 10;
        if(cnt) c++;
    }

    Oi(c);

    return 0;
}
