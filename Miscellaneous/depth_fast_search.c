#include <stdio.h>
#define s_hor 10
#define s_ver 4

char ara[s_ver][s_hor];
char found=0;
int k=1;

void dfs(int i, int j)
{
	if(i<0 || j<0 || i>=s_ver || j>=s_hor)	{
        k++;
        printf("%d %d\n", i, j);
		return;
	}
	else if(ara[i][j]=='X')  {
        return;
	}
	else if(ara[i][j]=='B')	{
		printf("%d %d\n", i, j);
		found=1;
		return;
	}
	else if(ara[i][j]=='.')	{
		dfs(i+1, j);
		dfs(i, j+1);
		dfs(i-1, j);
		dfs(i, j-1);
		return;
	}
}
int main()
{
    FILE *inp;
    inp=fopen("dfs_input.txt", "r");
	int i, j, x, y;
	for(i=0; i<s_ver; i++)	{
        fscanf(inp, "%s", ara[i]);
        printf("%s\n", ara[i]);
		for(j=0; j<s_hor; j++)	{
			if(ara[i][j]=='M')	{
				x=i;
				y=j;
			}
		}
	}
	printf("Finished. x= %d, y=%d\n", x, y);
	dfs(x, y);
	printf("Finished.");
	if(found==1)	{
		printf("\nFOUND!\n");
	}
	else {
		printf("\nNOT FOUND!\n");
	}
	return 0;
}
