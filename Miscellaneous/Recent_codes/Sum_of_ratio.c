#include <stdio.h>

int main()
{
	double ans;
	int i;
	
	ans = 0.0;
	for(i=1; i<100; ++i)	{
		ans += 1.0/(i*(i+1));
	}
	
	printf("%.9lf", ans);
	
	return 0;
}
		