/* Demonstrate multiple loop control statement. */
#include <stdio.h>
#include <string.h>

void converge(char *targ, char *src);

int main()
{
	char target[80] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX" ;

	converge(target, "This is a test of converge().");
	printf("Final string: %s\n", target);

	return 0;
}

/* This function copies one string into another.
   It copies characters to the both ends, 
   converging at the middle. */
void converge(char *targ, char *src)
{
	int i, j;

	printf("%s\n", targ);
	for(i=0, j=strlen(src); i<=j; i++, j--)	{
		targ[i] = src[i];
		targ[j] = src[j];
		printf("%s\n", targ);
	}
}