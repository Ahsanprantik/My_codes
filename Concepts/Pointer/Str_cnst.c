#include <stdio.h>
#include <string.h>

/*	char *p = "hello world";	*/
const char *p = "hello world";

int main()
{
	int i;

	/*	print the string forward and backward	*/
	printf(p);
	printf("\n");
	for(i=strlen(p)-1; i+1; i--)	printf("%c", p[i]);
	printf("\n");

	return 0;
}
/*
In case 1:
gcc:
Str_cnst.c:11:2: warning: format not a string literal and no format arguments [-Wformat-security]
  printf(p); /* warning: format not a string literal

g++:
Str_cnst.c:4:11: warning: deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]
 char *p = "hello world";
           ^
Str_cnst.c: In function ‘int main()’:
Str_cnst.c:11:10: warning: format not a string literal and no format arguments [-Wformat-security]
  printf(p); /* warning: format not a string literal

In case 2:
gcc & g++:
Str_cnst.c:12:2: warning: format not a string literal and no format arguments [-Wformat-security]
  printf(p); 

*/