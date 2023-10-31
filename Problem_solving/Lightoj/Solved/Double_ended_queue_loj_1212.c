/*	Lightoj problem #1212 (beginner)	*/
#include <stdio.h>
#include <string.h>

int main()
{
	int ara[201], lend, rend, t, i, n, m, p_val;
	char cmd[10];

	scanf("%d", &t);

	for(i=1; i<=t; i++)	{
		rend = (lend = 501) - 1;
		printf("Case %d:\n", i);
		scanf("%d %d", &n, &m);
		while(m--)	{
			scanf(" %s", cmd);
			if(!strcmp(cmd, "pushLeft"))	{
				scanf("%d", &p_val);
				if(lend+n-1==rend)
					printf("The queue is full\n");
				else {
					lend--;
					ara[lend] = p_val;
					printf("Pushed in left: %d\n", ara[lend]);
				}
			}
			else if(!strcmp(cmd, "pushRight"))	{
				scanf("%d", &p_val);
				if(lend+n-1==rend)	printf("The queue is full\n");
				else {
					rend++;
					ara[rend] = p_val;
					printf("Pushed in right: %d\n", ara[rend]);
				}
			}
			else if(!strcmp(cmd, "popLeft"))	{
				if(rend<lend)	printf("The queue is empty\n");
				else {
					printf("Popped from left: %d\n", ara[lend]);
					lend++;
				}
			}
			else if(!strcmp(cmd, "popRight"))	{
				if(rend<lend)	printf("The queue is empty\n");
				else {
					printf("Popped from right: %d\n", ara[rend]);
					rend--;
				}
			}
		}
	}

	return 0;
}