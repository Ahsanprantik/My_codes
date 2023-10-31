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
    int n, m, l, r, i;
    INii(n, m);
    int ara[m+1] = {0};

    LP(i, n)    {
        INii(l, r);
        for( ; l<=r; l++)   {
            ara[l] = 1;
        }
    }

    int cnt = 0;
    LP1_(i, m)  {
        if(!ara[i])  cnt++;
    }
    Oi(cnt);
    if(cnt) {
        LP1_(i, m)    {
            if(!ara[i])  {
                printf("%d", i);
                cnt--;
                if(cnt) printf(" ");
                else {
                    printf("\n");
                    break;
                }
            }
        }
    }

    return 0;
}
