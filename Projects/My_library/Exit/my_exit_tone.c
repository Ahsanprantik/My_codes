
/*
This function exits with an escape. Playing the 8 basic notes.
*/
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
