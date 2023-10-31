#include <stdio.h>
#include <conio.h>

struct Record{
	char name[10];
	char phone[15];
	char email[15];
};

int main()
{
	struct Record a, b;
	scanf("%s", a.name);
	scanf("%s", a.phone);
	scanf("%s", a.email);
	b=a;
	printf("\nName\t: %s\nPhone No: %s\nEmail\t: %s\n", b.name, b.phone, b.email);
	return 0;
}