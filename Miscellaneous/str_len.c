 #include <stdio.h>
 int string_length(char str[])
 {
     int i;
     for(i = 0; str[i] != '\0'; i++);
     return i;
 }
main()
{
    int i;
    char a[i];
    scanf("%s", a);
    i=string_length(a);
    printf("%d", i);

}
