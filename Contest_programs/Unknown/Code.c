#include <stdio.h>
#include <math.h>

int find(int n, int ara[])
{
	int i;
	for(i=0; i<21; i++)
		if(ara[i]==n)	return 1;
	
	return 0;
}

int main()
{
	int a=1, ara[21], i=0;
	while(i<21)	{
		a=pow(i+1, 6);
		ara[i]=a;
		i++;
	}
	
	while(scanf("%d", &a) && a)	{
		if(find(a, ara))	printf("Special\n");
		else printf("Ordinary\n");
	}
	
	return 0;
}
/*
1
64
729
4096
15625
46656
117649
262144
531441
1000000
1771561
2985984
4826809
7529536
11390625
16777216
24137569
34012224
47045881
64000000
85766121
*/