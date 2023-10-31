/*	Countdown program	*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int count, disp;
	size_t t;

	if(argc<2)	{
		printf("You must enter the length of the count\n");
		printf("on the command line. Try again.\n");
		exit(1);
	}

	if(argc==3 && !strcmp(argv[2], "display"))	disp = 1;
	else disp = 0;

	for(count=atoi(argv[1]), t=clock()+CLOCKS_PER_SEC; count; --count, t+=CLOCKS_PER_SEC)	{
		if(disp)	printf("%d\n", count);
		while(clock()<t);
	}

	putchar('\a');	/*	This will ring the bell	*/
	printf("Done\n");

	return 0;
}