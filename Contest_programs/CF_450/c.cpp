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
    int n, i;
    INi(n);
    int a[n];

    LP(i, n)    {
        INi(a[i]);
    }
    LP(i, n-1)
        if(a[i]>a[i+1]) break;

    if(a[i]>a[i+1]) {
        if((i+2)==n)  Oi(a[i+1]);
        else if(a[i]<a[i+2])    Oi(a[i+1]);
        else if(i)  {
            if(a[i-1]<a[i+1])   Oi(a[i]);
            else Oi(a[i+1]);
        }
        else Oi(a[i]);
    }
    else Oi(a[0]);

    return 0;
}
