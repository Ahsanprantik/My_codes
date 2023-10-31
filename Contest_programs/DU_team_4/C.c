#include <stdio.h>
#include <string.h>

int main()
{
	int i, add;
	char txt[100000], neg[100000];
	scanf("%s %s", txt, neg);
	add = strlen(neg);

	for(i=0; txt[i]; ++i)	{
		txt[i] -= (neg[i]-'A');
		if(txt[i]<'A')	txt[i] = 'Z' - 'A' + txt[i] + 1;
		neg[i+add] = txt[i];
	}

	printf("%s\n", txt);
}