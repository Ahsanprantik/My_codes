#include <stdio.h>
#include <string.h>
int main()
{
	char str[1002], word[100];
	int i, is=0, n, j=0;
	gets(str);
	n=strlen(str);
	for(i=0; i<=n; i++)	{
		if(str[i]>='a' && str[i]<='z')	{
			if(is==0)	{
				is=1;
				word[j]=str[i]+'A'-'a';
				j++;
			}
			else {
				word[j]=str[i];
				j++;
			}
		}
			else if(str[i]>='A' && str[i]<='Z')	{
				if(is==0)	{
					is=1;
					word[j]=str[i];
					j++;
				}
				else {
				word[j]=str[i]-'A'+'a';
				j++;
				}
			}
			else if(str[i]>='0' && str[i]<='9')	{
				if(is==0)	{
					is=1;
				}
				word[j]=str[i];
				j++;
			}
			else {
				if(is==1)	{
					is=0;
					word[j]='\0';
					printf("%s\n", word);
					j=0;
				}
			}
		}
}