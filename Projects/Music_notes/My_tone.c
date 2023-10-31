#include <stdio.h>
#include <stdbool.h>
#include <mylib.h>
#include <windows.h>
//Program to create notes.

bool my_exit_tone(const char ch)
{
	int i;
	int note[8]={512, 480, 427, 384, 341, 320, 288, 256};
	if(ch==27)	{
		printf("\nExiting");
		for(i=0; i<8; i++)	{
			printf(".");
			Beep(note[i], 125);
		}
		return 1;
	}
	return 0;
}

void f_note(int T)//Increase or decrease 'T' to set default note length(lowest row key)
{
	int note[8]={256, 288, 320, 341, 384, 427, 480, 512};
	int i, t, k;
	char *name="CDEFGABC";
	char *keys="zxcvm,./asdfjkl;qweruiopASDFJKL:QWERUIOP";

	while(1)	{

		i=getch();

		if(my_exit_tone(i))	break;//Escape

		if(i=='+')	{
			T+=25;
			printf("\n\nLength increased: %d\n", T);
		}

		if(i=='-')	{
			T-=25;
			printf("\n\nLength decreased: %d\n", T);
		}

		if(i==0)	{
			T++;
			printf("\nDenied. Leng can't be 0. Length unchanged: %d", T);
		}

		k=string_check(keys, i);

		if(k!=-1)	{

			t=(k/8)+1;//Key row detection. Time variable 't' starts from 1.

			k=k%8;

			printf("%c ", name[k]);

			Beep(note[k], T*t);
		}
	}
	return;
}

void main()
{
	int t;
	scanf("%d", &t);
	printf("Press 'Esc' to exit.....\n\n");
	f_note(t);
	return;
}
