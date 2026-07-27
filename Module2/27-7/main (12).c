#include<stdio.h>
#include<conio.h>
void main()
{
    
    int marks[3];
    
    for(int i=0;i<3;i++)
    {  
        printf("Enter Marks");
        scanf("%d",&marks[i]);
    }
    
     for(int i=0;i<3;i++)
    {  
      printf("\n Your marks is %d",marks[i]);
    }
    
    
 
    
    getch();
}