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
	//freopen("in", "r", stdin);
	int q;
	LLI n, m, k, d;

	INi(q);

	while(q--)	{
		cin>>n>>m>>k;
		if(max(n, m)>k) Oi(-1);
		else {
			if(1&(k-max(n, m)) && !(1&abs(n-m))) d=k-2;
			else if(abs(m-n)&1) d = k-1;
			else d = k;
			cout<<d<<endl;
		}
	}

	return 0;
}
