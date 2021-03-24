#include <studio.h>
#include<string.h>
#include<stdlib.h>

// creating a structure for students that contains first name - last name - year and age
#define MAX_STUDENTS 10
struct student
{
	char fname[100];
	char lname[100];
	int year;
	int age;
};
