#include <stdio.h>
#define s_hor 10
#define s_ver 4

char ara[s_ver][s_hor];
char found=0;

char dfs(int i, int j)
{
	if(ara[i][j]=='B')	{
		found=1;
		return 1;
	}
	else if(ara[i][j]=='.' || ara[i][j]=='M')	{
		dfs(i+1, j);
		dfs(i, j+1);
		dfs(i-1, j);
		dfs(i, j-1);
	}
	else if(i<0 || j<0 || i>s_ver || j>s_hor || ara[i][j]=='X')	{
		return 0;
	}
}
int main()
{
	int i, j, x, y;
	for(i=0; i<s_ver; i++)	{
		for(j=0; j<s_hor; j++)	{
			scanf("%c", &ara[i][j]);
			if(ara[i][j]=='M')	{
				x=i;
				y=j;
			}
		}
	}
	dfs(x, y);
	if(found==1)	{
		printf("\nFOUND!\n");
	}
	else {
		printf("\nNOT FOUND!\n");
	}
	return 0;
}