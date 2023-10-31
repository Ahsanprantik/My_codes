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
#define pi acos(0.0)
#define eps 1e-6

using namespace std;

double tcase(void)
{
    double bx, by, ax, w, t;
    double X, angl, tn, pos, mod, res;

    scanf("%lf %lf %lf %lf %lf", &bx, &by, &ax, &w, &t);

    if(fabs(bx)<eps)   tn = pi/2;
    else tn = atan(by/bx);

    angl = (w*t+tn);


    if(angl>pi)   {
        mod = acos(cos(angl));
    }
    else mod = angl;

    X = sqrt(bx*bx + by*by)*cos(mod);
    pos = fabs(bx-X);

    if(X<bx)    {
        res = ax-pos;
    }
    else if(X>bx)   {
        res = ax+pos;
    }
    else if(fabs(X-bx)<eps)  {
        res = ax;
    }
    else puts("Prantik, Mushfik is stupid");

    return res;
}

int main()
{
    int t, i;
    double ans;

    INi(t);

    LP(i, 0, t)   {
        ans = tcase();
        printf("Case %d: %.9f\n", i+1, ans);
    }
}
