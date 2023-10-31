#include <stdio.h>

int main()
{
    int num1, num2, value;
    char sign;
    printf("Please enter a number: ");
    scanf("%d", &num1);
    printf("Please enter another number: ");
    scanf("%d", &num2);
    value=num1+num2;
    sign='+';
    printf("%d%c%d=%d\n", num1, sign, num2, value);
    //sum printed
    value=num1-num2;
    sign='-';
    printf("%d%c%d=%d\n", num1, sign, num2, value);
    //sub printed
    value=num1*num2;
    sign='*';
    printf("%d%c%d=%d\n", num1, sign, num2, value);
    //multiplication printed
    value=num1/num2;
    sign='/';
    printf("%d%c%d=%d\n", num1, sign, num2, value);
    /*devision printed
    one print can be added*/

    return 0;
}
