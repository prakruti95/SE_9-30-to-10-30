#include<stdio.h>
#include<conio.h>
struct student
{
    int age;
    char name[10];
}s1;
int main()
{
    printf("\n Enter Name: ");
    scanf("%s",&s1.name);
    
    printf("\n Enter Age: ");
    scanf("%d",&s1.age);
    
    printf("\n Name is %s",s1.name);
    printf("\n Age is %d",s1.age);

    return 0;
}
