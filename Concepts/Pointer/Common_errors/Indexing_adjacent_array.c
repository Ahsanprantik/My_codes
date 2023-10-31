/*	This program is wrong.	*/
#include <stdio.h>

int main()
{
	int first[10], second[10], t, *p;

	p = first;

	for(t=0; t<20; t++)	*p++ = t;

	/*	Print the second array	*/
	for(t=0; t<10; t++)	printf("%d ", second[t]);

	printf("\n");

	return 0;
}