#include <stdio.h>

int main()
{
	int n, i;
	char c='a';
	scanf("%d", &n);
	for(i=0; i<n; i++)	{
		printf("%c", c);
		if(1&i)	{
			if(c=='a')	c='b';
			else c='a';
		}
	}
	return 0;
}