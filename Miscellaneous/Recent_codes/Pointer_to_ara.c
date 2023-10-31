#include <stdio.h>

void f(int *num);

int main()
{
	int i;
	int ara[6] = {256, 257, 258, 259, 260, 0};

	f(ara);

	for(i=0; i<5; i++)
		printf("%p\t", &ara[i]);	/* pointer locations of 5 array
									   elements should correspond to
									   the pointer locations in the function */

	printf("\n");

	return 0;
}

/* This function aims to use a pointer to an integer array
   for using the array at its actual length and boundary. */
void f(int *num)
{
	int *run;

	for(run = num; *run; run++)	printf("%d\n", *run);	/* this line prints the array
														   before 0, if everything works fine */

	for( ; *num; num++)
		printf("%p\t", num);	/* Each increment counts 4 bytes,
								   because it's an 'int*' type pointer */
	printf("\n");
}