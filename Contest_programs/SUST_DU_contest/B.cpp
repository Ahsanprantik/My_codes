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
#define alphin(ch)	(ch-'a')
#define ALPHIND(ch)	(ch-'A')
#define isod(x) (x&1)

typedef long long int LLI;

using namespace std;

void bckwrd(int a[], int u, int m)
{
	while(u--)	{
		a[u] = a[u+1]-1;
		if(a[u]<0)	a[u] += m;
	}
}

void tcase(void)
{
	int n, m, i, p;
	INii(n, m);
	int a[n];

	p = 0;
	LP(i, n)	{
		INi(a[i]);
		if(!p)	{
			if(a[i]!=-1)	{
				p = 1;
				bckwrd(a, i, m);
			}
		}

		else if(a[i]==-1)	a[i] = (a[i-1]+1)%m;
	}

	LP(i, n-1)	printf("%d ", a[i]);
	Oi(a[i]);
}

int main()
{
	int t;
	INi(t);

	while(t--)	tcase();
}
