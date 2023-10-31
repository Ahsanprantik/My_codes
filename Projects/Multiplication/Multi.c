#include <stdio.h>
#include <string.h>

int main()
{
	int i, len1, len2, k, h, z, carry, j;
	char ans[1000], num1[1000], num2[1000], temp[1001];
	printf("Welcome!\nMultiply upto 100 digits.\nEnter the numbers. Just press enter.\nInput 0 to exit.\n\n");
	while(1)	{
		printf("Enter here:\n");
		scanf("%s", num1);
		if(num1[0]=='0')	{break;}
		scanf("%s", num2);
		len1=strlen(num1);
		len2=strlen(num2);
		for(k=0; k<=1000; k++)	{
			temp[k]=0;
		}
		for(k=len2-1, z=1000; k>=0; k--, z--)	{
			carry=0;
			for(j=len1-1, h=z; j>=0; j--, h--)	{
				temp[h]+=carry+(num1[j]-'0')*(num2[k]-'0');
				carry=0;
				if(temp[h]>9)	{
					carry=temp[h]/10;
					temp[h]=temp[h]%10;
				}
			}
			if(carry>0)	{
				temp[h--]=carry;
			}
			h++;
		}
		for( ; temp[h]==0; h++)	{}
		for(k=0; h<1001; k++, h++)	{
			ans[k]=temp[h]+'0';
		}
		ans[k]='\0';
		printf("\n%s\n\n", ans);
	}
	return 0;
}