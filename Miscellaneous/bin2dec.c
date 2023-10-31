#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char bin[100];
	printf("Enter a binary number: ");
	scanf("%s", bin);
	int i, n, dec=0, p;
	n=strlen(bin);
	p=n-1;
	for(i=0; i<n; i++)	{
		dec+=(bin[i]-'0')*pow(2, p);
		p--;
	}
	printf("Decimal output: %d", dec);
	return 0;
}