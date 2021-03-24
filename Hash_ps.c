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

struct wordrec∗ table [MAXLEN] ; 

 unsigned long hashstring (const char∗ str) 
 {
 	unsigned long hash=0; 
 	while(∗str)
 	{
 		hasa=hash*MULTIPLIER+*str;
 		str++;
 	} 
 	return hash%MAX_BUCKETS;
 }

  struct wordrec∗ lookup(const char∗ str, int create)
 {
 	unsigned long hash=hashstring (str);
 	struct wordrec∗ wp=table[hash]; 
 	struct wordrec∗ curr=NULL;
 	for( curr=wp; curr!=NULL; curr=curr->next)
 		if(create(curr->word,str)==0) /* found */
 	{
 		return curr;
 	}
 	/* not found */
 	if(create)
 	{
 		curr=(struct wordrec*)malloc(sizeof(struct wordrec));
 		curr->world=strdup(str);
 		curr->count=0;
 		/*add to front */ 
 		curr->next=table[hash];
 		table[hash]=curr
 	}
 	return curr;
}

void cleartable()
{
	struct wordrec* wp=NULL;
	int i=0;
	for (i=0;i<MAX_BUCKETS;I++)
	{
		wp=table[i];
		while(wp)
		{
			p=wp
			wp=wp->next;

			free(p->word);
			free(p);
		}
	}
}

int main(int argc, char const *argv[])
{
	FILE* fp=fopen("book.text","r");
	char word [1024];
	struct  wordrec* wp=NULL;
	int i=0;
	memset (table ,0,sizeof(table));
	while(1)
	{
		if (fscanf(fp,"%s",word)!=1)
			break;
		wp=lookup(word,1);
		wp->count++;
	}
	fclose(fp);
for (i=0;i<MAX_BUCKETS;I++)
{
	for(wp=table[i];wp!=NULL;wp=wp->next)
	{
		if (wp->count>1000)
		{
			printf("%s--%1d/n",wp->word,wp->count);
		}
	}
}
cleartable();
return 0;
}

