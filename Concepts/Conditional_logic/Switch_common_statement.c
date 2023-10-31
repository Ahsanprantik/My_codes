#include <stdio.h>

int main()
{
	int i, flag=-1;
	scanf("%d", &i);
	switch(i)	{
		case 0:
			printf("It's zero.\n");
			break;
		case 1:
			//break; //Terminates the condition if it's 1 without going to case 3.
		case 2:	//This cases have
		case 3:	//common statements.
			printf("It's 1, 2 or 3.\n");
			break;
		case 4:
			flag=1;
			printf("It's 4.\n");
			i++;	//Continues.
		case 5:
			printf("flag is %d.\n", flag);
			break;
		default:
			printf("It's bigger than 5.\n");
			break;
	}
	return 0;
}