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
    int t, n, i, j;

    INi(t);
    while(t--)  {
        INi(n);
        char s[n];
        INs(s);
        i = n/2;
        j = n/2-1;
        for( ; i<n; i++, j--)   {
            if((s[i]-1) == (s[j]-1) ||
               (s[i]+1) == (s[j]+1) ||
               (s[i]+1) == (s[j]-1) ||
               (s[i]-1) == (s[j]+1))
               continue;
            else break;
        }
        if(i==n)    puts("YES");
        else puts("NO");
    }

    return 0;
}
