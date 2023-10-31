#include <stdio.h>

int main(void)
{
	int c, v, v1, a, l, p, d;

	scanf("%d %d %d %d %d", &c, &v, &v1, &a, &l);

	for(p=0, d=0; p<c; p+=v, d++)	{
		if(d)	{
			p -= l;
			if(v<=v1)	{
				v += a;
				if(v>v1)	v = v1;
			}
		}
	}
	printf("%d\n", d);

	return 0;
}