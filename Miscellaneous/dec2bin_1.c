#include<stdio.h>
#include<math.h>

int main()
{
	int dec, j;
	char i=0;
	printf("Enter a decimal integer: ");
	scanf("%d", &dec);
	while(1)	{
		if(pow(2, i)>dec)	{
			i--;
			j=pow(2, i);
			break;
		}
		else {
			i++;
		}
	}
	char x=i, bin[i+1];
	bin[0]='b';
	while(i>=0)	{
		if(j+pow(2, i)<=dec)	{
			j+=pow(2, i);
			bin[i]='1';
		}
		else {
			bin[i]='0';
		}
		i--;
		printf("-");
	}
	bin[x]='\0';
	printf("Binary output: %s   %d", bin, j);
}