#include <stdio.h>
#include <string.h>
#include <math.h>
//ok
int main()
{
	int j, num[2], exp=0;
	char *dec="192.168.0.100";
	num[0]=0;
	j=strlen(dec);
	while(j>0 && dec[--j]!='.')	{
		num[0]+=((int)pow(10, exp)*(dec[j]-'0'));
		exp++;
	}
	printf("%d", num[0]);
}