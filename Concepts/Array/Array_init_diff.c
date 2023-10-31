/*	Initialize array diffently.	*/
#include <stdio.h>

int main()
{
	int ara[3], b[2][3] = {{1, 1, 1}, {3, 3, 3}};
	int i;

/*	*ara = {1, 2, 3};	/*	error: cannot convert ‘<brace-enclosed initializer list>’
							to ‘int’ in assignment

	for(i=0; i<3; ++i)	printf("%d ", *(int *)ara);

	printf("\n");
*/
	for(i=0; i<6; ++i)	printf("%d ", *((int *)b+i));

	printf("\n");

	return 0;
}