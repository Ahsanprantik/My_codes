#include <stdio.h>

int main()
{
	int k=0, T=0;
	int n, r, i=0;
	scanf("%d", &n, &r);
	int l[n], t_max[n], moment[100000];

	for(i=0; i<n; i++)	{
		scanf("%d", &l[i]);
	}
	
	for(i=0; i<n; i++)	{
		scanf("%d", &t_max[i]);
	
		t=2*l;
		while(t>t_max[i])	{
			T+=r;
			moment[k]=T;
			k++;
			t-=r;
		}
		if(t<0)	
		T+=t;
