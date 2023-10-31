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
    int n, i, a, mx1, mx2, can1, can2;
    LLI t;
    INi(n);
    int b[n];
    t = 0;
    LP(i, n)    {
        INi(a);
        t += a;
    }
    mx1 = 0;
    LP(i, n)    {
        INi(b[i]);
        if(b[i]>=b[mx1])   mx1 = i;
    }
    can1 = b[mx1];
    b[mx1] = -1;

    mx2 = 0;
    LP(i, n)    {
        if(b[i]>=b[mx2])   mx2 = i;
    }
    can2 = b[mx2];
    if(can1+can2 >= t)  puts("YES");
    else puts("NO");

    return 0;
}
