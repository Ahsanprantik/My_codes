/*	A simple student grades database to
	demonstrate 2D array declaration in
	function parameter.	*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define CLASSES 3
#define GRADES 30
#define LEN 80

int grade[CLASSES][GRADES];

void enter_grades(void);
int get_grade(int num);
void disp_grade(int g[][GRADES]);

int main()
{
	char ch, str[LEN];

	for(;;)	{
		do {
			printf("(E)nter grades\n");
			printf("(R)eport grades\n");
			printf("(Q)uit\n");
			fgets(str, LEN, stdin);
			ch = toupper(*str);
		} while(ch!='E' && ch!='R' && ch!='Q');

		switch(ch)	{
			case 'E':
				enter_grades();
				break;
			case 'R':
				disp_grade(grade);
				break;
			case 'Q':
				exit(0);
		}
	}

	return 0;
}

void enter_grades(void)
{
	int t, i;

	for(t=0; t<CLASSES; ++t)	{
		printf("Class # %d:\n", t+1);
		for(i=0; i<GRADES; ++i)
			grade[t][i] = get_grade(i);
	}
}

int get_grade(int num)
{
	char s[LEN];

	printf("Enter grade for student # %d:\n", num+1);
	fgets(s, LEN, stdin);
	return (atoi(s));
}

void disp_grade(int g[][GRADES])
{
	int t, i;

	for(t=0; t<CLASSES; ++t)	{
		printf("Class # %d:\n", t+1);
		for(i=0; i<GRADES; ++i)
			printf("Student #%d is %d\n", i+1, grade[t][i]);
	}
}