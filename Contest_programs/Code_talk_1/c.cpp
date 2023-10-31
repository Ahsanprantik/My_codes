/*	Recode needed	*/
#include <bits/stdc++.h>

#define INi(x) scanf("%d", &x)
#define INii(x, y) scanf("%d %d", &x, &y)
#define Oi(x) printf("%d\n", x)
#define Oii(x, y) printf("%d %d\n", x, y)
#define OCSi(c, x) printf("Case %d: %d\n", c, x)
#define Os(s) printf("%s\n", s)
#define OCSs(c, s) printf("Case %d: %s\n", c, s)
#define INs(s) scanf(" %s", s)
#define LP(i, end) for(i=0; i<end; i++)
#define LP1_(i, end) for(i=1; i<=end; i++)
#define ctoi(ch) ((ch)-'0')
#define itoch(i) ((i)+'0')

#define lim 23

typedef long long int LLI;

using namespace std;

struct output {
	char line[25];
	char *start;
} out[25];

int outgn(char *a, char *b)
{
	memset(out, 0, sizeof(out));

	int i, j, la, lb, mx, car, ln;

	la = strlen(a);
	lb = strlen(b);

	out[0].start = &out[0].line[lim] - la;
	out[1].start = &out[1].line[lim] - lb;

	mx = max(la, lb);

	out[2].start = &out[2].line[lim-mx];

	strcpy(out[0].start, a);
	a = out[0].start;
	strcpy(out[1].start, b);
	b = out[1].start;

	LP(i, lim)
		out[2].line[i] = '-';

	ln = 3;
	for(i=lim; i-1 && out[1].line[i]; i--, ln++)
	{
		car = 0;
		putchar(*a);
		for(j=lim; j-1 && out[0].line[j]; j--)
		{
			car += ctoi(out[0].line[j]) * ctoi(out[0].line[i]);
			out[ln].line[j] = itoch(car%10);
			car = car/10;
		}
		for( ; j-1 && car; j--)	{
			out[ln].line[j] = itoch(car%10);
			car = car/10;
		}
		out[ln].start = &out[ln].line[j+1];
		if(lim-j>mx)	mx = lim-j;
	}
	puts(out[3].start);

	if(lb==1)	return mx;

	LP(j, lim+1)
		out[ln].line[j] = '-';

	ln++;
	car = 0;
	int lnt;
	LP(i, mx)
	{
		for(lnt=3; lnt<ln-1; lnt++)
		{
			if(out[lnt].line[lim-i])
				car += ctoi(out[lnt].line[lim-i]);
		}
		out[ln].line[lim-i] = itoch(car%10);
		car = car/10;
	}
	while(car)
	{
		out[ln].line[lim-i] = itoch(car%10);
		car = car/10;
		i++;
	}
	mx = i;

	ln--;
	out[ln].start = &out[ln].line[lim] - mx;

	return mx;
}
		


int main()
{
	int i, j, sp;
	char a[25], b[25];
	
	while(1)	{
		INs(a);
		if(a[0]=='0')	break;
		INs(b);

		sp = outgn(a, b);
		for(i = 0; i<25; i++)	{
			if(!(out[i].line[0]))	break;

			for(j = lim-sp; j<lim && !out[i].line[j]; j++)
				putchar(' ');

			puts(out[i].start);
		}
	}


    return 0;
}
