/*	Assign different locations to a pointer
	and use its memory as an integer variable.	*/
#include <stdio.h>

int main()
{
	int *p;
	long long int a;
	printf("%lld\n", &a);	/*	Location of this declared variable.	*/
	scanf("%lld", &a);	/*	Input value for pointer location	*/
	p = (int *)a;	/*	assign input value as location	*/

	scanf("%d", p);
	printf("%d\n", *p);

	return 0;
}

/*	This program runs if the location input
	is away from the declared variable. Also Not all locations work out.

	Note: When a variable is declared all other byte except the initial one
	is blocked from access. 	*/