#include <stdio.h>
#include <string.h>

void sign_on(void);

int main()
{
	sign_on();

	return 0;
}

void sign_on(void)
{
	char str[20];
	int x;

	for(x=0; x<3 && strcmp(str, "password"); ++x)	{	/* 'strcmp()' function returns 0, 
															if two string matches. */
		printf("Enter password please: ");
		gets(str);
	}

	if(x==3)	return;
	else printf("Logging in...\n");	/* Prompts for logging in. */
}