#include <bits/stdc++.h>

#define INi(x) scanf("%d", &x)
#define INii(x, y) scanf("%d %d", &x, &y)
#define Oi(x) printf("%d\n", x)
#define Oii(x, y) printf("%d %d\n", x, y)
#define OCSi(c, x) printf("Case %d: %d\n", c, x)
#define Os(s) printf("%s\n", s)
#define OCSs(c, s) printf("Case %d: %s\n", c, s)
#define INs(x) scanf(" %s", x)
#define LP(i, end) for(i=0; i<end; i++)
#define LP1_(i, end) for(i=1; i<=end; i++)

typedef long long int LLI;

using namespace std;

int main()
{
    int n, x, y;
    INi(n);

    int posx=0, negx=0;
    while(n--)  {
        INii(x, y);
        if(x>0) posx++;
        else if(x<0)    negx++;
    }
    if(posx<=1 || negx<=1) puts("YES");
    else puts("NO");

    return 0;
}
