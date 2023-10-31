#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[1010], alpha[26];
	int ch, difL, sameL;
	int k, i;

	scanf("%s %d", s, &k);

	if(k>26)	{
		printf("impossible\n");
		return 0;
	}

	memset(alpha, 0, sizeof(alpha));
	difL = 0;
	sameL = 0;
	for(i=0; s[i]; i++)	{
		ch = s[i] - 'a';
		if(!alpha[ch])	difL++;
		alpha[ch]++;
		if(alpha[ch]>1)	sameL++;
	}

	k -= difL;

	if(k<=sameL)	printf("%d\n", k);
	else printf("impossible\n");

	return 0;
}
