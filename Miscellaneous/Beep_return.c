#include <stdio.h>
#include <mylib.h>
#include <windows.h>

void main()
{
	int a, f, t;
	while(1)	{
		scanf("%d %d", &f, &t);
		a=Beep(f, t);
		printf("%d\n", a);
		if(getch()==27)	break;
	}
}
