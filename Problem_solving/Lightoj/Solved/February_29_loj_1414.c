#include <stdio.h>
#include <string.h>

char months[12][10]={
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

struct date {
	int m;
	int d;
	int y;
} ;

int strfind(char *mcmp)
{
	int i;

	for(i=0; i<=12; i++)
		if(!strcmp(months[i], mcmp))	return i+1;

	return 0;	/*	No match	*/
}

int calc_leap(struct date in, struct date end)
{
	int cnt;

	/*	initializations	*/
	if(in.m>2)	in.y++;
	if(end.m==1 || (end.m==2 && end.d<29))	end.y--;

	cnt = 0;

	/*	calculation	*/
	while(in.y%400 && in.y<=end.y)	{
		if(!(in.y%4) && in.y%100)	cnt++;
		in.y++;
	}

	while(end.y%400 && in.y<=end.y)	{
		if(!(end.y%4) && end.y%100)	cnt++;
		end.y--;
	}
	if(end.y < in.y)	return cnt;

	cnt += 97*((end.y-in.y)/400) + 1;

	return cnt;
}

int main()
{
	char mm[10], ch;
	struct date init, end;
	int i, t, j, count;

	scanf("%d", &t);

	for(i=1; i<=t; i++) {
		scanf("%s %d%c %d", mm, &init.d, &ch, &init.y);
		init.m = strfind(mm);
		scanf("%s %d%c %d", mm, &end.d, &ch, &end.y);
		end.m = strfind(mm);
		
		count = calc_leap(init, end);
		
		printf("Case %d: %d\n", i, count);
	}

	return 0;
}
/*
4
January 12, 2012
March 19, 2012
August 12, 2899
August 12, 2901
August 12, 2000
August 12, 2005
February 29, 2004
February 29, 2012

*/
