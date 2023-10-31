#include <stdio.h>
#include <string.h>

int main()
{
	char word[20][20][25];
	int i, j, sent[20], x[100];
	int conv;
	printf("Enter the conversation length: ");
	scanf("%d", &conv);
	printf("Now start your conversation:\nExample-1: Hi, I am PC.\nExample-2: Welcome!\nExample-3: How are you?\n");
	for(i=0; i<conv; i++)	{
		x[i]=0;
	for(j=0; 1==scanf("%s", word[i][j]); j++)	{
		sent[j]=strlen(word[i][j])-1;
		x[i]++;
		if(word[i][j][sent[j]]=='.' || word[i][j][sent[j]]=='!' || word[i][j][sent[j]]=='?')	{
			word[i][j][sent[j]]='\0';
			break;
		}
	}
	}
	for(i=0; i<conv; i++)	{
		printf("\n%dth sentence:\n", i+1);
		for(j=0; j!=x[i]; j++)	{
			printf("%s\n", word[i][j]);
		}
	}
	return 0;
}