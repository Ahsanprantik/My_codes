#include <stdio.h>

int main()
{
	/* i is local to for loop;
	   j is known outside loop; */
	int j;

	for(int i=1; i<=10; i++)	{
		j=i*i;
		printf("%d\n", j);
	}
	/* i=0;	/* *** Error *** -- i not known here!
	   (error: name lookup of ‘i’ changed for ISO ‘for’ scoping [-fpermissive]) */

	return 0;
}