#include<stdio.h>
#include<math.h>
#include<string.h>
void d2b(int dec, char bin[])
{	
	char temp[100];
	int i, j;
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
}
int main()
{
	int dec;
	char bin[100];
	printf("Enter a decimal number: ");
	scanf("%d", &dec);
	d2b(dec, bin);
	printf("Binary output: %s", bin);
	return 0;
}