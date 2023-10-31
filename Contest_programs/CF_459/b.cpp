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
    int n, m, i, t, j;
    INii(n, m);
    char nm[n][20], ip[n][20], cmd[m][20], ipcmd[m][20];
    int cmnt[m];
    LP(i, n)
        scanf(" %s %s", nm[i], ip[i]);

    LP(i, m)    {
        scanf(" %s %s", cmd[i], ipcmd[i]);
        t = strlen(ipcmd[i]) - 1;
        ipcmd[i][t] = '\0';
        LP(j, n)    {
            if(!strcmp(ip[j], ipcmd[i])) break;
        }
        cmnt[i] = j;
    }

    LP(i, m)
        printf("%s %s; #%s\n", cmd[i], ipcmd[i], nm[cmnt[i]]);

    return 0;
}
