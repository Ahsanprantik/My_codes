#include <stdio.h>

int main(void)
{
	char ch;
	FILE *fp;

	fp = fopen("All_chars_gcc.tmp", "wb+");

	for(ch=-128; 1; ch++)	{
		fprintf(fp, "%d ", ch);
		putc(ch, fp);
		putc('\n', fp);
		if(ch==127)	break;
	}

	return 0;
}