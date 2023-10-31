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
#define eps (1e-4)

typedef long long int LLI;

using namespace std;

int main()
{
    int n, k, r, j, i;
    double x, y, cgmax, cnt;

    INii(n, k);
    double t;
    vector <double> retake;

    cnt = 0;
    LP(i, n)    {
        scanf("%lf %lf", &x, &y);
        cnt += x;
        if((y-x)>eps) {
            retake.push_back(y-x);
        }
    }
    sort(retake.begin(), retake.end());
//    LP(i, retake.size())    printf("%.1f\n", retake[j]);

    j = n;
    LP(i, k)    {
        j--;
        cnt += retake[j];
    }

    cgmax = (double)cnt/n;

    printf("%.1f\n", cgmax);

    return 0;
}
