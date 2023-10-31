#include <stdio.h>
#include <string.h>
#define lim 20

int sum_of_facts(const long long int fact[], long long int num)
{
	int j;
	unsigned int ans;
	long long int sum = 0;

	for(j=lim-1, ans=0; j>=0; j--)	{
		if((sum+fact[j]) <= num)	{
			sum += fact[j];
			ans |= 1<<j;
		}
		if(sum == num)	return ans;
	}
	return 0;
}

int main()
{
	int t, i, ans, j, k, ind;
	scanf("%d", &t);
	long long int n[++t], fact[lim];

	for(i=1; i<t; i++)	{
		scanf("%lld", &n[i]);
	}

	fact[0]=1;
	for(j=1; j<lim; j++)	fact[j] = fact[j-1]*j;

	for(i=1; i<t; i++)	{
		printf("Case %d: ", i);
		ans=sum_of_facts(fact, n[i]);	/*	fact holds the factorials of its indices and answer
											sequence is written in the ans variable in binary. */
		if(!ans)	printf("impossible");

		for(j=0, k=1, ind = 0; k<=ans; j++, k<<=1)	{
			if(k & ans)	{
				if(ind)	printf("+");
				else ind = 1;		/*	for the first output */
				printf("%d!", j);
			}
		}
		printf("\n");
	}

	return 0;
}