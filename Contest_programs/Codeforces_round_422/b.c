#include <stdio.h>

int main(void)
{
	int n, m, i, j, min, mn, count;
	scanf("%d %d", &m, &n);
	char s[n+1], t[m+1];

	scanf("%s %s", t, s);

	min = 0;
	mn = 10000;
	for(i=0; i<n; i++)	{
		count = 0;
		for(j=0; j<m && i+j<n; j++)
			if(s[i+j]!=t[j])	count++;

		if(j!=m)	count = 100000;	/*	inf	*/
		if(count<mn)	{
			mn = count;
			min = i;
		}
	}
	printf("%d\n", mn);
	for(i=0; i<m; i++, min++)	{
		if(s[min]!=t[i])	{
			printf("%d", i+1);
			if(--mn)	printf(" ");
		}
	}
	printf("\n");

	return 0;
}