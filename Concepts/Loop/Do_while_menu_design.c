#include <stdio.h>

void check_spelling(void);
void correct_errors(void);
void display_errors(void);

int main()
{
	char ch;

	printf("1. Check spelling\n");
	printf("2. Correct errors\n");
	printf("3. Display spelling errors\n");

	do {
		ch = getchar();

		switch(ch)	{
			case '1':
				check_spelling();
				break;
			case '2':
				correct_errors();
				break;
			case '3':
				display_errors();
				break;
		}
	} while(ch!='1' && ch!='2' && ch!='3');

	return 0;
}

void check_spelling(void)
{
	printf("Checking spelling...\n");
}

void correct_errors(void)
{
	printf("Correcting spelling errors...\n");
}

void display_errors(void)
{
	printf("Displaying spelling errors...\n");
}