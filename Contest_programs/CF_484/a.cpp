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
    int n;
    INi(n);
    char seat[n+1], car;
    INs(seat);
    int i, st = n/2 + n%2;
    car = '2';
    LP(i, n)    {
        if(car==seat[i] && car=='1')    st = -1;
        if(seat[i]=='1')    st--;
        car = seat[i];
    }

    if(!st) puts("Yes");
    else puts("No");

    return 0;
}
