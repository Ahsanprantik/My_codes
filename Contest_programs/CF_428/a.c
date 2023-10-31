#include <stdio.h>

int main(void)
{
	int n, k, a, sum, d, i;
	scanf("%d %d", &n, &k);

	d = -1;
	sum = 0;
	for(i=1; i<=n; i++)	{
		scanf("%d", &a);
		if(d==-1)	{
		if(a<=8)	{
			k -= a;
			a = 8-a;
			if(a<=sum)	{
				k -= a;
				sum -= a;
			}
			else {
				k -= sum;
				sum = 0;
			}
		}
		else {
			k -= 8;
			a -= 8;
			sum += a;
		}
		if(k<=0)	d = i;
	}
	}

	printf("%d\n", d);

	return 0;
}