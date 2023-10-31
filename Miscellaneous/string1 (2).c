#include <stdio.h>
#include <string.h>
int main()
{
	char str[1002], ch;
	int i, is=0, n;
	gets(str);
	n=strlen(str);
	for(i=0; i<=n; i++)	{
		if(str[i]>='a' && str[i]<='z')	{
			if(is==0)	{
				is=1;
				ch=str[i]+'A'-'a';
				printf("%c", ch);
			}
			else {
				printf("%c", str[i]);
			}
		}
			else if((str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))	{
				if(is==0)	{
					is=1;
				}
				printf("%c", str[i]);
			}
			else {
				if(is==1)	{
					is=0;
					printf("\n");
				}
				}
		}
}