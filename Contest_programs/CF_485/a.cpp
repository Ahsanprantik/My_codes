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

    char gaunlet[6][2][11] = {
      "purple", "Power",
      "green", "Time",
      "blue", "Space",
      "orange", "Soul",
      "red", "Reality",
      "yellow", "Mind"
    };
    char col[11];
    int ans[6], m = 6, i, j;

    memset(ans, 0, sizeof(ans));
    LP(i, n)  {
        INs(col);
        LP(j, 6)    {
            if(!strcmp(gaunlet[j][0], col)) {
                ans[j] = 1;
                m--;
            }
        }
    }
    Oi(m);
    LP(i, 6)
        if(!ans[i]) puts(gaunlet[i][1]);

    return 0;
}

