#include <stdio .h> 
#include <stdlib .h> 
#include <string .h>


#define MAX_BUCKETS 1000 
#define MULTIPLIER 31 
#define MAX LEN 100

struct wordrec{
	char* word;
	unsigned long count;
	struct wordrec* next;

} ;

struct wordrec* walloc(const char* str)
{
	struct wordrec* p=(struct wordrec*)malloc(sizeof wordrec);
	if(p!=NULL)
	{
		P->count=0;
		P->word=STRDUP{str};/* creates a duplicate */ 
		p->next=NULL;
	}
	return p;
}
