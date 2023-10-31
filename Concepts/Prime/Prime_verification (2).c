#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
	int n, size;
	double ram;
	char c;
	while(1)	{
        printf("\nEnter the maximum number: 2^");
		scanf("%d", &n);
		size=pow(2, n);
		ram=size/pow(10, 9);
		if(ram>0.256)	{
			printf("\nWarning: %d GB RAM will be used.\nPress any key to start(Press 0 to re-enter)..... ", ram);
            c=getch();
                if(c!='0')	{
                    break;
                    }
                if(c=='0')	{
                    continue;
                }
        }
        else {
            break;
        }
	}
	printf("%lld", size);
	bool ara[size];
	return 0;
}
