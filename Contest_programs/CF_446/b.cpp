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
    int n, i, j, pin;
    INi(n);
    int l[n], k[n];
    memset(k, 0, sizeof(k));
    pin = 0;
    LP(i, n)    {
        INi(l[i]);
        for(j=i-1; j+1 && l[i]>=0; j--, l[i]--)  {
            if(k[j] && pin<j)    {
                l[i] -= (pin+1-j);
                j = pin-1;
            }
            k[j] = 1;
        }
        pin = j+1;
    }
    int cnt = 0;
    LP(i, n)    {
        if(k[i]) cnt++;
    }
    Oi(cnt);

    return 0;
}
