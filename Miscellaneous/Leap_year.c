#include <stdio.h>

int main()
{
	int y;
	scanf("%d", &y);
	
	if(y%400==0)
		printf("Leap year.");
	else if(y%100==0)
		printf("Not leap year.");
	else if(y%4==0)
		printf("Leap year");
	else
		printf("Not leap year.");
	return 0;
}