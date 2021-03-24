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
