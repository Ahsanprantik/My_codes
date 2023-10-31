/*  DTOS:   A program that reads files and displays them
            on the screen   */
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

    ch = getc(fp);

    while(ch != EOF) {
        putchar(ch);
        ch = getc(fp);
    }

    fclose(fp);

    return 0;
}
