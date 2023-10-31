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

int gcd(int a, int b)
{
	int t;

	while(b)	{
		t = a%b;
		a = b;
		b = t;
	}

	return a;
}

int main()
{
	int n, t, u, i;

	INi(n);
	t = u = 0;

	LP1_(i, n)	{
		if(i&1) t+=i;
		else u+=i;
	}
	if(gcd(t, u)>1)	{
		puts("Yes");
		printf("%d ", n/2+(1&n));
		LP1_(t, n)	{
			if(t&1)	{
				printf("%d", t);
				if(t+2<=n)
					putchar(' ');
			}
		}
		putchar('\n');
		printf("%d ", n/2);
		LP1_(t, n)	{
			if(!(t&1))	{
				printf("%d", t);
				if(t+2<=n)
					putchar(' ');
			}
		}
		putchar('\n');
	}
	else puts("No");

    return 0;
}
