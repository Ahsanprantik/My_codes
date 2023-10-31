/*	Use of pointer array to hold pointers to strings.	*/
#include <stdio.h>

void syntax_error(int num)
{
	static *err[] = {
		"Cannot open file\n",
		"Read error\n",
		"Write error\n",
		"Media failure"
	};

	printf("%s\n", err[num]);	/*	print the string	*/
}

int main()
{
	int n;
	scanf("%d", &n);

	syntax_error(n);

	return 0;
}