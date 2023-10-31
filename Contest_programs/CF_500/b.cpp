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
    int n, x, i, t, mn_flag;

    INii(n, x);
    int a[n], aand[n];

    LP(i, n)    {
        INi(a[i]);
    }

    sort(a, a+i);

    LP(i, n)    {
        aand[i] = a[i] & x;
    }

    mn_flag = 3;
    LP(i, n)    {
        t = a[i];
        a[i] = -1;
        aand[i] = -1;
        if(binary_search(a, a+n, t))   {
            mn_flag = 0;
            break;
        }
        else if(binary_search(aand, aand+n, t))   {
            if(mn_flag>1)   mn_flag = 1;
        }
        else if(binary_search(aand, aand+n, t&x))   {
            if(mn_flag>2)   mn_flag = 2;
        }
        a[i] = t;
        aand[i] = t&x;
    }

    if(mn_flag>2)   Oi(-1);
    else Oi(mn_flag);

    return 0;
}
