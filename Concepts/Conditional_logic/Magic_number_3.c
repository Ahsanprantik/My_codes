/*Magic number program #3*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int magic;	//Magic number
	int guess;	//User's guess
	magic=rand();	//Generate the magic number.
	printf("Guess the magic number: ");
	scanf("%d", &guess);
	if(guess == magic) printf("***Right***");
	else {
		printf("Wrong. ");
		if(guess>magic) printf("Too high.");
		else printf("Too low.");
	}
	
	return 0;
}