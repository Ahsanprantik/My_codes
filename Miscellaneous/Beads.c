#include <stdio.h>
#define len 1000

int car[len], c[len], clr, x, y, max;

int fn(int i, int st)
{
	if(car[i]==-1)	{
		if(y==1)	{//entering here but not continuing
			x=1;
			i=0;
		}
		else {
			return 0;
		}
	}
	int take1;
	if(c[i]!=clr)	{
		if(st+c[i]<4)	{
			if(c[i]!=0)	{
				clr=c[i];
			}
			take1=car[i]+fn(i+1, st+c[i]);
		}
		else {
			y=1;
			take1=0;
			}
	}
	else {
			take1=car[i]+fn(i+1, st);
	}
	if(x==0)	{
		if(c[i]!=0)	{
			clr=c[i];
		}
		int take2=fn(i+1, c[i]);
		if(take2>max)	{
			max=take2;
		}
	}
	return take1;
}

int main()
{
	int i, j, k, l, ret;
	scanf("%d", &l);
	char str[l];
	clr=-1;
	x=0;
	y=0;
	max=0;
	scanf("%s", str);
	for(i=0, j=0, k=0; str[i]!='\0'; k++)	{
		for( ; str[j]==str[++j]; )	{}
		if(str[i]=='w')	{
			c[k]=0;
		}
		if(str[i]=='r')	{
			c[k]=1;
		}
		if(str[i]=='b')	{
			c[k]=2;
		}
		car[k]=j-i;
		i=j;
	}
	car[k]=-1;
	ret=fn(0, 0);
	if(max<ret)	{
		max=ret;
	}
	printf("%d\n", max);
	return 0;
}
