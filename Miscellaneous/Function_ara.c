#include <stdio.h>
/*
This program is to check if an array in a function parameter changes value of a main function array.
And what happens to a single element of it in the parameter.
Array 'a' in the 1st parameter is meant to change the value of a[0] and the 2nd parameter a[1] meant not to be chage itself.
*/
void alter_ara(int num[], int n)//1st parameter is an array and second is a single variable.
{
	num[0]++;
	n++;
}

void main()
{
    int a[2];
    a[0]=0;
    a[1]=0;
    printf("\n%d %d", a[0], a[1]);
    alter_ara(a, a[1]);
    printf("\n%d %d", a[0], a[1]);//Array element value is changed when the entire array is given. But array element value is not changed when given alone.
    return;
}
//Array item is changed by a function only when the whole array is mentioned in the function.