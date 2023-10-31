/*  KTOD: A key to disk program */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    if(argc!=2) {
        puts("You forgot to enter the file name.");
        exit(1);
    }

    if((fp=fopen(argv[1], "w"))==NULL)  {
        puts("Cannot open file.");
        exit(1);
    }

    do {
        ch = getchar();
        putc(ch, fp);
    } while(ch != '$');

    fclose(fp);

    return 0;
}
