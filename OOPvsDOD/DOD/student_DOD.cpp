#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int id;
	char name, major, email;
};

void create(Student *students, int array_size)
{
	for (int i = 0; i < array_size; i++)
	{
		students[i].id = i;

		printf("enter name:\n");
		scanf("%c", &students[i].email);

		printf("enter major:\n");
		scanf("%c", &students[i].major);

		printf("enter email:\n");
		scanf("%c", &students[i].name);
				
		printf("student enrolled:\n\n%c\n%d\n%c\n%c\n", students[i].name, students[i].id, students[i].major, students[i].email);
	}
}

void destroy(Student *students)
{
	int i_d = 0;
	printf("enter student id:\n");
	scanf("%d", &i_d);
	students[i_d].name = NULL;
	students[i_d].id = 0;
	students[i_d].major = NULL;
	students[i_d].email = NULL;
}

void print(Student *students)
{
	int i_d = 0;
	printf("enter student id:\n");
	scanf("%d", &i_d);
	printf("%c\n%d\n%c\n%c\n", students[i_d].name, students[i_d].id, students[i_d].major, students[i_d].email);
}

int main()
{
	int add_del = 0;
	int array_size = 0;
	Student *students = (Student*)malloc(sizeof(Student)*array_size);

	printf("enter number of students to enroll:\n");
	scanf("%d", &array_size);

	while (add_del != 4)
	{
		printf("enter 1 to add student, 2 to delete student, 3 to print student, or 4 to exit:\n");
		scanf("%d", &add_del);

		if (add_del == 1) create(students, array_size);
		else if (add_del == 2) destroy(students);
		else if (add_del == 3) print(students);
	}
	
	getchar();
	return 0;
}