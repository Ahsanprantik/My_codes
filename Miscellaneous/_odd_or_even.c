#include<stdio.h>
int main()
{
	int ara[10][10], i, j, odd=0, even=0;
	for(i=0; i<10; i++)	{
		for(j=0; j<10; j++)	{
			ara[i][j]=(i+1)*(j+1);
			if(ara[i][j]%2==1)	{
				odd++;
			}
			if(ara[i][j]%2==0)	{
				even++;
			}
		}
	}
	printf("Odds: %d\nEvens: %d", odd, even);
}