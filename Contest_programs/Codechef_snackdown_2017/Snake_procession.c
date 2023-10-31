#include <stdio.h>

int ifvalid(void)
{
	int l, i;
	scanf("%d", &l);
	char str[l+1], tmpch;

	scanf(" %s", str);

	for(i=0, tmpch='.'; i<l; i++)	{
		if(str[i] == 'T')	{
			if(tmpch == 'H')	tmpch = str[i];
			else return 0;
		}
		else if(str[i] == 'H')	{
			if(tmpch == 'H')	return 0;
			else tmpch = str[i];
		}
	}
	if(tmpch=='H') return 0;
	return 1;
}

int main()
{
	int r, l;

	scanf("%d", &r);

	while(r--)	{
		if(ifvalid())	printf("Valid\n");
		else printf("Invalid\n");
	}

	return 0;
}