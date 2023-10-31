#include <stdio.h>

int main()
{
	int i, l, r, k, m, temp, len;
	char str[10001];
	scanf("%s", str);
	scanf("%d", &m);
	while(m--)	{
		scanf("%d %d %d", &l, &r, &k);
		len=r-l;
		char cpy[len];
		k=k % len;
		for(i=0; i<len; i++)	{
			temp=(i+k)%len;
			cpy[temp]=str[l-1+temp];
		}
		for(i=0; i<len; i++)	{
			str[l-1+i]=cpy[i];
		}
	}
	printf("%s\n", str);

	return 0;
}
