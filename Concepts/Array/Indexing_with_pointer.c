/*	Index and access an array by a pointer of its type	*/
#include <stdio.h>

int main()
{
	int *p, i[10];

	p = i;	/*	Assign pointer to the array i	*/
	p[5] = 100;	/*	Assign using index	*/
	*(p+4) = 99;	/*	Assign using pointer arithmatic	*/

	printf("%d %d\n", i[4], i[5]);	/*	Both assignments place the value in array i	*/

	return 0;
}