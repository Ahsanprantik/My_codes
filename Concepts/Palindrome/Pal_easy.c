#include <stdio.h>
#include <string.h>

int main()
{
	int i, j;
	char str[40];
	scanf("%s", str);
	for(i=0, j=strlen(str)-1; i<j; i++, j--)	{
		if(str[i]!=str[j])	{
			printf("%s is not a palindrome.", str);
			break;
		}
	}
	if(i>=j)	{
		printf("%s is a palindrome.", str);
	}
	return 0;
}