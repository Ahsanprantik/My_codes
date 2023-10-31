#include <stdio.h>

void tcase(int cs)
{
	int n, i, j, max = -1;
	
	scanf("%d", &n);
	int c[n];
	
	for(i=0; i<n; i++)	{
		scanf("%d", &c[i]);
		if(c[i] > max)
				max = c[i];
	}
	
	printf("Case %d: %d\n", cs, max);
}
			
int main(void)
{
	int i, t;
	
	scanf("%d", &t);
	
	for(i=1; i<=t; i++)	tcase(i);
	
	return 0;
}