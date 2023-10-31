#include <stdio.h>

int main()
{
	int T, i, s, m, j;
	scanf("%d", &T);
	char sm[100];
	for(i=0;i<T;i++)
	{
		scanf(" %s",sm);
		s=0, m=0;
		for(j=0; sm[j]; j++)
		{
			if(sm[j]=='s') s++;
			else if(sm[j]=='m')
			{
				if(!j)	{
					if(sm[j+1]=='s')	sm[j+1] = '*';
				}
				else {
					if(sm[j-1]=='s')	s--;
					else if(sm[j+1]=='s')	sm[j+1] = '*';
				}
				m++;
			}
		}

		if(s>m) printf("snakes\n");
		else if(s==m) printf("tie\n");
		else printf("mongooses\n");
	}

	return 0;
}