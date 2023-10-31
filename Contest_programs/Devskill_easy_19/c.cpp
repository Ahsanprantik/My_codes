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
#define eps 1e-12

typedef long long int LLI;

using namespace std;

void tcase(int n)
{
    int tmp;
    bool square=0, cube=0;

    tmp = sqrt((double)n);
    if(n==tmp*tmp)
        square = 1;

    tmp = cbrt((double)n);
    if(n==tmp*tmp*tmp)
        cube = 1;

    if(square && cube)  puts("Both");
    else if(square) puts("Perfect Square");
    else if(cube)   puts("Perfect Cube");
    else puts("None");

    return;
}

int main()
{
    int t, n;
    INi(t);

    while(t--)  {
        INi(n);
        tcase(n);
    }

    return 0;
}
