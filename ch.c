#include <stdio.h>
#include <caca_conio.h>

#define MAX_NAME_LENGTH 20

int main()
{
    char ch, name[MAX_NAME_LENGTH];
    int i=0;
    clrscr();
    printf("Enter a string:");
    while ( ((ch=getche())!='\r') && (i < MAX_NAME_LENGTH - 1) )
    {
        name[i]=ch;
        i++;
    }
    name[i] = '\0';
    printf("%s\n",name);

    return 0;
}
