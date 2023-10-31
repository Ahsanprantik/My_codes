#include <stdio.h>
#include <string.h>

int main()
{
	char str[128], substr[128];
	int t, i, len1, len2, j, k;
	scanf("%d", &t);
	int pos[t];
	for(k=0; k<t; k++)	{
		scanf("%s %s", str, substr);
		len1=strlen(str);
		len2=strlen(substr);
		for(i=0; i<len1; i++)	{
			if(str[i]==substr[0])	{
				for(j=0; j<len2; j++)	{
					if(str[i+j]!=substr[j])	{
						break;
					}
				}
			}
				if(j==len2)	{
					pos[k]=i;
					break;
				}
		}
		if(i==len1)	{
			pos[k]=-1;
		}
	}
	for(k=0; k<t; k++)	{
		printf("%d\n", pos[k]);
	}
	return 0;
}