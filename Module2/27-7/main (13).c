#include<stdio.h>
#include<conio.h>
void main()
{
    
    int marks[3],total=0;
    
    for(int i=0;i<3;i++)
    {  
        printf("Enter Marks");
        scanf("%d",&marks[i]);
    }
    
    for(int j=0;j<3;j++)
    {
       total+=marks[j];
       
        
    }
    
    printf("\n %d",total);
    
    float per = total/3;
    printf("\n %f",per);
    
    
   
    
    
 
    
    getch();
}