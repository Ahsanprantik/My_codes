#include <stdio.h>

int max_increase(const int A[], int A_length)
{
	int i=0, max=0, j;
	for(j=1; j<A_length; j++)	{
		if(A[j-1]>=A[j])	{
			if((j-i)>max)
				max=j-i;
			i=j;
		}
	}
	if((j-i)>max)
		max=j-i;
	return max;
}

int main()
{
	int n, ans, i;
	scanf("%d", &n);
	int array[n];
	for(i=0; i<n; i++)	scanf("%d", &array[i]);
	ans=max_increase(array, n);
	printf("%d\n", ans);
	return 0;
}
