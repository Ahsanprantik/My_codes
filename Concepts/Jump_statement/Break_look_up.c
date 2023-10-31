#include <stdio.h>
#include <string.h>

void look_up(void);

int main()
{
	look_up();

	return 0;
}
/* will look up for a specific name; if found will print the index */
void look_up(void)
{
	int i = 0, nfound;
	char name[6][10] = {"Fahim", "Tawhid", "Zim", "Aqib", "FBI", "Junnun"};

	do {
		/* look up names */
		if('0' == getchar())	break;	/* will cause immediate loop break */
	
		nfound = strcmp(name[i], "FBI");	/* 0 if the name matches */
		i++;
	} while(nfound);

	if(!nfound)	printf("Process match with the %d th name\n", i);
	else printf("Not found!\n");
}