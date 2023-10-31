#include <stdio.h>

int main()
{
	double balance[100];
	printf("%d\n", sizeof(balance)); /* size should be 8 * 100 = 800 */

	return 0;
}