/*	This program is a simple version of
	standard library printf function	*/
int putchar(int character);
int xprint(char *s, int a, ...);	/*	Prototypes	*/

int main(void)
{
	xprint("%d X %d = %d %c\n", 3, 2, 6, 'M');

	return 0;
}

int xprint(char *s, int a, ...)
{
	int i;

	for(i=0; s[i]; i++)	{
		if(s[i-1]=='%')	{
			putchar('\b');
			s[i] = a;
			if(s[i]=='d')	s[i] += '0';
		}
		putchar(s[i]);
	}

	return i;
}
/*	failed...
	variable arguments can't be reached	*/