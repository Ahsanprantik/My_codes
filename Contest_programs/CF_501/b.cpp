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

void test()
{
    int n, i, j, k;
    INi(n);
    char s[n+1], t[n+1];
    vector <int> c;

    INs(s);
    INs(t);

    LP(i, n)    {
        for(j=i; j<n; j++)    {
            if(s[j]==t[i])  {
                while(j>i)  {
                    j--;
                    c.push_back(j);
                    s[j+1] = s[j];
                }
                s[i] = t[i];

                break;
            }
        }
        if(j==n)    {
            Oi(-1);
            return;
        }
    }
    n = c.size();
    Oi(n);
    LP(i, n)    {
        printf("%d", c[i]+1);
        if(i==n-1)  puts("");
        else putchar(' ');
    }
}

int main()
{
    test();

    return 0;
}
