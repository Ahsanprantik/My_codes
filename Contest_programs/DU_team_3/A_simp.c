#include <stdio.h>

int main()
{
	//freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	int n, k, side, min;
	scanf("%d %d", &n, &k);

	side = n*2;
	min = side/k + !(!(side%k));

	if(min==1)	min = 2;

	printf("%d\n", min);

	return 0;
}