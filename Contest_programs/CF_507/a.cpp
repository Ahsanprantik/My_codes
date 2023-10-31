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
	int n, a, b, i, cnt = 0, j;

	INi(n);
	int c[n];
	INii(a, b);

	LP(i, n) INi(c[i]);

	for(i=0, j=n-1; j>i; i++, j--)	{
		if(c[i]==2)
			if(c[j]==0) cnt+=a;
			else if(c[j]==1) cnt+=b;
			else cnt+=2*min(a, b);
		else if(c[j]==2)
			if(c[i]==0) cnt+=a;
			else if(c[i]==1) cnt+=b;
			else cnt+=2*min(a, b);
		else if(c[i]!=c[j])	break;
	}
	if(j>i) Oi(-1);
	else if(i==j)	{
		if(c[i]==2) cnt+=min(a, b);
		Oi(cnt);
	}
	else Oi(cnt);

    return 0;
}
