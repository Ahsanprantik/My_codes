#include <stdio.h>
/*
This function shows binary allocation(integer form) of a variable up to 64th bit. 1 initialized index.
*/
void showbin(const long long i)
{
	unsigned long long temp=1;

    for(temp<<=63; !(temp & i); temp>>=1)	{}
    for( ; temp!=0; temp>>=1)   {
		printf("%d", (temp & i)!=0);
    }

    return;
}

int main()
{
	long long num;
	int bit;
	scanf("%lld", &num);
	showbin(num);
	printf("\n");
	return 0;
}
