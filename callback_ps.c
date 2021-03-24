#include <studio.h>
#include<string.h>
#include<stdlib.h>


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


void apply( struct student* sarr, int nrce , void (*fp)(void* arg)void* arg)
{
	int i=0;
	for (i=0;i<nrce;i++)
	{
       /* c a l l b a c k */
       fp (&sarr [i], arg );
       }
}

void printrec (void* prec,void* arg)
{
	struct student* pstud=(struct student*)prec;
	printf ("%-20s %-20s %2d\n", pstud->fname, pstud->lname,pstud->year,pstud->age)
}

int main ()
{
   int nstudents=sizeof(class)/sizeof(struct student);
	int age
	puts ("rav records:");
	puts( "----------------------");
	apply( class, nstudents, printrec,NULL);
	/* sort based on first name*/
    puts("sorted by fast name:");
    puts("------------------------");
    qsort(class,nstudents, sizeof(student),compare_fast_name);
    apply(class,nstudents,printrec,NULL)
    /* sort based on last name*/
    puts ("Sorted by last name:");
    pus ("-------------------------------");
    qsort ( class,nstudents,sizeof (struct student), compare_last_name)
    apply ( class, nstudents ,printrec,NULL);
/* print people older than 20 */
    puts ( "People older than 20:");
    puts("-----------------------------");
    age=20;
    apply(class,nstudents,isolder,&age);
    return 0;
}




