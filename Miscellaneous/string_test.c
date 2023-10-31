#include <stdio.h>

main()
{
	char a[10]="Bangla";
	char b[4]="desh";
	printf("%d", a[6]);
	for(int i=0; i<=4; i++)	{
		a[i+6]=b[i];
	}
	printf("%s", a);
}