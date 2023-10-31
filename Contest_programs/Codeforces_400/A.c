#include <stdio.h>
#include <string.h>

int main()
{
	int i, n;
	char kill[11], replace[11];
	scanf("%s %s %d", kill, replace, &n);
	char out[++n][2][11];
	strcpy(out[0][0], kill);
	strcpy(out[0][1], replace);

	for(i=1; i<n; ++i)	{
		scanf(" %s %s", kill, replace);
		if(!strcmp(out[i-1][0], kill))	{
			strcpy(out[i][0], replace);
			strcpy(out[i][1], out[i-1][1]);
		}
		else {
			strcpy(out[i][1], replace);
			strcpy(out[i][0], out[i-1][0]);
		}
	}

	for(i=0; i<n; ++i)	printf("%s %s\n", out[i][0], out[i][1]);

	return 0;
}