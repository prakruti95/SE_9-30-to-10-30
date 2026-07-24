#include<stdio.h>
#include<conio.h>

//
int countlength(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    
    return i;
}
void main()
{
    char str[100];
    printf("Enter Your Data:");
    scanf("%s",&str);
    
    printf("%d",countlength(str));    
    
    
    getch();
}
