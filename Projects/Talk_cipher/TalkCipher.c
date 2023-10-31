#include <stdio.h>
#include <conio.h>
#include <string.h>

char cipher(char b, char t)
{
	if(t==' ')	return t;
	if(b=='f')	return t+1;
	else if(b=='b')	return t-1;
	else return t;
}

int main()
{
	int i;
	char talk[1000], a, b, c;
	printf("Write from here(Press 'Enter' or 'Go' to finish):\n\n");
	gets(talk);
	printf("\nPress:\n");
	printf("\tNumeric\t: n(+enter)\n");
	printf("\tForward\t: f(+enter)\n");
	printf("\tBackward\t: b(+enter)\n");
	printf("\tNumeric forward\t: fn\n");
	printf("\tNumeric backward\t: bn\n\n>>> ");
	a=getch();
	b=getch();
	printf("\n");
	if(a=='n')	b=a;
	for(i=0; talk[i]!=13; i++)	{
		talk[i]=cipher(a, talk[i]);
		if(b=='n' && talk[i]!=' ')
			printf(".%d.", talk[i]);
		else printf("%c", talk[i]);
	}
	getch();
	return 0;
}
