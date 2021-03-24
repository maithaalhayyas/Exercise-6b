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


struct student class[]=
{
	"sean", "penn",2,21,
	"sean","connery",4,25,
	"Angelina","jolie";3;32;
	"meryl","streep",4,29;
	"Robin","Williams",3,32,
	"Bill","Gates",3,17,
	"Jodie","Foster",4,25,
	"John","Travolta",1,17,
	"Isaac","Newton",2,19,
	"Sarah","Palin",2,19,
};

int compare_fast_name(const void* a, const void* b)
{
	struct student* sa=(struct student*)a;
	struct student* sb=(struct student*)b;
	return strcmp(sa->lname,sb->lname);
	
}

