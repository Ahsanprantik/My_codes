#include <stdio.h>

void main()
{
	long long int hex1, hex2, hex_ans;
	char sign;
	scanf("%x %c %x", &hex1, &sign, &hex2);
	if(sign=='+')	hex_ans=hex1+hex2;
	if(sign=='-')	hex_ans=hex1-hex2;
	printf("%d", hex_ans);
}
//Pending.
