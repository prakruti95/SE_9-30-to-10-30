#include<stdio.h>
#include<conio.h>
struct address
{
     char city[50];
     int zip;
};
struct student
{
    char name[50];  
    int age;
    struct address add; 
}s1,s2;
void main()
{
    struct student s1;
    struct student s2;
    
    s1.age=20;
    s2.age=30;
    
    printf("\n %d",s1.age);
    printf("\n %d",s2.age);
   
    getch();
}