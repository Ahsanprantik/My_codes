/*	A simple dictionary	*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*	list of words and meanings	*/
char *dic[][40] = {
	"atlas", "A volume of maps",
	"car", "A motorized vehicle",
	"telephone", "A communication device",
	"airplane", "A flying machine",
	"", ""
};

int main(void)
{
	char word[80], ch;
	char **p;

	do {
		puts("\nEnter word:");
		scanf("%s", word);

		p = (char **) dic;

		/*	Find the matching word and print its meaning	*/
		do {
			if(!strcmp(*p, word))	{
				puts("Meaning:");
				puts(*(p+1));
				break;
			}
			if(!strcmp(*p, word))	break;
			p += 2;	/*	Advance through the list	*/
		} while(*p);

		if(!*p)	puts("Word not in the dictionary.");
		
		printf("Another? (y/n): ");
		scanf(" %c%*c", &ch);
	} while(toupper(ch) != 'N');

	return 0;
}