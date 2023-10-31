#include <stdio.h>
//Matches with recursive function, but does not use memory like recursive. Probably works only like simple recursive.)
int series(int num)
{
	num=num+23;
	return num;
}

void main()
{
	int s=series(100);//initialized by 100
	while(s<500)	{
		printf("%d\n", s);
		s=series(s);//Crucial line.....Actually doing s=s+23
	}
	return;
}
