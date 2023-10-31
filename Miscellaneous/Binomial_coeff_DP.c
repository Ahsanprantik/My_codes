#include <stdio.h>
#define size_n 7
#define size_r 8

int ara[size_n][size_r];

int ncr(int n, int r)
{
	if(n==0 || r==0 || n==r)	{
		ara[n][r]=1;
		return 1;
	}
	else {
		if(ara[n][r]==0)	{
			ara[n][r]=ncr(n-1, r-1) + ncr(n-1, r);
		}
		return ara[n][r];
	}
}
int main()
{
	int i, j;
	for(i=0; i<size_n; i++)	{
		for(j=0; j<size_r; j++)	{
			ara[i][j]=0;
		}
	}
	while(1)	{
		printf(">>>> ");
		scanf("%d %d", &i, &j);
		if(i==-1 || j==-1)	{
			printf("Exiting....");
			break;
		}
		else if(i>=size_n || j>=size_r || i<-1 || j<-1)	{
			printf("Invalid number.\n\n");
		}
		else {
			printf("%d\n\n", ncr(i, j));
		}
	}
	return 0;
}
