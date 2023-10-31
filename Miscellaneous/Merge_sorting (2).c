#include <stdio.h>

int main()
{
	int a[8]={54, 67, 55, 52, 50, 61, 71, 65};
	int b[8];
	int i, m, j;
	for(j=1; j<8; j++)	{
		for(i=0; i<8; i+=2)	{
			if(a[i]>a[i+j])	{
				m=a[i];
				a[i]=a[i+j];
				a[i+j]=m;
			}
		}
	}
	
	for(i=0; i<6; i++)	{
		printf("%d ", a[i]);
	}
}