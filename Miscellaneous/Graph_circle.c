#include <stdio.h>
#include <math.h>

float f(float x)
{
	float y, h, k, c;
	h=5;
	k=5;
	c=5;
	y=sqrt(c*c-(x-h)*(x-h))-k;
	return y;
}

int main(void)
{
	FILE *output;
	output=fopen("GRAPH_circle.txt", "w");
	float y;
	int i, j, size_x, size_y;
	scanf("%d %d", &size_x, &size_y);
	for(i=size_x-1; i>=0; i--)	{
		y=f(i);
		for(j=0; j<size_y; j++)	{
			if(j==y)	{
			fprintf(output, "c");
			printf("c");
			}
            else if(i==0 || j==0 || i==size_x-1 || j==size_y-1)	{
			fprintf(output, "c");
			printf(" ");
			}
			else {
			fprintf(output, " ");
			}
		}
		fprintf(output, "\n");
        printf("\n");
	}
	return 0;
}
