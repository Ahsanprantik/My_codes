#include <stdio.h>
#include <limits.h>
#define int64 long long int

int bpm(int64 b, int64 p, int64 m)
{
	int64 j, ret;
	int i;
	if(!b)	return 0;
	if(!p && m>1)	return 1;

	ret = 1;
	for(i=0, j=1; j<=p; i++, j<<=1, b*=b)	{
		b = b%m;
		if(j&p)	ret = (ret*b)%m;
	}

	return ret;
}

int main()
{
	int b, p, m;

	while(scanf("%d %d %d", &b, &p, &m)!=EOF)	{
			b = bpm(b, p, m);
			printf("%d\n", b);
	}

	return 0;
}
		
