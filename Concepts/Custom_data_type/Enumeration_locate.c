/*	example of enumeration	*/
#include <stdio.h>

enum coin  {paisa=1, tenpaisa=paisa*10, charana=paisa*25, atana=paisa*50, taka=paisa*100} ;

int main(void)
{
	enum coin money;
	
	money = paisa;
/*	scanf("%d", &money);	/*	not fruitful	*/
	
	printf("money: %d %p %d\n", money, &money, sizeof(money));
	printf("paisa: %d\n", paisa);
	printf("tenpaisa: %d\n", tenpaisa);
	printf("charana: %d\n", charana);
	printf("atana: %d\n", atana);
	printf("taka: %d\n", taka);
	
	return 0;
}