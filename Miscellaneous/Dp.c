#include <stdio.h>

int ara[106][106];

int fn(int h, w)
{
	if(h<0 || w<0)	return 0;
	if(h==0 && w==0)	{
		count++;
		return 0;
	}
	if