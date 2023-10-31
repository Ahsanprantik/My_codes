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

int Lsub(char *s)
{
    int ret = 0, cnt = 0;
    char tmp;
    bool a[26];

    memset(a, 0, sizeof(a));
    while(*s)   {
        if(islower(*s)) {
            if(a[*s-'a'])   {
                memset(a, 0, sizeof(a));
                if(cnt>ret) ret = cnt;
                cnt = 0;
                tmp = *s;
                s--;
                while(*s!=tmp)  s--;
            }
            else {
                a[*s-'a'] = 1;
                cnt++;
            }
        }
        else {
            memset(a, 0, sizeof(a));
            if(cnt>ret) ret = cnt;
            cnt = 0;
        }
        s++;
    }
    if(cnt>ret) ret = cnt;

    return ret;
}

int main()
{
    int n;
    INi(n);
    char s[n+1];

    INs(s);

    Oi(Lsub(s));

    return 0;
}
