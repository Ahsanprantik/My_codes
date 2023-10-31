#include <stdio.h>

int if_uni(int ara[], int n);

int main(void)
{
	int n, i;
	scanf("%d", &n);
	int a[n];

	for(i=0; i<n; i++)	scanf("%d", &a[i]);

	if(if_uni(a, n))	printf("YES\n");
	else printf("NO\n");

	return 0;
}

int if_uni(int a[], int n)
{
	int i, block;

	block = 1;
	for(i=0; i<n-1; i++)	{
		if(a[i]<a[i+1] && block==1)	block = 1;
		else if(a[i]==a[i+1] && block<=2)	block = 2;
		else if(a[i]>a[i+1] && block<=3)	block = 3;
		else return 0;
	}
	return 1;
}