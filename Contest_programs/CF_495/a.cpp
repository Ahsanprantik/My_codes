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
    int n, d, i, c;

    INii(n, d);
    int origin[n];

    LP(i, n)    INi(origin[i]);

    c = 2;
    LP(i, n-1)  {
        if(origin[i+1]-origin[i] > d+d)
            c += 2;
        if(origin[i+1]-origin[i] == d+d)
            c++;
    }

    Oi(c);

    return 0;
}
