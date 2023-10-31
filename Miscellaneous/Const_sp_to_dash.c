#include <stdio.h>
#include <math.h>
#include <mylib.h>

void sp_to_dash(const char *str)
{
	while(*str)	{
		if(*str==' ')	{
			printf("%c", '-');
		}
		else {
			printf("%c", *str);
		}
		str++;
	}
}
void main()
{
	char *s="this is a test";
	sp_to_dash(s);
}
