#include <stdio.h>

int show_reg_address(register int i)
{
	register int *address;
	address=&i;
	printf("%p\t%d\n", address, i);
	if(i==0	|| i==1)	return 1;
	i=show_reg_address(i-1)+show_reg_address(i-2);
	return i;
}

int main()
{
	int f=show_reg_address(10);
	printf("\n%d", f);
	return 0;
}
