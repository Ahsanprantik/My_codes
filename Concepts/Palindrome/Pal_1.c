#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, k, l, m, mod, len, t, y, x;
	char a;
	scanf("%d", &t);
	char pal[t][1000000], num[t][1000000];
	for(i=0; i<t; i++)	{
		scanf("%s", &num[i]);
		len=strlen(num[i]);
		if(strlen(num[i])%2==0)	{
			j=len/2-1;
			k=len/2;
		}
		if(strlen(num[i])%2==1)	{
			j=len/2;
			k=j;
		}
		if(num[i][j]>num[i][k])	{
			a=1;
		}
		if(num[i][j]<num[i][k])	{
			a=0;
		}
			for(l=j, m=k; l>=0; l--, m++)	{
				if(num[i][l]<num[i][m])	{
					a=0;
					break;
				}
				if(num[i][l]>num[i][m])	{
					a=1;
					break;
				}
				if(l==0)	{
					a=0;
				}
			}
		if(a==0)	{
			num[i][j]++;
			for(x=j; num[i][x]>'9'; x--)	{
			num[i][x]='0';
			if(x!=0)	{
				num[i][x-1]++;
			}
			if(x==0)	{
				num[i][0]='1';
				k++;
				num[i][j+1]='0';
			}
			}
		}
		for( ; j>=0; j--, k++)	{
			num[i][k]=num[i][j];
		}
	}
	for(i=0; i<t; i++)	{
		printf("%s\n", num[i]);
	}
	return 0;
}