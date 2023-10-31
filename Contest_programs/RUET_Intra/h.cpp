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
	int t, i, k;
	LLI x, z, j, m;
	char y[20];

	INi(t);
	LP(i, t)	{
		INs(y);
		cin>>x;
		for(j=2; j<=10; j++)	{
			z = 1;
			m = 1;
			for(k=strlen(y)-1; k>=0 && (y[k]-'0')<j; k--, m*=j)	{
				z += (LLI) m * (y[k]-'0');
			}
			if(z==x)	break;
		}
		if(z==x)	Oi(j);
		else Oi(-1);
	}

    return 0;
}
