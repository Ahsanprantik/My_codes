#include <stdio.h>
#include <math.h>

int main()
{
	double x, y, h, k, r, t;
	FILE *op;
	op=fopen("Graph.txt", "w");
	h=10.0;
	k=20.0;
	r=2.0;
	for(x=200.0; x>0.0; x-=0.1)	{
		t=sqrt((r+x-h)*(r-x+h))+k;
		for(y=0.0; y<=200.0; y+=0.1)	{
			if(y==(int)t)	{
				fprintf(op, ".");
				printf(".");
			}
			else {
				fprintf(op, " ");
				printf(" ");
			}
		}
		fprintf(op, "\n");
		printf("\n");
	}
	printf("Finished.");
	return 0;
}
