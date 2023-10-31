#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h=0, i, j, l, k=0;
	char str[11][11];
	for(i=0; i<11; i++)	{
		for(j=0; j<11; j++)	{
			putpx(str[i], str[j], blue);
		}
			if(i<5)	{
				k++;
			}
			else {
				k--;
			}
	}
	return 0;
}