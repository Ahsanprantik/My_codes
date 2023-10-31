#include <stdio.h>

int main(void)
{
    FILE *fp;
    int is_eof;

    fp = fopen("Chars.txt", "w");

    do {
    putc('B', fp);
    putc('A', fp);
    putc('N', fp);
    putc('G', fp);
    putc('L', fp);
    putc('A', fp);
    putc('D', fp);
    putc('E', fp);
    putc('S', fp);
    is_eof = putc('H', fp);
    } while(is_eof == EOF);

    if(fclose(fp)== EOF)
        puts("Error occurred when closing the file.");

    else puts("All characters written successfully.");

    return 0;
}
