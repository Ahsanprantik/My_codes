#include <stdio.h>
#include <string.h>

int ara[1001][2];	//2d array. One dimension holds the number of divisors and the 2nd one holds the number itself.

void div_count()
{
	int i, j;
	for(i=1; i<1001; i++)	{
		ara[i][0]=0;
	}
	for(i=1; i<1001; i++) {
		ara[i][1]=i;	//Asigning the number to its initial position.
		for(j=i; j<1001; j+=i) {
			ara[j][0]++;	//Counting divisors
		}
	}
	return;
}

void div_order()
{
	int i, j, temp, temp2;
	for(i=1; i<1000; i++)	{
		temp=ara[i+1][0];
		temp2=ara[i+1][1];
		j=i;
		while(temp<=ara[j][0] && j)	{
			if(temp==ara[j][0] && temp2<ara[j][1]) break;
			ara[j+1][0]=ara[j][0];
			ara[j+1][1]=ara[j][1];
			j--;
		}
		j++;
		ara[j][0]=temp;
		ara[j][1]=temp2;
	}
	
	return;
}

int main()
{
	int i, t, n;
	scanf("%d", &t);
	int ans[++t];
	div_count();
	div_order();

	for(i=1; i<t; i++) {
		scanf("%d", &n);
		ans[i]=ara[n][1];
	}

	for(i=1; i<t; i++) {
		printf("Case %d: %d\n", i, ans[i]);
	}

	return 0;
}
