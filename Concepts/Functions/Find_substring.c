#include <stdio.h>

int find_substr(char *s1, char *s2);

int main()
{
	if(find_substr("C++ is fun.", "is")!=1)
		printf("substring is found\n");

	return 0;
}

/*	Return index of first match of s2 in s1	*/
int find_substr(char *s1, char *s2)
{
	register int t;
	char *p1, *p2;

	for(t=0; s1[t]; t++)	{
		p1 = &s1[t];
		p2 = s2;

		while(*p2 && *p1==*p2)	{
			p1++;
			p2++;
		}
		if(!*p2)	return t;	/*	1st return	*/
	}
	return -1;	/* 2nd return	*/
}