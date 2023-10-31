#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char bin[100], temp[100];
	int i, j, dec;
	printf("Enter a decimal number: ");
	scanf("%d", &dec);
	for(i=0; dec!=0; i++)	{
		temp[i]=dec%2+'0';
		dec=dec/2;
	}
	temp[i]='\0';
	j=strlen(temp)-1;
	for(i=0; temp[i]!='\0'; i++, j--)	{
		bin[j]=temp[i];
	}
	bin[i]='\0';
	printf("Binary output: %s", bin);
	return 0;
}