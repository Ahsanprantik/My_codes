#include <bits/stdc++.h>

void sort(int ara[], int n)
{
	for(int i=0, tmp; i<n-1; i++)	{
		int j=i;
		tmp=ara[i+1];
		while(j+1 && ara[j]>tmp)	{
			ara[j+1] = ara[j];
			j--;
		}
		ara[j+1] = tmp;
	}
}

int main()
{
	int n, ab, min=4e9, ct;
	scanf("%d", &n);
	int ara[n];

	for(int i=0; i<n; i++)
		scanf("%d", &ara[i]);

	sort(ara, n);

	for(int i=0; i<n-1; i++)	{
		ab = abs(ara[i]-ara[i+1]);
		if(ab<min)	{
			ct = 1;
			min = ab;
		}
		else if(ab==min)	ct++;
	}

	printf("%d %d", min, ct);

	return 0;
}