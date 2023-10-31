 #include <stdio.h>
void test_fnc(int ara[])
{
    int i;
    for(i=0; i<5; i++) {
    ara[i]=100;
    }
    return;
}
int main()
{
    int i;
    int ara[]={1, 2, 3, 4, 5};
    for(i=0; i<5; i++) {
    printf("%d\n", ara[i]);
    }
    printf("\n");
    test_fnc(ara);
    for(i=0; i<5; i++) {
    printf("%d\n", ara[i]);
    }
    return 0;
}
