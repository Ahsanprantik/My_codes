#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, n, count, max=0;
	scanf("%d", &n);
	char string[n][n], ex[n];
	for(i=0; i<n; i++)
	{
		ex[i]=0;
		for(j=0; j<n; j++)
		{
			getchar|(string[i][j]);
		}
		getchar();
	}
	for(i=0; i<n; i++)
	{
		count=0;
		if(ex[i]==0)
		{
			for(j=0; j<n; j++)
			{
				if(i!=j && strcmp(string[i], string[j])==0)
				{
					count++;
					ex[j]=1;
				}
			}
			if(count>max)	max=count;
		}
	}
	printf("%d", max);
	return 0;
}