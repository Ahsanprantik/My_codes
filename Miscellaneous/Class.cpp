#include <stdio.h>
using namespace std;
class day{
	char people_name[100];
	int total_people;
	char todo[100];
	public:
	int miss_math() {
		char ch;
		int a, b;
		scanf("%d %c %d", &a, &ch, &b);
		printf("%d\n", a+b);
		return 0;
	}
	int smile() {
		printf("\n:)\n");
		return 0;
	}
};
int main()
{
	class day today;
	int i;
	today.total_people=1;
	printf("Meeting people:\n");
	gets(today.people_name);
	for(i=0; today.people_name[i]!='\0'; i++)	{
		if(today.people_name[i]==' ')
			today.total_people++;
	}
	printf("\nTotal people: %d\n", today.total_people);
	printf("\nWhat to do:\n");
	gets(today.todo);
	printf("\nMath Class:\n");
	today.miss_math();
	today.smile();
	return 0;
}