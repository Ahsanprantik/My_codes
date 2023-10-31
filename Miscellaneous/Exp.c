#include <stdio.h>

main()
{
	long long a, i=1;
	int c=-(64+1);
	a=c;
	printf("%d\n", c);
	for(i<<=50; i!=0; i=i>>1)	{
		if((a & i)==0) printf("0");
		else printf("1");
	}
}