/* Count spaces */
#include <stdio.h>

int main()
{
	char s[80], *str;
	int spc;

	gets(s);
	str = s;	/* copy string location;
				's' should not be changed */
	for(spc=0; *str; str++)	{
		if(' ' != *str)	continue;
		spc++;
	}
	printf("%d spaces\n", spc);

	return 0;
}