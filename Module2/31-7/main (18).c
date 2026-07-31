#include<stdio.h>
#include<conio.h>

void abcd(int x1,int y1)
{
    printf("\n Inside Function : Before x= %d y= %d",x1,y1);
    int z1;
    z1=x1;
    x1=y1;
    y1=z1;
    printf("\n Inside Function : After x= %d y= %d",x1,y1);
}

void main()
{
     int x=50,y=70;
     printf("\n OutSide Function : Before x= %d y= %d",x,y);
     abcd(x,y);
     printf("\n OutSide Function : After x= %d y= %d",x,y);
    getch();
}