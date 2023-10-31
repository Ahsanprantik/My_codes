/*	Allocate, free and reallocate to achieve
	the optimum heap memory	*/

#include <stdio.h>
#include <stdlib.h>

void *opt(long long int *q);

int main()
{
	int *p;
	void *lim;
	long long int i;

	p = (int *)opt(&i);	/*	input the size in variable i	*/
	printf("%lld bytes occupied from location %p\n", i, p);
	i /= sizeof(int);
	lim = p + i;
	printf("%lld elements in the array.\n", i);

	for( ; p<lim; p++)	*p = 23;

	p--;
	printf("The value in the %p (last) location is %d\n", p, *p);

	return 0;
}

void *opt(long long int *q)
{
	void *p;
	long long int i, j;

	for(i=j=1e9; j; )	{
		p = malloc(i);
		if(!p)	{
			i -= j;
			j /= 10;
			i += j;
		}
		else {
			free(p);
			i += j;
		}
	}
	p = malloc(--i);
	*q = i;

	return p;
}