/*	A simple code for checking command
	against a set of valid commands	*/
#include <stdio.h>
#include <string.h>

#define stdlen 80

int cmd_chk(char in[stdlen])
{
	int i = 5;
	char cmd[i][stdlen] = {"HOME", "VISIT", "BACK", "FORWARD", "EXIT"};

	i--;
	for( ; i>=0; i--)
		if(!strcmp(cmd[i], in))
			break;

	return i+1;
}

int main()
{
	char s_in[stdlen];
	int val;

	do {
		printf("Enter a browser command in CAPITAL:\n");
		scanf(" %s", s_in);	/*	Initial space to bear the input terminating space	*/
		val = cmd_chk(s_in);

		switch(val)	{
			case 1:
				printf("Command for HOME\n");
				break;
			case 2:
				printf("Command for VISIT\n");
				break;
			case 3:
				printf("Command for BACK\n");
				break;
			case 4:
				printf("Command for FORWARD\n");
				break;
			case 5:
				printf("Command for EXIT\n");
				break;
			case 0:
				printf("Command invalid\n");
		}
	} while(val!=5);

	return 0;
}