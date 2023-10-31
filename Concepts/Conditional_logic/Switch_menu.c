#include <stdio.h>

void menu(void)
{
	char ch;
	printf("Press 1 to check spelling.\n"); 
	printf("Press 2 to correct spelling.\n"); 
	printf("Press 3 to display spelling errors.\n");
	printf("Press any other key to skip.\n");
	printf("\tEnter your choice: ");	//Fetch keystroke

	ch=getchar();	//User keystroke(ENTER terminated)

	switch(ch)	{
		case '1':
			printf("Spell_check()");
			break;

		case '2':
			printf("Correct_spelling()");
			break;

		case '3':
			printf("Display_error()");
			break;

		default:
			printf("No option selected");
	};
	printf("\n");
}

int main()
{
	menu();

	return 0;
}
