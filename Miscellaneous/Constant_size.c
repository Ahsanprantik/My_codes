#include <stdio.h>
#include <mylib.h>

void main()
{
	printf("%d\n", sizeof(10));
	printf("%d\n", sizeof(12.3L));	//! 12 bytes long double
	printf("%d\n", sizeof('A'));	//Character constant automatically turns into integer.
	printf("%d\n", sizeof(6356634786758576898798));	//! 16 bytes unknown type
}
