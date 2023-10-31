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
    int a, b, c, i, prev, m;
    INii(a, b);
    INi(c);

    prev = -1;
    a = a%b;    /*  cancelling out integer portion  */
    for(i=1; ; i++) {
        if(a==prev) break;
        else prev = a;
        prev = a;
        for( ; a<b && a; a*=10) ;
        m = a/b;
        if(m==c)    break;
        a = a%b;
    }
    if(m!=c)    Oi(-1);
    else Oi(i);

    return 0;
}
