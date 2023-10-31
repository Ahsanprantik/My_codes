#include <stdio.h>

struct Record{
	char name[10], phone[15], email[15];
};

struct Record test()
{
	struct Record a;
	scanf("%s", &a.name);
	scanf("%s", &a.phone);
	scanf("%s", &a.email);
	return a;
}
int  main()
{
	struct Record b;
	b=test();
	printf("Name\t: %s\nPhone No: %s\nEmail\t: %s\n", b.name,  b.phone, b.email);
	return 0;
}