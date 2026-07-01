#include<stdio.h>
#include<conio.h>
void main()
{
       int age = 65;
       
       if(age>=18)
       {
           printf("\n Eligible to vote");
           if(age>=60)
           {
               printf("\n You are under senior citizen category");
           }
           else
           {
                 printf("\n You are under young age category");
           }
       }
       else
       {
           printf("Not Eligible to vote");
       }
        
       getch();
}