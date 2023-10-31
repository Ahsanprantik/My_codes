#include <stdio.h>

int main()
{
	int i, t, j, a;
	scanf("%d", &t);
	int m[t][200];
	for(i=0; i<t; i++)	{
		scanf("%s", m[i]);
	}
	for(i=0; i<t; i++)	{
		printf("Case %d:\n", i+1);
		for(j=0; m[i][j]!='\0'; j++)	{
			for(a=0; a<=j; a++)	{
				printf("%c", m[i][a]);
			}
			printf("\n");
		}
	}
	return 0;
}
			