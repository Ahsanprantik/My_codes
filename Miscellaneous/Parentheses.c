#include <stdio.h>

int main()
{
	if(!0&&0||0) printf("True\n");
	else printf("False\n");
	
	if(!(0&&0)||0) printf("True\n");
	else printf("False\n");
	return 0;
}