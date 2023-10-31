#include <stdio.h>
int main()
{
	int t, i, a, j, temp, apples;
	scanf("%d", &t);
	int x[200001];
	for(i=0; i<200001; i++)	{
		x[i]=-1;
	}
	x[100000]=0;
	for( ; t>0; t--)	{
		scanf("%d", &temp);
		temp+=100000;
		scanf("%d", &x[temp]);
	}
	for(i=100000, j=i; x[i]!=-1 || x[j]!=-1; i++, j--)	{
		apples+=x[i]+x[j];
	}
	if(x[i]!=-1)	{
		apples+=x[i];
	}
	if(x[j]!=-1)	{
		apples+=x[j];
	}
	printf("%d", apples);
	return 0;
}