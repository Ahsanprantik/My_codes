#include<stdio.h>
#include<string.h>
int main()
{
	char saarc[7][100]={"Bangladesh", "India", "Pakistan", "Sri lanka", "Nepal", "Bhutan", "Maldeves"};
	int row, length, col;
	for(row=0; row<7; row++)	{
		length=strlen(saarc[row]);
		for(col=0; col<length; col++)	{
		printf("(%d, %d)=%c\n", row, col, saarc[row][col]);
		}
	}
}