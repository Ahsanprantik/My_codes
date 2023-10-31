
/*
This function exits with an escape. Playing the 8 basic notes.
*/
void my_exit_cont()
{
	int i;
	while(getch()!=27)	{}
	printf("\nExiting");
	for(i=0; i<8; i++)	{
		printf(".");
		Beep(0, 125);
	}
	return;
}
