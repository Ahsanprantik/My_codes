#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i, j, up;
	char a[27], b[27], s[1002], temp, ans[1002];

	scanf("%s %s %s", a, b, s);

	up = 0;
	for(i=0; s[i]; i++)	{
		if('A'<=s[i] && s[i]<='Z') {
			up = 1;
			temp = tolower(s[i]);
		}
		else temp = s[i];
		if('0'<=s[i] && s[i]<='9')	temp = s[i];
		else {
			for(j=0; a[j]; j++)
				if(temp==a[j])	break;
			if(up)	{
				temp = toupper(b[j]);
				up = 0;
			}
			else temp = b[j];
		}
		ans[i] = temp;
	}
	ans[i] = '\0';

	printf("%s\n", ans);

	return 0;
}