#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char ch[50];
    char ch2[50];
    
    printf("Enter Value");
    scanf("%s",&ch);
  
    strcpy(ch2,ch);
    printf("%s",ch2);
   
    getch();
}
