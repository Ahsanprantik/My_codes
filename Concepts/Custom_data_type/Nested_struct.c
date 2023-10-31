#include <stdio.h>

struct addr
{
	char name[30];
	char street[40];
	char city[20];
	char state[3];
	unsigned long int zip;
} ;

struct emp
{
	struct addr address;
	int wage;
} worker;

int main(void)
{
	worker.address.zip = 1206;
	printf("%lu\n", worker.address.zip);

	return 0;
}