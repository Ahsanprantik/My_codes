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

int loopcnt(int z, int i, int m, int l)
{
	int cnt = 0;
	int j;
	int ara[10001]={0};

	while(!ara[l])	{
		ara[l] = ++cnt;
		l = ((z*l)+i)%m;
	}

	return cnt-ara[l]+1;
}

int main()
{
	int z, l, i, m, t = 1;

	while(1)	{
		scanf("%d %d %d %d", &z, &i, &m, &l);
		if(!z && !i && !m && !l)	break;
		
		OCSi(t, loopcnt(z, i, m, l));
		t++;
	}

    return 0;
}
