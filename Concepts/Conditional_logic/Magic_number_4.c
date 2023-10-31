/*Magic number program #4*/
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
	else if(guess>magic) printf("Wrong. Too high.");
	else printf("Wrong. Too low.");
	
	return 0;
}