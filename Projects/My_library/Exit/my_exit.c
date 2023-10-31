
/*

This function exits with an escape.
Default exit time: 50 ms
Set:
	A variable for variable use.
	-1		for 'Escape only' exit.
	-2		for tone exit.
	-..30.	for fetch exit.
	-1230..	for multiple use.
	-..00..	for exit time increase.
				Every 0 counts one that would be multiplied with default time.

Time limit: (16+2)*50 ms [2 should be reserved for trailing 2 or 3]
Warning: 1, 2 or 12 may cause side effects.
*/

void my_exit(long long int ch)
{
	int i, m, t;

	int note[8]={512, 480, 427, 384, 341, 320, 288, 256};

	m=0;

	t=1;

	ch=-ch;
	while(ch%10==0)	{
		ch/=10;
		t++;
	}
	ch=-ch;

	if(ch==-13 || ch==-23 || ch==-123)	{
		printf("\nPress 'Escape' to exit.\n");
		ch=(ch-3)/10;
	}

	if(ch==-1)	{
		while(ch!=27)	{
			ch=getch();
		}
	}

	else if(ch==-2)	{
		m=1;
	}

	if(ch==-12)	{
		while(ch!=27)	{
			ch=getch();
		}
		m=1;
	}

	if(ch==27)	{
		printf("\nExiting");
		for(i=0; i<8; i++)	{
			printf(".");
			Beep(m*note[i], 50*t);
		}
	}
	return;
}

/*
Date created: 15/12/2015
Status: Complete. Try with bitwise.
*/
