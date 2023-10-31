#include <stdio.h>

struct isprime	{
	unsigned :		1;
	unsigned two:	1;
	unsigned three:	1;
	unsigned four:	1;
	unsigned five:	1;
	unsigned six:	1;
	unsigned seven:	1;
	unsigned eight:	1;
	unsigned nine:	1;
	unsigned ten:	1;
	unsigned elven:	1;
} ;

struct sh_isprime	{
	unsigned :		11;
	unsigned elven:	1;
} ;

int main(void)
{
	struct isprime isp;
	struct sh_isprime shisp;

	printf("%p %4d\n%p %4d\n", &isp, sizeof(isp), &shisp, sizeof(shisp));

	isp.two = 1;
	isp.three = 1;
	isp.four = 0;
	isp.five = 1;
	isp.six = 0;
	isp.seven = 1;
	isp.eight = 0;
	isp.nine = 0;
	isp.ten = 0;
	isp.elven = 1;

/*	shisp = (struct sh_isprime) isp;	*/

	return 0;
}