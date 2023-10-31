#include <stdio.h>

int main()
{
	FILE *pFile;
	char file[20];
	int n;
	scanf("%s", &file); //check for .txt again
	pFile=fopen(file, "r");
	fscanf(pFile, "%d", &n);
	fclose(pFile);
	printf("%d\n", n);
	return 0;
}