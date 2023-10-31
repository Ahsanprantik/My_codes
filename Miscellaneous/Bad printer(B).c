#include <stdio.h>

int main()
{
	int n, max=0;
	char c[15];
	scanf("%d %s", &n, c);
	char s[15];
	int j, ind, i, g;
	for(j=0; j<n; j++)	{
		ind=0;
		scanf("%s %d", s, &g);
		for(i=0; s[i]!='\0'; i++)	{
			if(s[i]!=c[i] && s[i]!='?')	break;
		}
		if(s[i]=='\0')	ind=-1;
		if(ind==-1 && g>max)	{
			max=g;
		}
	}
	printf("%d\n", max);
	return 0;
}