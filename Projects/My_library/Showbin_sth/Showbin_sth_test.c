#include <stdio.h>
//This function shows value of 's'th bit(Up to 64th bit).

int showbin(const long long i, int bit)
{
    unsigned long long temp, ret;

    temp=1;

    if(bit>64)  {
        printf("Error: Bit location unaccessible.");
        return;
    }

    bit--;

	temp<<=bit;

	ret=((temp & i)!=0);

	printf("%d", ret);

    return ret;
}

void main()
{
    const unsigned int a=1<<31;
    showbin(a, 32);
}
