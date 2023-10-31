#include <stdio.h>
#include <string.h>

int ispal(char *n)
{
	int i, j;

	i=0, j=strlen(n)-1;
	while(i<j)	{
		if(n[i]!=n[j]) return 0;
		i++;
		j--;
	}
	
	return 1;
}

int main(void)
{
	int i, t;
	char num[10];
	scanf("%d", &t);

	for(i=1; i<=t; i++)	{
		scanf(" %s", num);
		printf("Case %d: ", i);
		if(ispal(num))	printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}