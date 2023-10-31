#include <stdio.h>
#include <windows.h>

main()
{
	int c, a;
	char d;
	scanf("%d", &c);
    while(c<30000)	{
		d=getch();
		scanf("%d", &a);
		if(d=='+')	c+=a;
		if(d=='-')	c-=a;
		Beep(c, 5000);
    }
}
