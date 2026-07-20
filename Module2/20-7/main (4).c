#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char ch[50];
    char ch2[50];
    
    printf("Enter Firstname");
    scanf("%s",&ch);
    printf("Enter Lastname");
    scanf("%s",&ch2);
    
    printf("%s",strcat(ch,ch2));
   
    getch();
}
