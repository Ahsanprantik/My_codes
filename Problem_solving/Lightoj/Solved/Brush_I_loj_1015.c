#include <stdio.h>

int main()
{
	int i, t, n, j;
	scanf("%d", &t);
	t++;
	int ara[t];
	for(i=1; i<t; i++)	{
		ara[i]=0;	//initial value
		scanf("%d", &n);
		while(n--) {	//n cycles
			scanf("%d", &j);
			if(j>0) ara[i]+=j;//if positive(adding 0 is unneccessary)
		}
	}
	for(i=1; i<t; i++)	{
		printf("Case %d: %d\n", i, ara[i]);
	}
	return 0;
}