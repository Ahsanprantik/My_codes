#include <stdio.h>
/*
This function shows binary allocation(integer form) of a variable up to 64th bit. 1 initialized index.
*/
void showbin(const long long i, int bit)
{
    unsigned long long temp;

    temp=1;

    if(bit>64)  {
        printf("Error: Bit location unaccessible.");
        return;
    }

    bit--;

    for(temp<<=bit; temp!=0; temp>>=1)   {
		printf("%d", (temp & i)!=0);
    }

    return;
}

int main()
{
    unsigned long long a, i;
    scanf("%lld", &a);

    for(i=1; i<=a; i<<=1);

    i>>=1;
    for( ; i; i>>=1)    printf("%d", !(!(i&a)));

    printf("\n");

    return 0;
}
/*
Creation date:
Status: Implemented.
Edit history:

	(1) In line 17: Unknown date.
Old:
        if((temp & i)!=0)	{
			printf("1");
        }
        else {
			printf("0");
        }
New:
		printf("%d", (temp & i)!=0);

-----------------------------------------------------

	(2) In line 14: 05/12/2015
Old:
	bit--;
    if(bit>64)  {
        printf("Error: Bit location unaccessable.");
        return;
    }
New:
    if(bit>64)  {
        printf("Error: Bit location unaccessible.");
        return;
    }

    bit--;

-----------------------------------------------------

	(3) In line 7: 13/12/2015
Old:
    unsigned long long temp=1;

New:
    unsigned long long temp;

    temp=1;

-----------------------------------------------------
*/
