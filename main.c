#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int sum(int,int,int*);
int factorial(int);
void struct_fn();

int sum(int firstNumber,int secondNumber,int* fact ){
	*fact = factorial(secondNumber);
	int sum  =	firstNumber+secondNumber;

	return sum;
}

int factorial(int num){
	if (num == 1)
		return 1;
	return (num*factorial(num-1));
}

typedef struct {
	char title[50];
	char author[50];
	int id;
	char description[200];
} BOOK;
//struct book;
BOOK novel;
void struct_fn(){
	strcpy(novel.title,"harry potter");
	strcpy(novel.author,"j.k rowling");
	novel.id = 10210;
	printf(" novel title  is %s",novel.title);
	printf(" author of the novel   is  %s ",novel.author);
	printf("id of the novel is %d\n",novel.id);
}
void New_record(BOOK*,int);
int book_id = 0;

int max_book_count;

void Read_record(BOOK *book_ptr){
	printf("Book title is: %s \n",book_ptr->title);
	printf("Book author is: %s \n",book_ptr->author);
	printf("Book id is: %d \n",book_ptr->id);

}


void Read_all_record(BOOK*,int);
void main (){

	while(1){

		printf("Welcome \n");
		printf("Enter max Book Count\n");
		scanf("%d",&max_book_count);
		BOOK books[max_book_count];
		printf("Press ->  X for exit | Y for add new record | L for listing record \n");
		getchar();
		char key =	getchar();
		//	printf("%c",key);
		key = tolower(key);

		if (max_book_count > book_id)	{
			if (key == 'x'){
				printf("\n bye !! \n");
				exit(1);
			}
			else if (key == 'y'){
				printf(" \n  Adding New record \n ");
				if (max_book_count == '\0'){
					max_book_count = 0;
				}
				else
					book_id ++;
				New_record(&books[book_id],book_id);
			}
			else if ( key == 'l'){
				printf("\n listing available records \n");
				Read_all_record(books,book_id);
			}
		
		else{
			printf("choose correct option \n");
			return;	
		}
		}	
	else{
		printf("Max book count reached ");
		exit(1);
	}
	key ='\0';
}
}

void New_record(BOOK *book_ptr,int book_id){
	char newbook_title[50];
	char newbook_author[50];
	printf("Enter book  book title: \n");	
	scanf("%s",&newbook_title);
	strcpy(book_ptr->title,newbook_title);	
	book_ptr->id = book_id;
	printf("Enter book  book author: \n");	
	scanf("%s",&newbook_author);
	strcpy(book_ptr->author,newbook_author);	
}
void Read_all_record(BOOK *ptr,int book_count){
	int count = 0;
	while (count < book_count){
		Read_record(ptr);
		ptr++;
		printf("NEW RCD \n\n");
}
}
