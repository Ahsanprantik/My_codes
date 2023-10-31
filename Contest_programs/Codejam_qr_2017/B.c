#include <stdio.h>
#include <string.h>

void cook(char n[])
{
	int l=strlen(n), i, j;
	for(i=0; i<l-1; i++)	{
		if(n[i]>n[i+1])	{
			for(j=i; n[j]==n[i] && j+1; j--);
			j++;
			n[j]--;
			j++;
			for( ; j<l; j++)	n[j]='9';
			break;
		}
	}
	for(i=0; i<l-1 && n[i]=='0'; i++);
	for(j=0; i<l; i++, j++)	n[j]=n[i];
	n[j]='\0';
}

int main()
{
	char n[20];
	int t, i;
	scanf("%d", &t);
	
	for(i=1; i<=t; i++)	{
		scanf(" %s", &n);
		cook(n);
		printf("Case #%d: %s\n", i, n);
	}
	
	return 0;
}