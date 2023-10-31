/*	Trying to understand bit distribution of
	double type varible value	*/
#include <stdio.h>

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
	int j;
	double db = 9.00456;
	char *ch;
	printf("%.5f\n", db);

	for(ch=&db, j=0; j<8; ch++, j++)	{	
		showbin(*ch, 8);	/*	8 Bit	*/
		printf(" ");
	}
	printf("\n");

	return 0;
}