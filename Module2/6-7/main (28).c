#include<stdio.h>
#include<conio.h>
void main()
{	
		int a=4, b;	
		
		printf("\n\n Value of A : %d",a); //4
		a++; 
		printf("\n\n Value of A : %d",a); //5
		++a; 
		printf("\n\n Value of A : %d",a); //6
		
        b=--a;	
		printf("\n\n Value of A : %d",a); //5
		printf("\n\n Value of B : %d",b); //5
		
		b=a++;	
		printf("\n\n Value of A : %d",a); //6
		printf("\n\n Value of B : %d",b); //5
		
		b++;	
		printf("\n\n Value of B : %d",b); //6
		
	getch();
}