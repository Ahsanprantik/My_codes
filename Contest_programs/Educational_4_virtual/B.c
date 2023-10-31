#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, j;
	long long int t;
	scanf("%d", &n);
	int f[n];

	for(i=0; i<n; ++i){
		scanf("%d", &j);
		f[j-1] = i;
	}

	for(i=0, t=0; i<(n-1); ++i)	{
		t += (long long int)abs(f[i]-f[i+1]);
	}
	printf("%lld\n", t);

	return 0;
}