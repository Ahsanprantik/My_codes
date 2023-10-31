#include<stdio.h>
int main()
{
	char saarc[7][100]={"Bangladesh", "India", "Pakistan", "Bhutan", "Nepal", "Sri lanka", "Maldeves"};
	int row;
	for(row=0; row<7; row++)	{
		printf("%s\n", saarc[row]);
	}
}