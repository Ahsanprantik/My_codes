#include <stdio.h>

int if_digit(char ch)
{
	if(ch>='0' && ch<='9')	{
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	char ch=getchar();
	printf("%d", if_digit(ch));
	return 0;
}