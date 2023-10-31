#include <stdio.h>
#include <wchar.h>

void main()
{
	wchar_t wc;
	printf("%d\n", sizeof(wc));//16 bit character.
	wc=L'A';
	printf("%wc\n", wc);

}
