/* This program demonstrates the stream buffer
    before writing to a file */

#include <stdio.h>
#include <time.h>

int main(void)
{
    int i;
    long long int init_time;
    FILE *output;
    output = fopen("Stream_file_buffer.out", "w");

    init_time = clock();
    for(i = 1; i<=30; i++) {
        while(clock() < init_time + i*CLOCKS_PER_SEC) ;
        fprintf(output, "%d s\n", i);   /* file output  */
        printf("%d s\n", i);   /* stream output  */

    }

    fclose(output);

    return 0;
}
