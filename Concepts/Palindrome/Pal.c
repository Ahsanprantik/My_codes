#include<stdio.h>
#include<string.h>

int main()
{
	int i, j;
	char word[40], reverse_word[40];
	scanf("%s", &word);
	int len=strlen(word);
	for(i=0, j=len-1; i<len; i++, j--)	{
		reverse_word[i]=word[j];
	}
	reverse_word[i]='\0';
	printf("%s\n", reverse_word);
	if(0==strcmp(word, reverse_word))	{
		printf("It is a palindrome.");
	}
	else {
		printf("It is not a palindrome.");
	}
	return 0;
}