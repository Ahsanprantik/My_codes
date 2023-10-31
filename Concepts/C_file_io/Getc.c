#include <stdio.h>

int main(void)
{
    FILE *fp;
    char ch;

    if((fp = fopen("Chars.txt", 'w+')) == NULL)  {
        puts("Cannot open file.\n");
        exit(1);
    }

    do {
        ch = getc(fp);
        if(ch!=EOF) putchar(ch);
    } while(ch!=EOF);

    if(fclose(fp)== EOF)
        puts("Error occurred when closing the file.");

    else puts("All characters written successfully.");

    return 0;
}
