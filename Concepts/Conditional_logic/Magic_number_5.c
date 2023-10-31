/*Magic number program #5*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int magic;	//Magic number
	int guess;	//User's guess
	magic=rand();	//Generate the magic number.
	printf("Guess the magic number: ");
	scanf("%d", &guess);
	guess == magic ? printf("Right") : guess>magic ? printf("High") : printf("Low");
	printf("\n");
	
	return 0;
}
