#include<stdio.h>
#include<conio.h>

void main()
{
    int *ptr;
    
    *ptr = 10;
    
    printf("%p",&ptr);
   
    getch();
}