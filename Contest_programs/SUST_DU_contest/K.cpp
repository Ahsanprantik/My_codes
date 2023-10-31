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

int fact(int n)
{
	if(!n)	return 1;

	return n*fact(n-1);
}

int tcase(void)
{
	int n, ret, ara[26], tmp, flg, i;
	INi(n);
	char s[n+1], *p;
	INs(s);

	p = s;
	memset(ara, 0, sizeof(ara));
	while(*p)	{
		ara[alphin(*p)]++;
		p++;
	}

	flg = 0;
	ret = fact(n/2);
	LP(i, 26)	{
		if(flg && isod(ara[i]))
			return 0;	/*	no possible palindrome	*/
		flg |= isod(ara[i]);
		ret /= fact(ara[i]/2);
	}

	return ret;
}

int main()
{
	int t, ans;
	INi(t);

	while(t--)
		Oi(tcase());

	return 0;
}
