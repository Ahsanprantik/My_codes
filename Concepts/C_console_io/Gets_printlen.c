#include <stdio.h>
#include <string.h>

int main(void)
{
	char st[80];
	printf("Type some text(Press ENTER to quit)\n");
	gets(st);
	
	printf("You typed %d character/s\n", strlen(st));
	
	return 0;
}