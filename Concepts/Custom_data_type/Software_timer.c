/*	Display a software timer	*/
#include <stdio.h>
#include <time.h>

struct my_time
{
	int hh;
	int mm;
	int ss;
} ;

void update(struct my_time *t);
void display(const struct my_time *t);
void delay(void);

int main(void)
{
	struct my_time systime;

	systime.hh = 0;
	systime.mm = 0;
	systime.ss = 0;

	for(;;)	{
		update(&systime);
		display(&systime);
	}

	return 0;
}

void update(struct my_time *t)
{
	t->ss++;
	if(t->ss==60)	{
		t->ss = 0;
		t->mm++;
	}

	if(t->mm==60)	{
		t->mm = 0;
		t->hh++;
	}

	if(t->hh==24)	t->hh = 0;
	delay();
}

void display(const struct my_time *t)
{
	printf("%02d: ", t->hh);
	printf("%02d: ", t->mm);
	printf("%02d\n", t->ss);
}

void delay(void)
{
	register long int t;

	for(t=clock()+CLOCKS_PER_SEC; clock()<t; ) ;
}