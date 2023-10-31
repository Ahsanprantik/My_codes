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
    int x, y;

    INii(x, y);

    if(x==y)    puts("=");
    else if(x<y)    {
        if(x == 1)  puts("<");
        else if(x==2 && y==3)   puts("<");
        else if(x==2 && y==4)   puts("=");
        else puts(">");
    }
    else {
        if(y == 1)  puts(">");
        else if(y==2 && x==3)   puts(">");
        else if(y==2 && x==4)   puts("=");
        else puts("<");
    }

    return 0;
}

