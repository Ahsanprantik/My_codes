/* This program writes a structure to a disk file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct account{
	float balance;
	char name[80];
} cust, tmp;

int main(void)
{
	FILE *fp;

	if((fp=fopen("test.account", "wb+"))==NULL)	{
		printf("Cannot open file.\n");
		exit(1);
	}
	cust.balance = 2000 + 100 + 20 + 10 + 10 + 5 + 2.50;
	strcpy(cust.name, "Prantik");

	fwrite(&cust, sizeof(struct account), 1, fp);

	if(ferror(fp))	{
		printf("An error occurred while writing the file.\n");
		exit(1);
	}

	rewind(fp);

	fread(&tmp, sizeof(struct account), 1, fp);

	printf("%f %s\n", tmp.balance, tmp.name);

	fclose(fp);

	return 0;
}
