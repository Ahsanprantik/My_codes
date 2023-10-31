/*Using void to create generic pointers (pointers that go with any data type)...*/
#include <stdio.h>

main()
{
	void *a, *b;//<<==generic pointers
	char x;
	int y;
	a=&x;
	b=&y;
	printf("%lld\n", a);
	printf("%lld\n", b);
}