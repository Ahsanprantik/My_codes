#include <stdio.h>

int main()
{
	char a[]="c\0c\tc\ncc\bc c";
	int i;
	for(i=0; i<11; i++)	{
		if(a[i]!='c')	{
			printf("%c", a[i]);
			printf("%d", a[i]);
		}
		else printf("%c", a[i]);
	}
	return 0;
}