#include <stdio.h>

int main()
{
	int a[4]={0, 0, 1, 1};
	int b[4]={0, 1, 0, 1};
    int i;
	printf(" A\t B\t!A\tA|B\tA&b\tA^B\n");
	printf("---\t---\t---\t---\t---\t---\n");
	for(i=0; i<4; i++) {
        printf(" %d\t", a[i]);
        printf(" %d\t", b[i]);
        printf(" %d\t", !a[i]);
        printf(" %d\t", a[i]|b[i]);
        printf(" %d\t", a[i]&b[i]);
        printf(" %d", a[i]^b[i]);
        printf("\n");
	}
	return 0;
}