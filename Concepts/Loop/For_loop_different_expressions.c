#include <stdio.h>

void prompt(void);
int readnum(void);
void sqrnum(int num);

int main()
{
	int t;

	for(prompt(); t=readnum(); prompt())
		sqrnum(t);

	return 0;
}

void prompt(void)
{
	printf("Enter a number: ");
}

int readnum(void)
{
	int t;

	scanf("%d", &t);
	return t;
}

void sqrnum(int num)
{
	printf("%d\n", num*num);
}