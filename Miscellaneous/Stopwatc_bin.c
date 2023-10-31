#include <stdio.h>
#include <time.h>
#include <conio.h>

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
	int i, lim, j;
	printf("Set limit(sec): ");
	scanf("%d", &lim);
	for(i=clock()+CLOCKS_PER_SEC, j=0; j<lim; i+=CLOCKS_PER_SEC, j++) {
		clrscr();
		printf("\t");
		showbin(j, 8);
		printf("\n");
		while(clock()<i) {}
	}
	printf("\nThank you for using me.\nR. Giskard.");
	getchar();
}