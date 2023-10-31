#include <stdio.h>

struct {
	char name[30];
	char street[40];
	char city[20];
	char state[3];
	unsigned long int zip;
} addr_info;

int main(void)
{
	gets(addr_info.state);
	puts(addr_info.state);

	return 0;
}