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
    int a[6], i, t, t1, j, f;

    t = 0;
    LP(i, 6)    {
        INi(a[i]);
        t += a[i];
    }

    sort(&a[0], &a[5]+1);

    f = 0;
    LP(i, 3)    {
        for(j=3; j<6; j++)  {
            t1 = a[i]+a[3]+a[4]+a[5]-a[j];
            if(t1==(t-t1))  {
                f = 1;
            }
        }
        if(f)   break;
    }

    if(!f)  {
        LP(i, 3)    {
            for(j=3; j<6; j++)  {
                t1 = a[0]+a[1]+a[2]+a[j]-a[i];
                if(t1==(t-t1))  {
                    f = 1;
                }
            }
            if(f)   break;
        }
    }
    if(f)   puts("Yes");
    else puts("No");

    return 0;
}
