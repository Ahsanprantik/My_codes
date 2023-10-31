#include <stdio.h>
#include <string.h>

void ara_sim(int n, int ara[])
{
	char ch;
	int m, b, i, j, temp;
	scanf("%d", &m);

	for(i=0; i<n; i++)	{
		scanf("%d", &ara[i]);
	}

	while(m--)	{
		scanf(" %c", &ch);

		if('R'==ch)	{
			for(i=0, j=n-1; i<(n/2); i++, j--)	{
				temp=ara[i];
				ara[i]=ara[j];
				ara[j]=temp;
			}
		}

		else if('S'==ch)	{
			scanf("%d", &b);
			for(i=0; i<n; i++) ara[i]+=b;
		}

		else if('M'==ch)	{
			scanf("%d", &b);
			for(i=0; i<n; i++) ara[i]*=b;
		}

		else if('D'==ch)	{
			scanf("%d", &b);
			for(i=0; i<n; i++) ara[i]/=b;
		}

		else if('P'==ch)	{
			scanf("%d %d", &i, &j);
			temp=ara[i];
			ara[i]=ara[j];
			ara[j]=temp;
		}
	}

	return;
}

int main()
{
	int t, i, j;
	scanf("%d", &t);
	t++;
	int ara[t][100], n[t];
	for(i=1; i<t; i++)	{
		scanf("%d", &n[i]);
		ara_sim(n[i], ara[i]);
	}

	for(i=1; i<t; i++)	{
		printf("Case %d:\n", i);
		for(j=0; j<(n[i]-1); j++)	{
			printf("%d ", ara[i][j]);
		}
		printf("%d\n", ara[i][j]);
	}

	return 0;
}