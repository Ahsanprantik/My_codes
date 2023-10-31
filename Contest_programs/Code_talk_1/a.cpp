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

bool game(int n)
{
	int p[n], cgreat = 0, i;

	LP(i, n)	{
		INi(p[i]);
		if(p[i]>1)	cgreat++;
	}

	if(cgreat>1)	return 0;
	else if(cgreat==1)	return 1;
	else if(1&n)	return 1;
	else return 0;
}


int main()
{
	int n, i;

	while(1)	{
		INi(n);
		if(!n)	break;

		if(game(n))	puts("Yes");
		else puts("No");
	}
		

	return 0;
}
