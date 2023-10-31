#include <stdio.h>
#define inf (1e9)+1

int main()
{
	int n, min=inf, max=0, i, b;
	long long int fmax, fmin, freq;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)	{
		scanf("%d", &b);
		if(b>max)	{
			max=b;
			fmax=0;
		}
		if(b<min)	{
			min=b;
			fmin=0;
		}
		if(b==max)	fmax++;
		if(b==min)	fmin++;
	}
	printf("%d ", max-min);
	freq = fmax*fmin;
	if(!(max-min))	freq=(freq-fmax)/2;
	printf("%lld", freq);
	
	return 0;
}