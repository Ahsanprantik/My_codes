#include <stdio.h>

float f(float m, float x, float c)
{
	float y;
	y=m*x+c;
	return y;
}

int main()
{
	FILE *output;
	output=fopen("GRAPH.doc", "w");
	float y;
	char ch;
	int i, j, size_x, size_y;
	scanf("%d%c%d", &size_x, &ch, &size_y);
	for(i=size_x-1; i>=0; i--)	{
		y=f(-2, i, 20);
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
