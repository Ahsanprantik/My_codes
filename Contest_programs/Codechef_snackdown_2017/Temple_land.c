#include <stdio.h>

/*	function that returns 1 for cobra shaped landstrip
	and 0 for other shaped landstrip	*/
int coiled(int n, int mid)
{
	int a, b, ret;

	ret = 1;	/*	initialized by 1	*/

	if(!(1&n))	ret = 0;	/*	Even value will always make the answer "no"	*/

	a = 1;	/*	a is a variable that increases and dicreases
				according to the problem statement	*/
	while(n--)	{
		scanf("%d", &b);
		if(a!=b)	ret = 0;
		if(n>mid)	a++;
		else a--;
	}

	if(b!=1)	ret = 0;	/*	last check	*/

	return ret;
}

int main()
{
	int s, n;
	scanf("%d", &s);
	while(s--)	{
		scanf("%d", &n);
		if(coiled(n, n/2))	printf("yes\n");	/*	If 1: cobra shaped	*/
		else printf("no\n");	/*	If 0: not cobra shaped	*/
	}
	return 0;
}