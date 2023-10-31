#include <stdio.h>

struct info{
	int roll;
	char name[25];
	char email[30];
};

void main()
{
	struct info sec[10];
	printf("Data size: %d\n", sizeof sec);
	gets(sec[2].name);
	printf("%s", sec[2].name);
	/*working with a 3rd section student's name.*/
}