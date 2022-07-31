#include <stdio.h>

unsigned int shift_(unsigned int);




int hex_cov(int num,char *result){
	if(num == 0){
		return;
	}
	
}
void main(){

printf("Enter a binary \n"); 
unsigned int number;
scanf(" %u",&number);
printf("Entered number : %d \n",number); 
int binary = bin_conv(number);
printf("Entered number in binary : %b \n",binary); 
int hex = hex_conv(number);
printf("Entered number in hex: %b \n",hex); 
unsigned int sh_ch = shift_(bin);
printf("shifted bin \t : \t %d \n",sh_ch);

}

unsigned int shift_(unsigned int ch){

	unsigned int sh_ch = ch>> 3;
	return sh_ch;
}

