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

int len(char *s)
{
    int flag, i;

    if(*s == 'a') flag = 0;
    else flag = 1;

    for(i=0; s[i+1]; i++)   {
        if(s[i]!=s[i+1])  {
            flag++;
        }
        if(flag==3) return i+1;
    }
    return i+1;
}

int main()
{
    char st[5010], *start;
    INs(st);
    start = st;

    int l, mx = 0;
    while(*start)   {
        l = len(start);
        if(l>mx)    mx = l;
        start++;
    }

    Oi(mx);
    main();

    return 0;
}
