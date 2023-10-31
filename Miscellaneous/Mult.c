#include <stdio.h>

int main()
{
	int i, t, j, a;
	scanf("%d", &t);
	int m[t];
	for(i=0; i<t; i++)	{
		scanf("%d", &m[i]);
	}
	for(i=0; i<t; i++)	{
			printf("Case %d:\n", i+1);
		for(a=0, j=1; j<11; j++)	{
			a+=m[i];
			printf("%d * %d = %d\n", m[i], j, a);
		}
	}
	return 0;
}
			