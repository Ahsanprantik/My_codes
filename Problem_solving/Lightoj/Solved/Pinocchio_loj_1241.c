#include <stdio.h>

int main(void)
{
	int t, n, i, j, prev, current, dif, lies, k;

	scanf("%d", &t);

	for(i=1; i<=t; i++)	{
		scanf("%d", &n);

		/*	initial state after waking	*/
		prev = 2;	/*	nose length	*/
		lies = 0;
		for(j=0; j<n; j++)	{	/*	All reports occur after a 
							complete nose expansion	*/
			scanf("%d", &current);

			dif = current - prev;
			for(k=5; k && dif; k--)	{
				lies += dif / k;
				dif %= k;	/*	confusion with '%='	*/
			}
			prev = current;
		}
		printf("Case %d: %d\n", i, lies);
	}

	return 0;
}
