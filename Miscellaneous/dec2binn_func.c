#include <stdio.h>

int dec2bin()
{
	int dec, i, j, mid, temp, size=0;
	char bin[64];
	scanf("%d", &dec);
	for(i=dec, j=0; i>0; i=i/2)	{
		bin[j++]=i%2;
		printf("%d\n", i%2);
	}
	while(bin[size++]);
	mid=size/2;
	for(i=0, j=size; j>mid; i++, j--)	{
		temp=bin[i];
		bin[i]=bin[j];
		bin[j]=temp;
	}
	for(i=0; i<size; i++) {printf("%d", bin[i]);}
	return 0;
}

int main()
{
	dec2bin();
	return 0;
}