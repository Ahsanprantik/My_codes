#include <stdio.h>
#include <math.h>

float f(float m, float x, float c)
{
	float y;
	y=m*x+c;
	return y;
}

int main()
{
	FILE *output;
	output=fopen("GRAPH.txt", "w");
	float y;
	int i, j, size_x, size_y, m, c;
	printf("Graph width\t: ");
	scanf("%d", &size_x);
	printf("Graph height\t: ");
	scanf("%d", &size_y);
	printf("\nf(x)= mx + c\n");
	printf("\nm = ");
	scanf("%f", &m);
	printf("\nc = ");
	scanf("%f", &c);
	if(c>size_x)    {
        printf("\nInvalid. Please restart.");
        getch();
        return 0;
	}
	for(i=size_x-1; i>=0; i--)	{
		y=f(m, i, c);
		printf("%f\n", m*i);
		for(j=0; j<size_y; j++)	{
			if(j==(int)y)	{
				printf("%d %d %f\n", i, j, y);
				fprintf(output, ".");
			}
            else if(i==0 || i==size_x-1)	{
			fprintf(output, "-");
			}
			else if(j==0 ||  j==size_y-1)   {
			fprintf(output, "|");
			}
			else {
			fprintf(output, " ");
			}
		}
		fprintf(output, "\n");
	}
	printf("\nOpen 'GRAPH.txt' file. Press any key.....");
	getch();
	return 0;
}