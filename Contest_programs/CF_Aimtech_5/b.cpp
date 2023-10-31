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
/*
int s(char *x)
{
	int ret = 0;

	while(*x)	{
		ret += *x - '0';
		x++;
	}

	return ret;
}

char *plustr(char *a, char *b)
{
	int i, j, k, car, t;

	i = strlen(a);
	j = strlen(b);
	k = max(i, j) + 1;

	char *sum[k+1];

	car = 0;
	sum[k] = '\0';
	while(i || j)	{
		t = car + a[i] + b[j] - 2*('0');
		sum[k] = t%10 + '0';
		car = t/10;
		i--;
		j--;
		k--;
	}
	if(car)	sum[k] = car + '0';
	else k++;

	return &sum[k];
}
*/
int main()
{
	int n, m;

	char a[2231], b[2231];

	INii(n, m);

	memset(a, '5', 1101);
	memset(b, '4', 1101);

	a[1100]++;

	b[1101] = a[1101] = '\0';

	puts(a);
	puts(b);

	return 0;
}
