#include <stdio.h>
/*
Merging the equal sign here using the value returned bye printf() function.
*/
void main()
{
	int a, dec_len, i, m;
	m=33;
	for(i=1, a=m; i<=10; a+=m, i++) {
		dec_len=printf("%d", a);
		dec_len=5-dec_len;
		
		while(--dec_len) printf(" ");
		
		printf("= %d X %d\n", m, i);
	}
}