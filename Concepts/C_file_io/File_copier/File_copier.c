/*  Copy a file    */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, int *argv[])
{
    FILE *in, *out;
    char ch;

    if(argc!=3) {
        puts("You forgot to enter a file name.");
        exit(1);
    }

    if((in=fopen(argv[1], "rb"))==NULL) {
        puts("Cannot open source file.");
        exit(1);
    }
    if((out=fopen(argv[2], "wb"))==NULL)    {
        puts("Cannot open destination file.");
        exit(1);
    }

    /*  This code actually copies the file */
    while(!feof(in))    {
        ch = getc(in);
        if(!feof(in))   putc(ch, out);
    }

    fclose(in);
    fclose(out);

    return 0;
}
