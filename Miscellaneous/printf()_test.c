#include <stdio.h>

int main()
{
	char a[]="Bangladesh '%d '%d '%dc  golden years.";
	a[23]='\b'; //force character before golden
	int b[]={52, 69, 71};
	printf(a, b[0], b[1], b[2]);
}