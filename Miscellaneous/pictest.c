#include <stdio.h>
#include <math.h>

long long int size=pow(2, 31);

int main()
{
	long long int i=1;
	int s=size, j;
	for(j=0; j<33333335; j++)	{
		i+=1234567890;
		if(i>=size)	{
			i-=size;
		}
		if(i<s)	{
			s=i;
		}
		if(i<0)	{
			break;
		}
	}
	printf("%d %d %d", i, s, j);
	return 0;
}