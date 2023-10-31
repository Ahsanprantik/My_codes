#include <stdio.h>
//This function returns index of the character specified if it is contained within the string; -1 if it is not.
int string_check(const char *s, const char c)//'*s' for the string & 'c' for the character to find.
{
	int i=0;
	while(s[i])	{
		if(s[i]==c)	{
			return i;//Found. Returns index.
		}
		i++;
	}
	return -1;//Not found. Returns -1.
}

void main()
{
	char *s="Bangladesh";
	int a;
	a=string_check(s, 'l');
	printf("%d", a);//s[4]='l'
}
//Used: 1
