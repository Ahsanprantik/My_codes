#include <stdio.h>

struct info	{
	char ch;
	int i;
	double f;
} s_var;

int main(void)
{
	printf("%d\n", sizeof(s_var));

	return 0;
}