/*	Examine assignment of void pointer to char pointer	*/
#include <stdio.h>

int main()
{
	void *vp;
	int *in, ara[2] = {1, 2};

	vp = ara;
	in = (int *)vp + 1;	/*	Pointer to second element of ara.
							int* is cast to vp, not converted
							vp to int*	*/

	printf("%d\n", *in);	/*	Print second element	*/

	return 0;
}
/*	Note: void pointer should be cast the type it is assigned to.	*/