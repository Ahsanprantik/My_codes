#include <stdio.h>

void sort(int ara[])
{
	int i, j, temp;
	for(i=1; ara[i]; i++) {
		temp=ara[i];
		j=i-1;
		while(j>=0 && temp>ara[j]) {
			ara[j+1]=ara[j];
			j--;
		}
		ara[j+1]=temp;
	}
	return;
}

void find_max(int ara[], int n)
{
	int i, j, k;
	for(i=0; i<(n-2); i++) {
		for(j=i+1; j<(n-1); j++) {
			for(k=j+1; k<n; k++) {
				if((ara[j]+ara[k]) > ara[i]) {
					printf("%d %d %d", ara[k], ara[j], ara[i]);
					return;
			}
		}
	}
	}
	printf("-1");
	return;
}
		

int main()
{
	int n, i;
	scanf("%d", &n);
	i=n;
	int l[n+1];
	l[n]=0;
	while(i--) scanf("%d", &l[i]);
	sort(l);
	find_max(l, n);
	return 0;
}