#include <stdio.h>

enum coins {
	paisa = 1,
	tpaisa = 10,
	charana = 25,
	atana = 50,
	taka = 100
} ;

int main(void)
{
	enum coins money;

	scanf("%u", &money);

	switch(money)	{
		case paisa:	printf("paisa\n");
			break;
		case tpaisa: printf("ten paisa\n");
			break;
		case charana: printf("char ana\n");
			break;
		case atana: printf("at ana\n");
			break;
		case taka: printf("ek taka\n");
	}

	return 0;
}