#include <stdio.h>

int main()
{
	int u, d, t, i, dir;
	char crn[51];

	scanf("%d", &t);

	while(t--)	{
		scanf("%s", crn);
		dir = -1;
		for(i=0, u=0, d=0; crn[i]; i++)	{
			if(crn[i]=='U' && dir!=1)	{
				u++;
				dir = 1;
			}
			if(crn[i]=='D' && dir)	{
				d++;
				dir = 0;
			}
		}
		if(u<d)	printf("%d\n", u);
		else printf("%d\n", d);
	}

	return 0;
}