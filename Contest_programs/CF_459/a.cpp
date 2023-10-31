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
    int n, i, j, tmp;
    INi(n);
    int ifib[n+1];
    i = 1, j = 0;
    memset(ifib, 0, sizeof(ifib));
    while(i<=n) {
        ifib[i] = 1;
        tmp = i;
        i += j;
        j = tmp;
    }

    LP1_(i, n)   {
        if(ifib[i]) putchar('O');
        else putchar('o');
    }

    return 0;
}
