#include <stdio.h>
 
struct student
{
	char name[24];
	char dept_name[5];
	float cgpa;
	long long id_no;
};
 
int main(void) {
	printf("%d %d", sizeof(long long), sizeof(struct student[10000000]));
	return 0;
}