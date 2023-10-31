#include <stdio.h>
#include <string.h>

int main()
{
	char st[101], temp[101], tmp2[101];
	int i, j, count, max, lim1, len, k;

	scanf("%s", st);

	len = strlen(st);
	lim1 = len/2;
	max = 0;

	for(i=2; i<lim1; ++i)	{
		for(j=0; (j+i-1)<len; ++j)	{
			strcpy(temp, &st[j]);
			k = j+i;
			temp[i] = '\0';
			for(count=1; k<len; k++)	{
				strcpy(tmp2, &st[k]);
				tmp2[i] = '\0';
				if(!strcmp(tmp2, temp))	count++;
			}
			count = count*(i-1)-i;
			if(count>max)	max = count;
		}
	}
	if(!max)	printf("%d\n", len);
	else {
		printf("%d\n", len-max);
	}

	return 0;
}