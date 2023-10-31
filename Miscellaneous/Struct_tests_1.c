#include <stdio.h>

struct Record{
	char name[10];
	char phone[15];
	char email[15];
};

char test(struct Record a)
{
	scanf("%s", &a.name);
	scanf("%s", &a.phone);
	scanf("%s", &a.email);
}
int  main()
{
	struct Record b;
	test(b);
	printf("Name\t: %s\nPhone No: %s\nEmail\t: %s\n", b.name,  b.phone, b.email);
	return 0;
}