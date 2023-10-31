#include <stdio.h>
//This program is to show that no operation can be done between 'if' and 'else if' statement.
void main()
{
	int a;
	a=8;
	if(a>0)	{
		printf("Output from 'if'.\n");
	}
	a=-4;
	else if(a<0)	{
		printf("Output from 'else if'.\n");
	}
}
