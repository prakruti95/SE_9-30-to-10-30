#include<stdio.h>
#include<conio.h>
void main()
{
        char team;
        
        printf("Enter Your Fav. Team : \n Press M for Mumbai Indians \n Press C for Chennai Super Kings  \n Press R for Royal ");
        scanf("%c",&team);

        if(team=='M')
        {
            printf("Go Mumbai Indians!");
        }
         else if(team=='C')
        {
            printf("Chennai Super Kings for the win!");
        }
         else if(team=='R')
        {
            printf("Rock Here");
        }
        else
        {
            printf("Sorry team name not found");
        }
    
    getch();
}
