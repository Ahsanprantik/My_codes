/* This function is not supported by standard C	*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	
	printf("Type some text (Enter period to quit)\n");
	
	do	{
		ch = getch();
		
		if (islower(ch))	ch = toupper(ch);
		else ch = tolower(ch);
		
		putchar(ch);
	}	while(ch != '.') ;
	
	return 0;
}	