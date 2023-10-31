#include <stdio.h>
#include <string.h>

int main()
{
	int cont=1, j, k=0, c=0;
	char word[51], carry[26];
	scanf("%s", word);
	memset(carry, '\0', sizeof(carry));
	memset(word, '\0', sizeof(word));
	carry[0]=word[0];

	for(j=1; word[j]!='\0'; j++)	{
		for(k=0; word[j+k]==carry[k]; k++);
		if(word[j+k]=='\0' && carry[k]=='\0')	{
			k--;
			break;
		}
		else if(carry[k]=='\0')	{
			j+=k-1;	//!word
			cont=0;
		}
		else if(carry[k]!='\0')	{
			cont=1;
			j=c-1;
		}
		if(cont)	{
			carry[c++]=word[j];
		}
	}
	if(cont)	printf("%d\n", strlen(word));
	else printf("%d\n", c);

	return 0;
}