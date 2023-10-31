#include <stdio.h>

void sort_non_increasing(int A[])
{
	int A_length=sizeof(A)/sizeof(int);
	int i, j, key;
	for(i=0; i<A_length; i++)	{
		key=A[i];
		j=i-1;
		while(j>=0 && A[j]<key)	{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
	return;
}

int main()
{
	int A[9]={23, 43, 22, 11, 7, 23, 46, 73, 11};
	sort_non_increasing(A);
	int i;
	for(i=0; i<9; i++)	{
		printf("%d ", A[i]);
	}
	return 0;
}

