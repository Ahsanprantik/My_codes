#include <stdio.h>

int main()
{
	int a=7;
	switch(a)	//Variable a is probably constant here.
	{
		case 7:	//This line prints.
			printf("%d\n", a);
			++a;
			//break; //This blocks the 3rd case.
		case 9:
			printf("%d\n", a);
			break;
		case 8:	//This line doesn't print if 1st case is broken.
			printf("%d\n", a);
			break;
	}
	return 0;
}
