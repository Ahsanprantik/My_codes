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
    int n, j;
    unsigned LLI i, k;
    INi(n);
    cin>>k;

    k--;
    for(i=1<<44; !(i&k) || !i; i>>=1) ;

    for(j=0; !i; i>>=1, j++) ;

    if(j>n) Oi(-1);
    else {
        for(i=1<<(n-1); !i; i>>=1)  {
            if(i&1) putchar('1');
            else putchar('0');
        }
    }

    return 0;
}
