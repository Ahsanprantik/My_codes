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

double dcalc(double x1, double y1, double x2, double y2)
{
	double x = x1-x2, y = y1-y2;
	double ret = sqrt(x*x + y*y);

	return ret;
}

int main()
{
	int n, k, i, t;
	char s[100010];
	double dap, dao, dbp, dbo, dab;
	int px, py, ax, ay, bx, by;
	
	INi(t);
	
	LP(i, t)	{
		INii(px, py);
		INii(ax, ay);
		INii(bx, by);
		dap = dcalc(ax, ay, px, py);
		dao = dcalc(ax, ay, 0.0, 0.0);
		dbp = dcalc(bx, by, px, py);
		dbo = dcalc(bx, by, 0.0, 0.0);
		dab = dcalc(ax, ay, bx, by)/2.0;
		/*
		if(dap<=dbp && dao<=dbo)	{
			if(dap>=dao)	printf("%.10f\n", dap);
			else printf("%.10f\n", dao);
		}
		else if(dbp<=dap && dbo<=dao)	{
			if(dbp>=dbo)	printf("%.10f\n", dbp);
			else printf("%.10f\n", dbo);
		}
		else	printf("%.10f\n", dab);
		*/
		double x = max(dap, dao), y = max(dbp, dbo), z = max({dab, dao, dbp}), z2 = max({dab, dbo, dap});
		double w = min({x, y, z, z2});
		printf("%.10f\n", w);
	}

    return 0;
}