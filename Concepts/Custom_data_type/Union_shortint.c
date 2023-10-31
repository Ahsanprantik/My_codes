#include <stdio.h>

union pw	{
	short int i;
	char ch[2];
};

int ptw(short int num, FILE *fp);

int main(void)
{
	FILE *fp;

	fp = fopen("Hold_shortint.tmp", "wb+");

	ptw(1000, fp);	/*	write the value 1000 as an integer	*/
	fclose(fp);

	return 0;
}

int ptw(short int num, FILE *fp)
{
	union pw word;

	word.i = num;
	putc(word.ch[0], fp);	/*	prints the first byte	*/
	return putc(word.ch[1], fp);	/*	prints the second byte	*/
}