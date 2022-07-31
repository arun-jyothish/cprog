#include <stdio.h>

int spread_no = 0;
int input_no ;
int Spread(int);
int sum_of_digits(int);
void main(){
/*
	printf("Enter  consecutive  page number sum: ");
	scanf("%d",&input_no);
	if (input_no%2 == 0)
	{
		printf("!! Can be found spread !! \n");
		return;
	}
	else {
		int num = input_no/2;
		Spread(num);
		printf(" spread no: %d \n",spread_no);
	}
	printf("Enter number to find sum of digits: \n");
	int num;
	scanf("%d",&num);

*/
	printf("Enter indented sum to find left page no. : \n");
	int intended_num;
	int num = 0;
	scanf("%d",&intended_num);
	int sum = 0;
	while(sum != intended_num){
	int sum = sum_of_digits(num);
	num++;
	}
	printf("left page no:  %d\n",num);
}

int Spread(int num ){
	spread_no++;
	if (num <= 1)
		return 1;
	return Spread(num-2);
}

int sum_of_digits(int left_page_no){
	int sum = 0;
	while(left_page_no != 0){
		sum += left_page_no%10;
		left_page_no /=10;
	}
	return (sum*2+1); // sum of digits consecutive page no.s
}
