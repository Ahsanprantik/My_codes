#include <stdio.h>

int main(void)
{
	int s, v1, v2, t1, t2, one, two;
	scanf("%d %d %d %d %d", &s, &v1, &v2, &t1, &t2);

	one = s*v1 + 2*t1;
	two = s*v2 + 2*t2;

	if(one<two)	printf("First\n");
	else if(one>two)	printf("Second\n");
	else printf("Friendship\n");

	return 0;
}