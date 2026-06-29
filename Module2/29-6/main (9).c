#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 6;
    int b = 2;
    
    a+=b;//a=a+b
    printf("\n %d",a);//8
    
    a-=b;//a=a-b
    printf("\n %d",a);
    
    a*=b;
    printf("\n %d",a);
    
    a/=b;
    printf("\n %d",a);
    
    a%=b;
    printf("\n %d",a);
    
    getch();
}