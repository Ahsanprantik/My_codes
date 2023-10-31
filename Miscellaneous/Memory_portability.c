#include <stdio.h>
//!Runtime error...
void put_rec(int rec[6], FILE *fp)
{
	int len;
	len=fwrite(rec, sizeof(int)*6, 1, fp);
	if(len!=1) printf("Write error.\n");
}

void main()
{
	FILE *file1;
	int ara[]={1, 2, 3, 4, 5, 6};

	file1=fopen("Mem_port.txt", "w");
	put_rec(ara, file1);
}
