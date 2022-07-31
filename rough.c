#include <stdio.h>
#include <string.h>

typedef struct {
	char title[50];
	char author[50];
	int id;
	char description[200];
} BOOK ;

BOOK book[3];


void main()
{
	strcpy(	book[0].title,"hello 1");
	strcpy(	book[1].title,"hello 2");
	strcpy(	book[2].title,"hello 3");
	char newbook_title[23];
	char str[3][10];
	//char* ptr0[10],ptr1[10],ptr2[10];
	BOOK* ptr0,ptr1,ptr2;
	printf("\n address 0: %u ",&book);
	printf("\n address 0: %u ",&book[0]);
	printf("\n address 1: %u ",&book[1]);
	printf("\n address 2: %u ",&book[2]);
	
	ptr0 = book;
	//ptr1 = &book+(1*sizeof(BOOK));
	//ptr2 = &book+(2*304);
	printf("%u\n",ptr0++);
	printf("%u\n",ptr0);
	
/*	
	strcpy(str[0],*ptr0);
	strcpy(str[1],*ptr1);
	strcpy(str[2],*ptr2);
	printf("%s\n",ptr0->title);
	printf("%s\n",ptr1->title);
	printf("%s\n",ptr2->title);
			
*/	
}

