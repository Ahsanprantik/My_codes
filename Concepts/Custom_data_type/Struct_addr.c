#include <stdio.h>

struct addr
{
	char name[30];
	char street[40];
	char city[20];
	char state[3];
	unsigned long int zip;
};

int main(void)
{
	register int i;
	struct addr addr_info;

	addr_info.zip = 1206;

	printf("%d\n", addr_info.zip);
	gets(addr_info.name);
	printf("%s\n", addr_info.name);

	for(i=0; addr_info.name[i]; i++)	{
		putchar(addr_info.name[i]);
		putchar('\n');
	}

	return 0;
}