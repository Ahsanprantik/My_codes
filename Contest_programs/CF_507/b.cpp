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
	int n, k, t, mod, j;
	int ara[1000];

	INii(n, k);

	mod = n%(2*k+1);
	j = 0;

	if(!mod || mod>k)	{
		for(t=k+1; t<=n; t+=2*k+1)	{
			ara[j++] = t;
		}
		ara[j] = 0;
	}
	else {
		for(t=1; t<=n; t+=2*k+1)	{
			ara[j++] = t;
		}
		ara[j] = 0;
	}
	Oi(j);
	for(t=0; ara[t]; t++)	{
		printf("%d", ara[t]);
		if(ara[t+1]) putchar(' ');
		else putchar('\n');
	}

	return 0;
}
