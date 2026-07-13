#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rev=0;
    printf("Enter Any  Number: ");
    scanf("%d",&num);//1234
    
   while(num>0)
    {
     int rem = num%10;//4//3//2//1
     rev=(rev*10)+rem;//4321
     num=num/10;//1//0
    }
   
    
  
    return 0;
}
