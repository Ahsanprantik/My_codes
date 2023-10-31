#include <stdio.h>
#include <math.h>


int main()
{
	double x, y, m, c, t;
	FILE *op;
	op=fopen("Graph.txt", "w");
	m=tan(45.0);
	c=0.0;
	for(x=200.0; x>0.0; x-=1.0)	{
		t=1.0*(m*x+c);
		for(y=0.0; y<=200.0; y+=1.0)	{
			if(y==(int)t)	{
				fprintf(op, ".");
			}
			else {
				fprintf(op, " ");
			}
		}
		fprintf(op, "\n");
	}
	return 0;
}
