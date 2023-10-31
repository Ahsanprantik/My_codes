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
typedef unsigned long long int ULLI;

using namespace std;

int main()
{
    int n, q, x, y;
    ULLI t;

    INii(n, q);

    while(q--)  {
        INii(x, y);

        t = (ULLI)((x-1)*n)/2;
        if((x+y)&1) {
            t += (ULLI)(n*n)/2;
            if(n&1) {
                t++;
            }
            t+=y/2;
            if(!(x&1)) t++;
        }
        else {
            if(n&1) {
                if(!(x&1))
                    t++;
            }
            t += y/2;
            if(x&1) t++;
        }
        Oi(t);
    }

    return 0;
}
