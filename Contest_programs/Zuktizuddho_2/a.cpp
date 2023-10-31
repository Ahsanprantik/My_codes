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
#define LP_(i, end) for(i=0; i<=end; i++)

typedef long long int LLI;

using namespace std;

LLI m;

LLI powermod(LLI b, LLI p)
{
	LLI temp;

	if(!p)	return 1%m;
	temp = powermod(b, p/2);
	if(1&p)	return (temp*temp*b)%m;
	else return (temp*temp)%m;
}

int main()
{
	LLI b, p;

	while(~scanf(" %lld %lld %lld", &b, &p, &m))	{
		cout<<powermod(b, p)<<endl;
	}

	return 0;
}
