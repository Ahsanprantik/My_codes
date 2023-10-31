#include <bits/stdc++.h>

#define INi(x) scanf("%d", &x)
#define INii(x, y) scanf("%d %d", &x, &y)
#define Oi(x) printf("%d\n", x)
#define Oii(x, y) printf("%d %d\n", x, y)
#define OCSi(c, x) printf("Case %d: %d\n", c, x)
#define Os(s) printf("%s\n", s)
#define OCSs(c, s) printf("Case %d: %s\n", c, s)
#define INs(s) scanf(" %s", s)
#define LLI long long int
#define LP(i, st, end) for(i=st; i<end; i++)

using namespace std;

int tcase(void)
{
    int n, i, j, cnt=0, k, tmp;
    INi(n);
    int bs[n][n], fs[10];

    LP(i, 0, n)
        LP(j, 0, n)
            INi(bs[i][j]);    //Oii(i, j);

    if(n==10)   {
        LP(i, 0, n) {
            memset(fs, 0, sizeof(fs));
            LP(j, 0, n) {
                tmp = bs[i][j] - 1;
                if(fs[tmp])   break;
                else fs[tmp] = 1;
            }
            if(j==n)    cnt++;
        }
        LP(j, 0, n) {
            memset(fs, 0, sizeof(fs));
            LP(i, 0, n) {
                tmp = bs[i][j] - 1;
                if(fs[tmp])   break;
                else fs[tmp] = 1;
            }
            if(i==n)    cnt++;
        }
    }

    LP(i, 0, n-1)   {
        LP(j, 0, n-4) { //!confusion
            memset(fs, 0, sizeof(fs));
            LP(k, j, j+5)   {
                tmp = bs[i][k] - 1;
                if(fs[tmp])   break;
                else fs[tmp] = 1;
            }
            if(k!=j+5)  continue;
            i++;
            LP(k, j, j+5)   {
                tmp = bs[i][k] - 1;
                if(fs[tmp])   break;
                else fs[tmp] = 1;
            }
            i--;
            if(k==j+5)    cnt++;
        }
    }

    LP(i, 0, n-1)   {
        LP(j, 0, n-4) { //!confusion
            memset(fs, 0, sizeof(fs));
            LP(k, j, j+5)   {
                tmp = bs[k][i] - 1;
                if(fs[tmp])   break;
                else fs[tmp] = 1;
            }
            if(k!=j+5)  continue;
            i++;
            LP(k, j, j+5)   {
                tmp = bs[k][i] - 1;
                if(fs[tmp])   break;
                else fs[tmp] = 1;
            }
            i--;
            if(k==j+5)    cnt++;
        }
    }

    //Os("Done");
    return cnt;
}

int main()
{
    int t, n, i, ans;

    INi(t);

    for(i=1; i<=t; i++) {
        ans = tcase();
        OCSi(i, ans);
    }

    return 0;
}
