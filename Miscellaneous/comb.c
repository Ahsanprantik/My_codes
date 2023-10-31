#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int i, j;
	char st[106];
	scanf("%s", &st);
	int len;
	len=strlen(st);
	for(i=0; i<len; i++)	{
		if(i!=0 && st[i]!=st[i-1])	{
			break;
		}
	}
	for(j=len-1; i>=0; j--)	{
		if(j!=len-1 && st[j]!=st[j+1])	{
			break;
		}
	}
	int x=1;
	if(i==0 || j==len-1)	{
		x=0;
	}
	i--;
	j=len-j-2;
	long long int ans=len*len-2*i-2*j-x*(len+2);
	printf("%lld %d %d", ans, i, j);
	return 0;
}