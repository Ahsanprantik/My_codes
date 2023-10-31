#include <stdio.h>
/*Formula:
x1+x2+x3+....+x[n-1]+x[n]=0
=> x[n]=-x1-x2-x3-....-x[n-1]
*/
void main()
{
	int n, i, x, xn;
	
	scanf("%d", &n);
	xn=0;	//initial value '0'
	
	for(i=0; i<(n-1); i++) { //closed after (n-1)th input
		
		scanf("%d", &x); //input i th variable
		
		xn-=x;	//decrement of variable x[i]
	}
	
	printf("%d\n", xn); //Last variable value...
}