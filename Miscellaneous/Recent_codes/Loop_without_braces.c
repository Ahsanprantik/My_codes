#include <stdio.h>

int is_in(char *s, char c)
{
	while(*s)
		if(*s==c)	return 1;
		else s++;

	return 0;
}
int main()
{
	if(is_in("Bangladesh", 'b'))	printf("Yes.\n");
	else printf("No.\n");
}