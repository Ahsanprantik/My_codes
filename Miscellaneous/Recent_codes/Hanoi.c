#include <stdio.h>

void hanoi(char x, char y, char z, int n)
{
	if(n>0)	{
		hanoi(x, z, y, n-1);
		printf("Disk %d from %c to %c\n", n, x, y);
		hanoi(z, y, x, n-1);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	hanoi('A', 'B', 'C', n);

	return 0;
}