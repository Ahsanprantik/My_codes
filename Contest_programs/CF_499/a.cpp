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
    int n, k, i, j;

    INii(n, k);
    char s[n+1];
    int cnt, c, mn = 1e9, t;

    INs(s);
    sort(s, s+n);
    LP(i, n)    {
        cnt = s[i] - 'a' + 1;
        //putchar(s[i]);
        c = 1;
        t = s[i];
        for(j = i+1; j<n && c<k; j++)    {
            if(s[j] >= t+2) {
                cnt += s[j] - 'a' + 1;
                c++;
                t = s[j];
            }
        }
        //Oi(c);
        if(cnt<mn && c==k)  mn = cnt;
        //Oi(mn);
    }

    if(mn==1e9) Oi(-1);
    else Oi(mn);

    return 0;
}
