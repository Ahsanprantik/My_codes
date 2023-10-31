#include "Global_static_user_specified_series_functions.c"
//Should not know the other file's static variable in C compiler.

void main()
{
	int a;
	scanf("%d", &a);
	series_starter(a);
	while(a<500)	{
		a=series();
		series_num++;//It changes the value when compiled by C++ compiler. But C compiler would show bug just here.
	}
}
/*
Note: GCC is a C++ compiler and it supports the outer reference of a global static variable.
In that case use 'namespace'.
*/
