#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	int ara[t];
	for(int i=0; i<t; i++)	{
		scanf("%d", &ara[i]);
	}
	for(int i=0; i<t; i++)	{
		printf("%d\n", ara[i]);
	}
	

	return 0;
}
