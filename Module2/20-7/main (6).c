#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char ch[50]="mango";
    char ch2[50];
    
   do
   {
    
       printf("What is your fav.fruit?");
       scanf("%s",&ch2);
   }
   while(strcmp(ch,ch2)!=0);
   
   printf("Success");
   
    getch();
}
