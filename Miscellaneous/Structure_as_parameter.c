#include <stdio.h>

struct st{
	int r;
	float gpa;
};

void strct_nchng(struct st prmtr)
{
	struct st y;
	y.r=42;
	y.gpa=5.00;
	prmtr=y;
	printf("\t%p\n", &prmtr);	//!pointer not copied
	return;
}

void strct_chng(struct st *prmtr)
{
	struct st y;
	y.r=42;
	y.gpa=5.00;
	*prmtr=y;
	printf("\t%p\n", prmtr);	//pointer copied
	return;
}

int main()
{
	struct st x;
	x.r=20;
	x.gpa=4.86;
	printf("Data:\n");
	printf("Roll %d: %.2f\n", x.r, x.gpa);
	
	printf("\nNo change:\n");
	printf("Pointer:\n");
	printf("\t%p\n", &x);	//different pointer
	strct_nchng(x);
	printf("Roll %d: %.2f\n", x.r, x.gpa);	//doesn't change
	
	printf("\nChange:\n");
	printf("Roll %d: %.2f\n", x.r, x.gpa);
	printf("Pointer:\n");
	printf("\t%p\n", &x);	//same pointer
	strct_chng(&x);
	printf("Roll %d: %.2f\n", x.r, x.gpa);	//changes
	return 0;
}