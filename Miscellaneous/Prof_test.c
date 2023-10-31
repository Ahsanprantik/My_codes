#include <stdio.h>

int main()
{
	int i, j, w, k;
	char a[48], b[48];
	scanf("%s %s", a, b);
	for(i=0; a[i]!='\0'; i++)	{
		w=0;
		if(a[i]>'Z')	{
			if(a[i]-('a'-'A')!=b[i])	{
				if(++w>3)	{
					printf("Remove\n");
					return 0;
				}
			}
		}
	}
	printf("Kafo\n");
	return 0;
}