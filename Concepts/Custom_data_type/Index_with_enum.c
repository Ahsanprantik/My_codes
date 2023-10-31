#include <stdio.h>

enum coins {paisa, tpaisa, charana, atana, taka} ;

int main(void)
{
	enum coins money;
	char name[][12] = {
		"paisa\n",
		"tpaisa\n",
		"charana\n",
		"atana\n",
		"taka\n"
	};

	scanf("%u", &money);

	switch(money)	{
		case 1:	printf(name[paisa]);
			break;
		case 10: printf(name[tpaisa]);
			break;
		case 25: printf(name[charana]);
			break;
		case 50: printf(name[atana]);
			break;
		case 100: printf(name[taka]);
	}

	return 0;
}