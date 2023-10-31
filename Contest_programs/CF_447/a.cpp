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
    int q1, a, q2;
    char st[110];
    INs(st);
    int c=0;
    for(q1=0; st[q1]; q1++) {
        if(st[q1]=='Q') {
            for(a=q1+1; st[a]; a++) {
                if(st[a]=='A')  {
                    for(q2=a+1; st[q2]; q2++)   {
                        if(st[q2]=='Q') c++;
                    }
                }
            }
        }
    }
    Oi(c);

    return 0;
}
