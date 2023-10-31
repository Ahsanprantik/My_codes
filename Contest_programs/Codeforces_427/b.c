#include <stdio.h>

int stod(char *num)
{
	int i = 0;

	while(*num)	{
		i += *num - '0';
		num++;
	}

	return i;
}

int digdif(char *num, int k)
{
	int i, cnt;
	char c;

	cnt = 0;
	for(c='0'; c<='9'; c++)	{
		for(i=0; num[i]; i++)	{
			if(num[i]==c)	{
				k -= '9' - c;
				cnt++;
				if(k<=0)	return cnt;
			}
		}
	}
}

int main(void)
{
	int k, dd;
	char num[100100];
	scanf("%d %s", &k, num);

	k -= stod(num);
	if(k<=0)	printf("0\n");
	else {
		dd = digdif(num, k);
		printf("%d\n", dd); 
	}

	return 0;
}